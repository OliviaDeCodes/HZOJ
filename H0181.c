/*************************************************************************
	> File Name: H0181.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  1/19 14:32:14 2020
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = {0};
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        } else {
            continue;
        }
    }
    printf("%s\n", str);
    return 0;
}
