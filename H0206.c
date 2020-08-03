/*************************************************************************
	> File Name: H0206.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  1/18 19:01:07 2020
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    float *num;
    scanf("%d %d", &n, &m);
    num = (float *)malloc(n * m * sizeof(float));
    for (int i = 1; i <= n * m; i++) {
        scanf("%f", num + i);
    }
    for (int i = 1; i <= m; i++) {
        float x = 0;
        for (int j = i; j <= n * m; j += m) {
            x += num[j];
        }
        printf("%g\n", x);
    }
    return 0;
}
