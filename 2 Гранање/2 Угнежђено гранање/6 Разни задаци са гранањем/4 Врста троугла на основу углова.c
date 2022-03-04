#include<stdio.h>

int main(){
	unsigned s1, m1, s2, m2, s3, m3;
  scanf("%u %u %u %u %u %u", &s1, &m1, &s2, &m2, &s3, &m3);
  /*pretvaromo uglove u minute*/
  m1 += 60*s1;
  m2 += 60*s2;
  m3 += 60*s3;
  /*
  u zadatku je receno da su uglovi od 0 do 180 stepeni i nisu rekli da su ove granice ekskluzivne ili inkluzivne
  proveravamo da li je neki mozda 0, mozda je podvaljen test primer
  */
  if(m1==0 || m2==0 || m3==0) {printf("ne\n"); return 0;} /*svi uglovi u trouglu su veci od 0 stepeni*/
  
  if(m1+m2+m3 != 180*60) {printf("ne\n"); return 0;} /*zbir uglova u trouglu je 180 stepeni*/
  
  /*ako smo stigli dovde, znaci da takav trougao postoji,
  pa je ostalo da odredimo njegovu vrstu,  za to nam je potreban samo njegov najveci ugao*/
  int max=m1;
  if(m2 > max) max= m2;
  if(m3 > max) max= m3;
  
 	int prav = 90*60;
 	
  if(max > prav) printf("tupougli\n"); 
  else
  	if (max == prav) printf("pravougli\n");
  	else printf("ostrougli\n");
}
