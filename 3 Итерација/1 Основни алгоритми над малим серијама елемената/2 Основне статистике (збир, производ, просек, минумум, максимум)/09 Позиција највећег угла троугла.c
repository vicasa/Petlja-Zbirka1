#include<stdio.h>

int main(){
	unsigned st, m, s, zbir, max, rez;
  
  scanf("%u %u %u", &st, &m, &s); /*1. ugao*/
  s += (st*60 + m)*60;
  zbir = s;
  max = s;
  rez=1;
  
  scanf("%u %u %u", &st, &m, &s); /*2. ugao*/
  s += (st*60 + m)*60;
  zbir += s;
  if(s > max) {max=s; rez=2;}
  
  s = 180*60*60 - zbir; /*3. ugao*/
  if(s > max) rez=3;
  
 	printf("%u\n", rez);
}
