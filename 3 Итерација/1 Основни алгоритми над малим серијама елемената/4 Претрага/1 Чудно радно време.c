#include<stdio.h>

int main(){
	unsigned sp, sk, mp1, mk1, mp2, mk2, mp3, mk3, mp4, mk4, m;
  
  scanf("%u %u %u %u", &sp, &mp1, &sk, &mk1); /*1. interval*/
  mp1 += 60*sp;
  mk1 += 60*sk;

  scanf("%u %u %u %u", &sp, &mp2, &sk, &mk2); /*2. interval*/
  mp2 += 60*sp;
  mk2 += 60*sk;

  scanf("%u %u %u %u", &sp, &mp3, &sk, &mk3); /*3. interval*/
  mp3 += 60*sp;
  mk3 += 60*sk;

  scanf("%u %u %u %u", &sp, &mp4, &sk, &mk4); /*4. interval*/
  mp4 += 60*sp;
  mk4 += 60*sk;

  scanf("%u %u", &sp, &m); /*vreme za proveru*/
  m += 60*sp;

	if(m < mp1) {printf("ne\n"); return 0;}
	if(m < mk1) {printf("da\n"); return 0;}
	if(m < mp2) {printf("ne\n"); return 0;}
	if(m < mk2) {printf("da\n"); return 0;}
	if(m < mp3) {printf("ne\n"); return 0;}
	if(m < mk3) {printf("da\n"); return 0;}
	if(m < mp4) {printf("ne\n"); return 0;}
	if(m < mk4) {printf("da\n"); return 0;}
	printf("ne\n");
}
