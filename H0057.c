/*************************************************************************
	> File Name: H0057.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 四  5/23 23:20:10 2019
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int32_t GetDi(int32_t n) {
    if (n <= 9) return n;
    n -= 10;
    int32_t cur = 10, j = 2, num;
    while (n >= j * (cur * 10 - cur)) {
        n -= j * (cur * 10 - cur);
        cur *= 10; j += 1;
    }
    num = n / j + cur;
    for (int32_t i = 0; i < j - n % j - 1; i++) num /= 10;
    return num % 10;
}

int32_t main() {
    int32_t x, y, z, ans = 0;
    scanf("%d%d%d", &x, &y, &z);
    ans = GetDi(x) * GetDi(y) * GetDi(z);
    printf("%d\n", ans);
    return 0;
}
