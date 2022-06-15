#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 225

int maloSlovo(char c) { return c >= 'a' && c <= 'z'; }

void podeliNaReci(const char *recenica) {
    const char *slovo = recenica;

    while(1) {
        while (maloSlovo(*slovo)) {
            printf("%c", *slovo);
            ++slovo;
        }

        if (*slovo == 0) break; // *slovo = 0 --> kraj recenice
        ++slovo; // preskace razmak

        printf("\n"); // novi red, ocekuje se nova rec
    }
}

int main(){
	char recenica[MAX_LENGTH];
	gets(recenica); // ucitaj recenicu sa standardnog ulaza

	podeliNaReci(recenica);

	return 0;
}
