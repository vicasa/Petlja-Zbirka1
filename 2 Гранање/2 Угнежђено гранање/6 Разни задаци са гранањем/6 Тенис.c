#include<stdio.h>

int main(){
	unsigned i1, i2, temp, flag=0;
  scanf("%u %u", &i1, &i2);
  if(i1 < i2){
  	temp = i1;
  	i1 = i2;
  	i2 = temp;
  	flag=1; /*upaljen flag znaci da ako imamo pobednika, pobednik je igrac 2*/
  }/*nakon ovoga vazi i1 >= i2*/
  if(i1 > 7) {printf("neispravno\n"); return 0;} /*najvise osvojenih gemova moze biti 7 i moze biti jedino 7 5 ili 7 6 ako jedan ima 7*/
  if(i1 == 7){
  	if(i2 < 5) {printf("neispravno\n"); return 0;} /*ako bolji ima 7, onda losiji moze imati jedino 5 ili 6*/
  }
  else
  	if(i1<6 || i1-i2<2) {printf("nije zavrseno\n"); return 0;} /*ovo znaci da jos niko nema 6 ili je rezultat 6:6 ili 6:6; ovo je else od i1==7 i znamo da je i1<=7, pa ako nije i1<6, onda je i==6*/
  
  /*ako smo dosli dovde, onda je rezultat ispravan i mec je zavrsen - zahvaljujuci return-u*/
  if(flag) printf("pobedio drugi\n");
  else printf("pobedio prvi\n");
}
