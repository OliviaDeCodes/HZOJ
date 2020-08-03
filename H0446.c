/*************************************************************************
	> File Name: H0446.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  1/18 19:59:33 2020
 ************************************************************************/

#include <stdio.h>

int num[10][10] = {0};

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= (n + 1) / 2; i++)
        for (int j = i; j <= n + 1 - i; j++)
            for (int k = i; k <= n + 1 - i; k++)
                num[j][k]= i;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", num[i][j]);
            if (j < n) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
