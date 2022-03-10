#include<stdio.h>

int main(){
	float s1, s2, s3;
  scanf("%f %f %f", &s1, &s2, &s3);

  if((s1 +s2 <= s3) || (s1 +s3 <= s2) || (s2 +s3 <= s1)) printf("ne\n");
  else printf("da\n");
}
