#include <stdio.h>

int urutKecilKeBesar(int angka[], int n){
    int i, j, posisi, tukar;
    for(i = 0; i < (n-1); i++){
        posisi = i;
        for (j = i + 1; j < n; j++){
            if(angka[posisi] > angka[j]){
            posisi = j;
            }
        }
        if(posisi != i){
            tukar = angka[i];
            angka[i] = angka[posisi];
            angka[posisi] = tukar;
        }
    }
}
int main(){
    int n = 8;
    int angka[8] = {16, 8, 6, 2, 7, 11, 5, 14};
    int i, j;

    urutKecilKeBesar(angka, n);

    printf("Hasil pengurutan kecil ke besar:\n");
    for(i = 0; i < n; i++){
        printf("%d ", angka[i]);
    }
    return 0;
}
