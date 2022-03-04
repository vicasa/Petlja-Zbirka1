#include<stdio.h>

int main(){
	unsigned s1, s2, s3, temp;
  scanf("%u %u %u", &s1, &s2, &s3);
  /*hocemo da razmenimo vrednosti ove tri promenljive tako da vazi s1 >= s2 >= s3;*/
  if(s1 < s2){
  	temp = s1;
  	s1 = s2;
  	s2 = temp;
  }/*nakon ovoga s1 >= s2*/
  if(s1 < s3){
  	temp = s1;
  	s1 = s3;
  	s3 = temp;
  }/*nakon ovoga s1 >= s3; i s1>= s2*/
  if(s2 < s3){
  	temp = s2;
  	s2 = s3;
  	s3 = temp;
  }/*nakon ovoga s2 >= s3; pa je s1 >= s2 >= s3*/
  
  if(s2+s3 <= s1) printf("trougao ne postoji\n"); /*trougao sa stranicama */
  else
  	if(s1==s2 && s2==s3) printf("jednakostranicni\n");
  	else
  		if(s1!=s2 && s2!=s3) printf("raznostranicni\n");
  		else printf("jednakokraki\n");
}
