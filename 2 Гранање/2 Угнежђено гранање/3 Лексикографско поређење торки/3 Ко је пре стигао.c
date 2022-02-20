#include<stdio.h>

int main(){
	int hP, mP, sP, hM, mM, sM;
	scanf("%i %i %i %i %i %i", &hP, &mP, &sP, &hM, &mM, &sM);
	if(hP < hM) printf("Pera\n");
	else
		if (hP > hM) printf("Mika\n");
		else /*ovo se izvrsava ako hP == hM*/
			if(mP < mM) printf("Pera\n");
			else
				if (mP > mM) printf("Mika\n");
				else /*ovo se izvrsava ako hP == hM i mP == mM*/
					if(sP < sM) printf("Pera\n");
					else
						if(sP > sM) printf("Mika\n");
						else printf("istovremeno\n"); /*ovo se izvrsava ako hP == hM i mP == mM i sP==sM	*/
}
/*Ovaj zadatak je skoro identican kao i punoletstvo.
I punoloetstvo je moglo ovako preglednije da se napise.
Ideja je, prvo se radi ono sto ne zahteva dodatne provere.
*/
