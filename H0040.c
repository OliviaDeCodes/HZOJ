/*************************************************************************
	> File Name: H0040.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  5/25 23:16:39 2019
 ************************************************************************/

#include <stdio.h>

#define MAX_N 500
#define MAX_M 1000

int main() {
    int n;
    int f[MAX_N + 5][MAX_M + 5] = {0};
    scanf("%d", &n);
    f[0][0] = 1, f[0][1] = 1;
    f[1][0] = 1, f[1][1] = 0;
    f[2][0] = 1, f[2][1] = 1; 
    f[3][0] = 1, f[3][1] = 1; 
    for (int i = 4; i <= n; ++i) {
        f[i][0] = f[i - 2][0] > f[i - 3][0] ? f[i - 2][0] : f[i - 3][0]; 
        for (int j = 1; j <= f[i][0]; j++) {
            f[i][j] = f[i - 2][j] + f[i - 3][j];
        }
        for (int j = 1; j <= f[i][0]; j++) {
            if (f[i][j] < 10) continue;
            f[i][j + 1] += f[i][j] / 10;
            f[i][j] %= 10;
            f[i][0] += (j == f[i][0]);
        }
    }
    for (int j = f[n][0]; j >= 1; j--) {
        printf("%d", f[n][j]);
    }
    printf("\n");
    return 0;
}
