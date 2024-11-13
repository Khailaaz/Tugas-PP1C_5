#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, hargaSetelahDiskon;

    
    printf("Masukkan Kode: ");
    scanf("%d", &kode);
    printf("Masukkan Jenis (A/B/C): ");
    scanf(" %c", &jenis); 
    printf("Masukkan Harga: ");
    scanf("%f", &harga);
    switch (jenis) {
        case 'A':
            hargaSetelahDiskon = harga * 0.90;
            printf("Jenis barang %c mendapat diskon 10%%, Harga setelah didiskon: %.2f\n", jenis, hargaSetelahDiskon);
            break;
        case 'B':
            hargaSetelahDiskon = harga * 0.85;
            printf("Jenis barang %c mendapat diskon 15%%, Harga setelah didiskon: %.2f\n", jenis, hargaSetelahDiskon);
            break;
        case 'C':
            hargaSetelahDiskon = harga * 0.80;
            printf("Jenis barang %c mendapat diskon 20%%, Harga setelah didiskon: %.2f\n", jenis, hargaSetelahDiskon);
            break;
        default:
            printf("Jenis tidak valid. Harap masukkan A, B, atau C.\n");
            break;
    }

    return 0;
}