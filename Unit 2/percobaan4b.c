#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

/*Program menggunakan dua loop bersarang,
di mana 'i' dan 'j' diinisialisasi di luar loop.
Loop pertama dengan 'for (i = 2; i <= 3; ++i)'
berjalan dua kali, dimulai dari nilai 2.
Pada setiap iterasi, program mencetak
"Bilangan utama: [nilai i]".
Selanjutnya, di dalam setiap iterasi dari loop pertama,
terdapat loop kedua dengan 'for (j = 1; j <= 2; ++j)',
yang juga berjalan dua kali dimulai dari nilai 1.
Pada setiap iterasi loop kedua, program mencetak
" Bilangan pengali: [nilai j]" dan " Hasil perkalian: [nilai j * i]".
Output akhir adalah hasil perkalian dari
setiap bilangan utama (nilai i) dengan bilangan pengali (nilai j).*/