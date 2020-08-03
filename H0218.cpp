/*************************************************************************
	> File Name: H0218.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  3/28 13:29:15 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    int h, n;
};

bool cmp(student a, student b) {
    if (a.h == b.h) {
        return a.n < b.n;
    }
    return a.h < b.h;
}

int main() {
    int n;
    cin >> n;
    student stu[100005];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].h;
        stu[i].n = i + 1;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) {
        if (i) {
            cout << ' ';
        }
        cout << stu[i].n;
    }
    cout << endl;
    return 0;
}
