/*************************************************************************
	> File Name: H0042.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  5/25 23:57:18 2019
 ************************************************************************/

#include <stdio.h>

#define MAX_M 20
#define MAX_N 10000

int w[MAX_M + 5];
int f[MAX_M + 5][MAX_N + 5];

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; i++) {
        scanf("%d", &w[i]);
    }
    for (int i = 1; i <= m; i++) {
        f[i][0] = 1;
        f[i][w[1]] = 1;
    }
    for (int i = 1; i <= n; i++) {
        f[1][i * w[1]] = 1;
        if (i * w[1] >= n) break;
    }
    for (int i = 2; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (j - w[i] >= 0) {
                f[i][j] = (f[i - 1][j] + f[i][j - w[i]]) % 9973;
            } else {
                f[i][j] = (f[i - 1][j]) % 9973; 
            }
 
        }
    }
    printf("%d\n", f[m][n]);
    return 0;
}
