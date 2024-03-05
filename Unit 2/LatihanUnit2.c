#include <stdio.h>

int jumlah, transaksi, total;

int main() {
    printf ("Masukkan jumlah transaksi hari ini: ");
    scanf ("%d", &jumlah);

    if (jumlah<=0) {
        printf ("Tidak ada transaksi hari ini");
        return 0;
    }

    printf ("Masukkan nominal transaksi: \n");
    int i=0;
    do {
        printf ("Transaksi ke-%d: ", i+1);
        scanf ("%d", &transaksi);
        total += transaksi;
        i++; 
    }
    while (i < jumlah);
    printf ("Total pengeluaran hari ini: %d\n", total);

    return 0;
}