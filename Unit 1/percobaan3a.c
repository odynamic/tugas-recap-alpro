#include <stdio.h>

int main() {
  printf("Baris pertama");
  printf("Baris kedua \n");
  printf("Baris ketiga");
  return 0;
}

/*Output yang dihasilkan adalah
Baris pertamaBaris kedua 
Baris ketiga
sedangkan, fungsi dari '\n' adalah
membuat baris baru (newline),
membuat baris baru (newline),
di mana setelah mencetak "Baris pertamaBaris kedua",
'\n' membuat baris baru sebelum fungsi 'printf'
mencetak "Baris ketiga"*/