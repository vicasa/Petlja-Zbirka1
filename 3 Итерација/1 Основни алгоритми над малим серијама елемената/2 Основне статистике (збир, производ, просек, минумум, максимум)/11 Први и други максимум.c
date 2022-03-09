#include<stdio.h>

int main(){
	
	int b, max1, max2;
	scanf("%i", &b); /*1. broj*/
	max1 = b;
	max2 = max1;
	
	scanf("%i", &b); /*2. broj*/
	if(b!=max1)
		if(b > max1) {max2=max1; max1=b;}
		else max2 = b;
	
	scanf("%i", &b); /*3. broj*/
	if(b!=max1)
		if(b > max1) {max2=max1; max1=b;}
		else
			if(max1==max2 || b>max2) max2=b; 
	
	scanf("%i", &b); /*4. broj*/
	if(b!=max1)
		if(b > max1) {max2=max1; max1=b;}
		else
			if(max1==max2 || b>max2) max2=b;
	
	scanf("%i", &b); /*5. broj*/
	if(b!=max1)
		if(b > max1) {max2=max1; max1=b;}
		else
			if(max1==max2 || b>max2) max2=b;
	
	
	printf("%i\n", max1);
	if(max1 == max2) printf("-\n"); /*ako je i dalje max1==max2, to znaci da su svi brojevi jednaki*/
	else printf("%i\n", max2);
	
}
