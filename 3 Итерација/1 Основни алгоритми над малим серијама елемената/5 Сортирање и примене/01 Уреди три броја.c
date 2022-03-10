#include<stdio.h>

int main(){
	unsigned p1, p2, p3, temp;
  scanf("%u %u %u", &p1, &p2, &p3);
  /*
  razmenjujemo vrednosti ove tri promenljive tako da vazi p1 <= p2 <= p3;
  ovo se naziva sortiranje (promenljivih)
  */
  if(p1 > p2){
  	temp = p1;
  	p1 = p2;
  	p2 = temp;
  }/*nakon ovoga skup {p1, p2, p3} nije promenjen i vazi p1 <= p2*/
  if(p1 > p3){
  	temp = p1;
  	p1 = p3;
  	p3 = temp;
  }/*nakon ovoga skup {p1, p2, p3} nije promenjen i vazi p1 <= p2 i p1<=p3*/
  if(p2 > p3){
  	temp = p2;
  	p2 = p3;
  	p3 = temp;
  }/*nakon ovoga skup {p1, p2, p3} nije promenjen i vazi p1 <= p2 i p2<=p3*/
  
  printf("%u\n%u\n%u\n", p1, p2, p3);
}
