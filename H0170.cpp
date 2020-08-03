/*************************************************************************
	> File Name: H0170.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 11:41:16 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    string str[10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        while (str[i].find("Ban_smoking") != -1) {
            str[i].replace(str[i].find("Ban_smoking"), 11, "No_smoking");
        }
    }
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    
    return 0;
}
