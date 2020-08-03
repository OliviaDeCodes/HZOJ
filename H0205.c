/*************************************************************************
	> File Name: H0205.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  1/18 18:30:14 2020
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    int sum, temp;
    scanf("%d %d", &n, &m);
    int *num = (int *)malloc(n * sizeof(int));
    for (int i = 1; i <= n; i++) {
        sum = 0;
        for (int j = 1; j <= m; j++) {
            scanf("%d", &temp);
            sum += temp;
        }
        num[i] = sum;
    }
    for (int i = 1; i <= n; i++) {
        printf("%.6lf\n", (double)num[i] / m);
    }
    return 0;
}
