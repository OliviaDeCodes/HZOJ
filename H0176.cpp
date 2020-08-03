/*************************************************************************
	> File Name: H0176.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 13:24:51 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string text, pattern;
    int num = 0;
    cin >> text >> pattern;
    int len = pattern.length();
    int *next = (int *)malloc(sizeof(int) * len);
    next[0] = -1;
    int i, j = next[0];
    for (i = 1; pattern[i]; i++) {
        while (j != -1 && pattern[j + 1] != pattern[i]) j = next[j];
        if (pattern[j + 1] == pattern[i]) j += 1; 
        next[i] = j;
    }
    i = 0, j = -1;
    while (text[i]) {
        while (j != -1 && text[i] != pattern[j + 1]) j = next[j];
        if (text[i] == pattern[j + 1]) j += 1;
        if (pattern[j + 1] == 0) num += 1, j = -1, i -= len / 2;
        i += 1;
    }
    cout << num << endl;
    return 0;
}
