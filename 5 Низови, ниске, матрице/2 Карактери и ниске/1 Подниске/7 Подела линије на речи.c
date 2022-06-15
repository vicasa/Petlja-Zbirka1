#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 225

int maloSlovo(char c) { return c >= 'a' && c <= 'z'; }

void stampajReci(const char *recenica) {
    const char *slovo = recenica;

    char rec[MAX_LENGTH];
    char *slovoReci;

    while(1) {
        slovoReci = rec;
        while (maloSlovo(*slovo)) {
            *slovoReci = *slovo;
            ++slovo, ++slovoReci;
        }
        *slovoReci = '\0';

        puts(rec);

        if (*slovo == 0) break; // *slovo = 0 --> kraj recenice
        ++slovo; // preskace razmak
    }
}

int main(){
	char recenica[MAX_LENGTH];
	gets(recenica); // ucitaj recenicu sa standardnog ulaza

	stampajReci(recenica);

	return 0;
}
