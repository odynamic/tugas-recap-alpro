#include <stdio.h>

int main() {
    int s1, t1;
    int v1, t2;
    int s2, v2;

    printf ("Masukkan jarak dan waktu: ");
    scanf("%d", &s1);
    scanf("%d", &t1);
    printf ("Masukkan kecepatan dan waktu: ");
    scanf("%d", &v1);
    scanf("%d", &t2);
    printf ("Masukkan jarak dan kecepatan: ");
    scanf("%d", &s2);
    scanf("%d", &v2);

    float V = (float)s1 / t2;
    float S = (float)v1 * t2;
    float T = (float)s2 / v2;

    printf("Kecepatan = %.2f\n", V);
    printf("Jarak = %.2f\n", S);
    printf("Waktu = %.2f\n", T);

    return 0;
}