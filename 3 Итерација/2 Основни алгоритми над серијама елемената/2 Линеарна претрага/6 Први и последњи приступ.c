#include <stdio.h>

/* za ovaj zadatak je potrebno znati koristiti stringove, sto u jeziku C nije jednostavno*/

int main()
{
    int t, n, r, flag=0; /*t broj targetiranog racunar, n broj logovanja, r promenljiva u koju ucitavamo broj racunara, flag za prvi nadjeni racunar*/
    char ime[21];
    scanf("%i %i", &t, &n);
    for(int i=1; i<=n; i++){
        scanf("%i", &r);
        if(r == t){
            scanf("%s", ime);
            if(flag == 0) {printf("%s\n", ime); flag=1;}
        }
        else scanf("%*s");
    }
    if(flag==1) printf("%s\n", ime);
    else printf("nema\n");
    return 0;
}
