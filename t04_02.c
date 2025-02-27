// 12S24025 - Paula Gevriella Tambunan
// 12S24032 - Angga B. P. Sianipar

#include <stdio.h>
#include <string.h>

int main() {
    char b[21];

    printf("");
    scanf ("%20[^\n]", b);

    int panjangascii = strlen(b);

    for (int a = 0; a < panjangascii; a++) {

        printf("%03d", b[a]);

    }

    printf("\n");
    return 0;
}
