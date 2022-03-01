#include<stdio.h>
/*ne dopada mi se ovo resenje, kapiram da ima bolje*/
int main(){
	unsigned s1, s2, s3, temp;
  scanf("%u %u %u", &s1, &s2, &s3);
  /*hocemo da razmenimo vrednosti ove tri promenljive tako da vazi s1 > s2 > s3; pretpostavka su nakon ucitavanja s1, s2 ,s3 razliciti brojevi*/
  if(s1 < s2){
  	temp = s1;
  	s1 = s2;
  	s2 = temp;
  }/*nakon ovoga s1 je veci od s2*/
  if(s1 < s3){
  	temp = s1;
  	s1 = s3;
  	s3 = temp;
  }/*nakon ovoga s1 je veci od s3; i od s2*/
  if(s2 < s3){
  	temp = s2;
  	s2 = s3;
  	s3 = temp;
  }/*nakon ovoga s2 je veci od s3; pa je s1 >s2>s3*/
  
  /* zapravo s1 je anina visina, pa su ostale sestre visoke, s1-x, s1-2x, s1 -3x, gde je x razlika u visini izmedju 'uzastopnih' sestara.
  ako je s1-s2 < s2-s3 onda je s2-s1=x, a s2-s3=2x, tj. s2=s1-x i s3= s2-2x= s1-3x, pa je cetvrta sestra s1-2x sto je isto kao s2-x;
  ako je s1-s2 == s2-s3, onda je s1-s2=x, s3-s2=x, tj. s2=s1-x i s3= s2-x= s1-2x, pa je cetvrta sestra s1-3x, a to je isto sto i s3 -x
  ako je s1-s2 > s2 -s3, onda je s2-s1=2x, s3-s2=x, tj. s2=s1-2x i s3= s2-x= s1-3x, pa je cetvrta sestra s1-x
  */
  /*dakle treba da uporedimo razlike s1-s2 i s2-s3*/
  unsigned raz1=s1-s2, raz2=s2-s3;
  if(raz1 < raz2) printf("%u\n", s2 - raz1);
  else
  	if(raz1 == raz2) printf("%u\n", s3 - raz1);
  	else printf("%u\n", s1 - raz2);/*ovde je raz2 jednaka x*/
}
