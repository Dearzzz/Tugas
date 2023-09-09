#include <stdio.h>

int main() {
    double total_belanja, diskon, harga_akhir, nominal = 0.0;
    char belanja_lagi;
    int jumlah_transaksi;

    puts("==========================================\n");
    puts("  SELAMAT DATANG DI TOKO RICHARD KURNIA!\n");
    puts("==========================================\n");
    puts("              Selamat berbelanja!\n");
    puts("==========================================\n");


    do {

        printf("Masukkan nominal belanja anda: Rp ");
        scanf("%lf", &nominal);

        total_belanja += nominal;

        printf("Anda ingin berbelanja lagi? (y/n): ");
        scanf(" %c", &belanja_lagi);

    } while (belanja_lagi == 'y' || belanja_lagi == 'Y');

        if (jumlah_transaksi >= 4) {
        diskon = 0.20 * total_belanja;
    } else if (total_belanja >= 1000000) {
        diskon = 0.30 * total_belanja;
    } else if (total_belanja >= 550000) {
        diskon = 0.20 * total_belanja;
    } else if (total_belanja >= 200000) {
        diskon = 0.10 * total_belanja;
    } else {
        diskon = 0.0;
    }

     harga_akhir = total_belanja - diskon;

     puts("\n==========================================\n");
     puts("                rekap transaksi \n");
    puts("==========================================\n");
    printf("Total belanja Anda: Rp %.2lf\n", total_belanja);
    printf("Diskon yang diterima: Rp %.2lf\n", diskon);
    printf("Harga yang harus dibayar: Rp %.2lf\n", harga_akhir);
    puts("==========================================\n\n");

    puts("      Terima kasih telah berbelanja!\n");
    puts("==========================================");

    return 0;
}
