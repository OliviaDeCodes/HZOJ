/*************************************************************************
	> File Name: H0215.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 日  2/ 2 19:59:54 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct student {
    int sum;
    string name;
};

bool cmp(student a, student b) {
    return (a.sum > b.sum);
}

int main() {
    int n;
    student stu[50];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        stu[i].sum = 0;
        for (int j = 0; j < 4; j++) {
            int temp;
            cin >> temp;
            stu[i].sum += temp; 
        }
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < 3; i++) {
        cout << stu[i].name << endl;
    }
    return 0;
}
