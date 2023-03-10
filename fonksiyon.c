#include <stdio.h>

// Toplama Fonksiyonu
int topla(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

// Çıkarma Fonksiyonu
int cikar(int sayi1, int sayi2) {
    return sayi1 - sayi2;
}

// Çarpma Fonksiyonu
float carp(float sayi1, float sayi2) {
    return sayi1 * sayi2;
}


// Bölme Fonksiyonu
float bol(float sayi1, float sayi2) {
    if (sayi2 == 0) {
        printf("Hata: sifira bolme hatasi.\n");
        return 0;
    } else {
        return sayi1 / sayi2;
    }
}

int main() {
    int sayi1 = 10;
    int sayi2 = 2;

    // Toplama işlemi
    int sonuc1 = topla(sayi1, sayi2);
    printf("%d + %d = %d\n", sayi1, sayi2, sonuc1);

    // Çıkarma işlemi
    int sonuc2 = cikar(sayi1, sayi2);
    printf("%d - %d = %d\n", sayi1, sayi2, sonuc2);

    // Çarpma işlemi
    float sonuc3 = carp(sayi1, sayi2);
    printf("%d * %d = %.2f\n", sayi1, sayi2, sonuc3);

    // Bölme işlemi
    float sonuc4 = bol(sayi1, sayi2);
    printf("%d / %d = %.2f\n", sayi1, sayi2, sonuc4);

    return 0;
}
