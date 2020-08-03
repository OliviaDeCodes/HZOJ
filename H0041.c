/*************************************************************************
	> File Name: H0041.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  5/26 09:45:18 2019
 ************************************************************************/

#include <stdio.h>

#define MAX_N 1000
#define MAX_K 10 
#define MAX_X 1000

int main() {
    int n, k;
    int f[MAX_N + 5][1000];
    scanf("%d%d", &n, &k);
    f[0][0] = 1, f[0][1] = 0;
    f[1][0] = 1; f[1][1] = 0;
    f[2][0] = 1; f[2][1] = k * (k - 1);
    for (int i = 3; i <= n; i++) {
        f[i][0] = f[i - 1][0] > f[i - 2][0] ? f[i - 1][0] : f[i - 2][0];
        for (int j = 1; j <= f[i][0]; j++) {
            f[i][j] = (k - 2) * f[i - 1][j] + (k - 1) * f[i - 2][j];
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
