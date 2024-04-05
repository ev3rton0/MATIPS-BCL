#include <stdio.h>

int main() {

    int M1[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int M2[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int M3[4][4];
    int i, j, k;
    int aux = 0;

    printf("\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            M3[i][j] = 0;
            for (k = 0; k < 4; k++) {
                M3[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }


    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%6d", M3[i][j]);
        }
        printf("\n\n");
    }


    return 0;
}

