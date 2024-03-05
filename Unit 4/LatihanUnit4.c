#include <stdio.h>

int sisi, keliling, luas, volume;

void hitungKeliling(int sisi) {
    keliling = sisi*4;
    printf ("Keliling persegi = %d\n", keliling);
}
void hitungLuas(int sisi) {
    luas = sisi*sisi;
    printf ("Luas persegi = %d\n", luas);
}
void hitungVolume(int sisi) {
    volume = sisi*sisi*sisi;
    printf ("Volume kubus = %d\n", volume);
}

int main () {
    printf ("Masukkan nilai sisi = ");
    scanf ("%d", &sisi);

    hitungKeliling(sisi);
    hitungLuas(sisi);
    hitungVolume(sisi);

    return 0;
}