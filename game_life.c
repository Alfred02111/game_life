#include <stdio.h>
#define N 10
#define M 10

int count_neighbors(int **arr, int i, int j);


int main() {



    return 0;
}

int count_neighbors(int matrix[N][M], int i, int j) {
    int count = 0;

    int i_m = i - 1, i_p = i + 1, j_m = j - 1, j_p = i + 1;

    if (i_m < 0) i_m =  N - 1;
    if (j_m < 0) j_m = M - 1;
    if (i_p > N - 1) i_p %= N;
    if (j_p > M - 1) j_p %= M;

    count += matrix[i_m][j];
    count += matrix[i_m][j_p];
    count += matrix[i][j_p];
    count += matrix[i_p][j_p];
    count += matrix[i_p][j];
    count += matrix[i_p][j_m];
    count += matrix[i][j_m];
    count += matrix[i_m][j_m];

    return count;
}
