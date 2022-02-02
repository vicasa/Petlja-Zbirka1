#include<stdio.h>

/* O prodajnom i kupovnom kursu

Ako su V i W dve valute (fakticki jedinice merenja),
kupovni kurs valute V prema valuti W oznacavacemo sa kVW,
a prodajni kurs valute V prema valuti W oznacavacemo sa pVW.
Po definiciji prodajnog i kupovnog kursa imamo

1 V -> pVW W, tj. x V -> x*pVW W
kVW W -> 1 V, tj. 1 W -> (1/kVW) V, tj. x W -> (x/kVW) V

(levo od strelice je sa cime ulazimo u  menjacnicu, a desno je sa cime izlazimo)

Primetimo da vazi:
(1 V -> pVW W) i (1 V -> (1/kWV) W)
odakle zagljucujemo da je pVW=1/kWV, tj. pVW*kWV=1, tj. kWV=1/pVW
Ovim zakljucujemo da sve mozemo izraziti samo sa prodajnim kursom,
naime kupovni kurs valute V prema W je reciprocan prodajnom kursu valute W prema V.
*/

/*O ZADATKU

Oznacimo sa V1 valutu dinar, sa V2 evro i sa V3 dolar.
Sa ulaza se cita redom kV2V1, pV2V1, kV3V1, pV3V1.
Na izlaz treba ispisati redom kV3V2, pV3V2, kV2V3, pV2V3.

Primetimo da je dovoljno izracunati pV3V2 i pV2V3, jer vazi
kV3V2=1/pV2V3 i kV2V3=1/pV3V2.

1 V3 -> pV3V1 V1 -> pV3V1*pV1V2 V2
pa je pV3V2=pV3V1*pV1V2=pV3V1/kV2V1

slicno dobijamo da je pV2V3=pV2V1/kV3V1
*/

int main(){
	double kV2V1, pV2V1, kV3V1, pV3V1; /*za ulaz*/
	scanf("%lf %lf %lf %lf", &kV2V1, &pV2V1, &kV3V1, &pV3V1);
	double pV3V2=pV3V1/kV2V1, pV2V3=pV2V1/kV3V1; /*za izlaz*/
	printf("%.4lf\n%.4lf\n%.4lf\n%.4lf\n", 1/pV2V3, pV3V2, 1/pV3V2, pV2V3);
}
