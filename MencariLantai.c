#include <stdio.h>

int mencariLantai(int noloker){
    int b = 3;
    int x, y, z, d, e, f, u, v, w, lantai, i;
    x = 1; y = 2; z = 3; d = 1; e = 6; f = 12;
    for(i = 1; i < 1000; i++){
        u = x + (i - 1) * b;
        v = y + (i - 1) * b;
        w = z + (i - 1) * b;
        if((d==noloker)||((d+1)==noloker)||((d+2)==noloker)||((d+3)==noloker)||((d+4)==noloker)){
            lantai = u;

        }
        else if((e==noloker)||((e+1)==noloker)||((e+2)==noloker)||((e+3)==noloker)||((e+4)==noloker)||((e+5)==noloker)){
            lantai = v;

        }
        else if((f==noloker)||((f+1)==noloker)||((f+2)==noloker)||((f+3)==noloker)||((f+4)==noloker)||((f+5)==noloker)||((f+6)==noloker)){
            lantai = w;

        }
        // else{
        //
        // }
        d = d + 18;
        e = e + 18;
        f = f + 18;
    }
    return lantai;
}



int main() {
    int noloker, nolantai;
    printf("Nomor Loker : ");
    scanf("%d", &noloker);
    nolantai = mencariLantai(noloker);
    printf("Lantai : %d", nolantai);
    return 0;
}
