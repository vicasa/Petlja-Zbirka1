#include <stdio.h>

/*Zadatak je predvidjen da se radi koriscenjem podatka tipa string (niz karaktera).
Naravno zadatak moze da se uradi i bez toga, sto cu ovde i uraditi.*/

int main() {
  char c1, c2, c3; /*prva tri slova*/
  scanf("%c%c%c", &c1, &c2, &c3);
  switch(c1){
    case 'f': printf("2\n"); break;
    case 's': printf("9\n"); break;
    case 'o': printf("10\n"); break;
    case 'n': printf("11\n"); break;
    case 'd': printf("12\n"); break;
    case 'j':
      if(c2=='a') printf("1\n");
      else
        if(c3=='n') printf("6\n");
        else printf("7\n");
      break;
    case 'm':
      if(c3=='r') printf("3\n");
      else printf("5\n");
      break;
    case 'a':
      if(c2=='p') printf("4\n");
      else printf("8\n");
  }
  /*da imamo podatak string, u switch-u bi bila ucitana rec, a u case-ovima bi bilo "januar", "februar", itd*/
}
