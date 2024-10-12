#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nama[50];
    int Golongan, GajiPokok, Tunjangan, TotalGaji, Ppn;

    printf("Siapa Nama Anda: ");
    scanf("%s", &Nama);

    printf("Masukkan Golongan: ");
    scanf("%d", &Golongan);

    printf("\n");
    printf("---------- Hasil ---------- \n");
    printf("\n");

    switch (Golongan){
        case 1:
            GajiPokok = 4000000;
            Tunjangan = 0.12 * GajiPokok;
            Ppn = 0.02 * (GajiPokok + Tunjangan);
            break;
        case 2:
            GajiPokok = 3750000;
            Tunjangan = 0.1 * GajiPokok;
            Ppn = 0.02 * (GajiPokok + Tunjangan);
            break;
        case 3:
            GajiPokok = 2500000;
            Tunjangan = 0.07 * GajiPokok;
            Ppn = 0.02 * (GajiPokok + Tunjangan);
            break;
        case 4:
            GajiPokok = 1900000;
            Tunjangan = 0.05 * GajiPokok;
            Ppn = 0.02 * (GajiPokok + Tunjangan);
            break;
        case (scanf(Golongan)):
            printf("Maaf Anda tidak terdaftar sebagi penerima gaji!\n");
            break;
    }

    TotalGaji = (GajiPokok + Tunjangan) - Ppn;

    printf("\n");
    printf("Nama : %s \n", Nama);
    printf("Golongan : %d \n", Golongan);
    printf("Gaji Pokok: %d \n", GajiPokok);
    printf("Tunjangan: %d \n", Tunjangan);
    printf("Potongan Pajak: %d \n", Ppn);

    printf("Gaji %s Selama sebulan sebesar Rp.%d ", Nama, TotalGaji);
    printf("\n");

}


