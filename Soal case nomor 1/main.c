#include <stdio.h>

int main() {
    double km;
    double meter;
    double cm;

    printf("============================================\n");
    printf("        -Tugas Pribadi Richard-\n");
    printf("============================================\n");
    printf("          -Mengkonfersi Jarakk-\n");
    printf("============================================\n");
    printf("Masukkan jarak dalam kilometer: ");
    scanf("%lf", &km);

    meter = km * 1000;
    cm = km * 100000;

    puts("============================================\n");
    printf("            Hasil konversi:\n");
    puts("============================================\n");
    printf("%.2lf kilometer = %.2lf meter\n", km, meter);
    puts("============================================\n");
    getchar();
    printf("%.2lf kilometer = %.2lf sentimeter\n", km, cm);
    puts("============================================\n");


    return 0;
}
