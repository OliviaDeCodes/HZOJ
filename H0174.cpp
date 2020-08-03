/*************************************************************************
	> File Name: H0174.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  1/28 13:58:41 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    while (str.find(" ") != -1) {
        str.replace(str.find(" "), 1, "%20");
    }
    cout << str << endl;
    return 0;
}
