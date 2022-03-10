#include<stdio.h>

int main(){
	
	int i, min=0 , dan;
	
	scanf("%i", &i); /*1. dan*/
	if(i>0 && (min == 0 || i< min)) {min =i; dan=1;}

	scanf("%i", &i); /*2. dan*/
	if(i>0 && (min == 0 || i< min)) {min =i; dan=2;}

	scanf("%i", &i); /*3. dan*/
	if(i>0 && (min == 0 || i< min)) {min =i; dan=3;}

	scanf("%i", &i); /*4. dan*/
	if(i>0 && (min == 0 || i< min)) {min =i; dan=4;}

	scanf("%i", &i); /*5. dan*/
	if(i>0 && (min == 0 || i< min)) {min =i; dan=5;}

	if(min == 0) printf("-\n");
	else{
		printf("%i\n", min);
		switch(dan){
		case 1: printf("PON\n"); break;
		case 2: printf("UTO\n"); break;
		case 3: printf("SRE\n"); break;
		case 4: printf("CET\n"); break;
		case 5: printf("PET\n"); break;
		}
	}	
}
