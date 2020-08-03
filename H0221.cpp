/*************************************************************************
	> File Name: H0221.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 六  3/28 13:42:30 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    int num, h, ans;
};

bool cmp1(student a, student b) {
    return a.h < b.h;
}

bool cmp2(student a, student b) {
    return a.num < b.num;
}

int main() {
    int n, m;
    cin >> n >> m;
    student stu[100005];
    int hei[100005];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].h;
        stu[i].num = i;
        stu[i].ans = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> hei[i];
    }
    sort(hei, hei + m);
    sort(stu, stu + n, cmp1);
    int index = 0;
    for (int i = 0; i < n; i++) {
    while (stu[i].h >= hei[index] && index < m) {
            stu[i].ans++;
            index++;
        }
    }
    sort(stu, stu + n, cmp2);
    for (int i = 0; i < n; i++) {
        cout << stu[i].ans << endl;
    }
    return 0;
}
