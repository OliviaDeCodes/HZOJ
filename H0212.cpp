/*************************************************************************
	> File Name: H0212.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  3/28 13:14:41 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string str[10];
    for (int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    sort(str, str + 10);
    for (int i = 0; i < 10; i++) {
        cout << str[i] << endl;
    }
    return 0;
}
