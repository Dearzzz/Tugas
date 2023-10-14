#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int countVokal(const char *str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o') {
            count++;
        }
    }
    return count;
}

int countKonsonan(const char *str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch) && ch != 'a' && ch != 'i' && ch != 'u' && ch != 'e' && ch != 'o') {
            count++;
        }
    }
    return count;
}

void printBulanKembar(char initial) {
    printf("List bulan dengan huruf awalan '%c':\n", initial);
    char ch = toupper(initial);
    switch (ch) {
        case 'J':
            printf("Januari, Juni, Juli\n");
            break;
        case 'F':
            printf("Februari\n");
            break;
        case 'M':
            printf("Maret, Mei\n");
            break;
        case 'A':
            printf("April, Agustus\n");
            break;
        case 'S':
            printf("September\n");
            break;
        case 'O':
            printf("Oktober\n");
            break;
        case 'N':
            printf("November\n");
            break;
        case 'D':
            printf("Desember\n");
            break;
        default:
            printf("Tidak ada bulan dengan huruf awalan '%c'\n", ch);
    }
}

int main() {
    char input[10];
    char initial;

    while (1) {
        printf("Masukkan huruf A-Z dalam kapital (0 untuk keluar): ");
        scanf("%s", input);

        if (input[0] == '0') {
            printf("Terima kasih! Program berakhir.\n");
            break;
        }

        if (strlen(input) != 1 || (input[0] < 'A' || input[0] > 'Z')) {
            printf("Pilih Huruf Lain\n");
            continue;
        }

        initial = input[0];

        printBulanKembar(initial);



        char Bulan[20];
        printf("Pilih bulan diatas: ");
        scanf("%s", Bulan);
        

        int TotalVokal = countVokal(Bulan);
        int TotalKonsonan = countKonsonan(Bulan);

        printf("Jumlah karakter vokal pada bulan tersebut: %d\n", TotalVokal);
        printf("Jumlah karakter nonvokal pada bulan tersebut: %d\n", TotalKonsonan);
    }

    return 0;
}