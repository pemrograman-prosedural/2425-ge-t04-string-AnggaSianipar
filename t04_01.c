// 12S24025 - Paula Gevriella Tambunan
// 12S24032 - Angga B. P. Sianipar

#include <stdio.h>
#include <string.h>

int main() {
    char p[9999]; // String untuk menyimpan input

    int a, Nilaiasci;

    scanf("%s", p); // Membaca input sebagai string

    for (a = 0; a < strlen(p); a += 3) { // Membaca setiap 3 digit
       
      sscanf(&p[a], "%3d", &Nilaiasci); // Ambil 3 digit dan ubah ke integer
      
      printf("%c", (char)Nilaiasci); // Cetak karakter
    }

    printf("\n");
    
    return 0;
}
