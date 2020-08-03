/*************************************************************************
	> File Name: H0177.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  2/11 16:43:00 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    char ch[30] = {0};
    cin >> ch;
    int len = strlen(ch);
    int ind = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            cout << ch[ind];
            ind += 1;
            ind %= len;
        }
        cout << endl;
        ind += len - 2;
        ind %= len;
    }
    return 0;
}
