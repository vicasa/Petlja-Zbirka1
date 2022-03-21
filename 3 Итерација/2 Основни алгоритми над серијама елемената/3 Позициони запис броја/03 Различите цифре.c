#include<stdio.h>


int main(){
	unsigned n, b0=0, b1=0, b2=0, b3=0, b4=0, b5=0, b6=0, b7=0, b8=0, b9=0 ;
	scanf("%u", &n);
	while(n != 0){ 
		switch(n%10){
			case 0:
				b0++;
				if(b0>1) {printf("NE\n"); return 0;}
				break;
			case 1:
				b1++;
				if(b1>1) {printf("NE\n"); return 0;}
				break;
			case 2:
				b2++;
				if(b2>1) {printf("NE\n"); return 0;}
				break;
			case 3:
				b3++;
				if(b3>1) {printf("NE\n"); return 0;}
				break;
			case 4:
				b4++;
				if(b4>1) {printf("NE\n"); return 0;}
				break;
			case 5:
				b5++;
				if(b5>1) {printf("NE\n"); return 0;}
				break;
			case 6:
				b6++;
				if(b6>1) {printf("NE\n"); return 0;}
				break;
			case 7:
				b7++;
				if(b7>1) {printf("NE\n"); return 0;}
				break;
			case 8:
				b8++;
				if(b8>1) {printf("NE\n"); return 0;}
				break;
			case 9:
				b9++;
				if(b9>1) {printf("NE\n"); return 0;}
				break;
		}
		n /= 10;
	}
	printf("DA\n");
}
