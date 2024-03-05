#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}

/*Perbedaannya terletak pada percobaan5a.c
yang hanya menampilkan kata pertama jika
nama lengkap terdiri dari beberapa kata,
sedangkan percobaan5b.c menampilkan seluruh kata
di nama lengkapnya. Ini terjadi karena
pada percobaan5a.c terdapat "scanf("%s", fullname);"
dengan fungsi 'scanf' yang membaca string
sehingga menemui spasi/newline,
sedangkan pada percobaan5b.c terdapat
"fgets(fullname, sizeof(fullname), stdin);"
dengan fungsi 'fgets' yang membaca seluruh baris
termasuk spasi dan newline sampai ukuran yang ditentukan.*/