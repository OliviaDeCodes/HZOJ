/*************************************************************************
	> File Name: H0173.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  1/19 14:42:32 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    int digit, alpha, space, other;
    digit = alpha = space = other = 0;
    char str[1005] = {0};
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alpha += 1;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digit += 1;
        } else if (str[i] == ' ') {
            space += 1;
        } else {
            other += 1;
        }
    }
    cout << alpha << " "<< digit << " "<< space << " " << other << endl;
    return 0;
}
