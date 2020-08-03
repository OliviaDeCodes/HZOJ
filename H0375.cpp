/*************************************************************************
	> File Name: H0375.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  2/26 13:08:00 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 300
struct student {
    int c, m, e, a, n;
};
student s[MAX_N + 5];

bool cmp(student a, student b) {
    if (a.a == b.a) {
        if (a.c == b.c) {
            return a.n < b.n;
        }
        return a.c > b.c;
    }
    return a.a > b.a;
}


int main() {
    int n; 
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i].c >> s[i].m >> s[i].e;
        s[i].a = s[i].c + s[i].m + s[i].e;
        s[i].n = i;
    }
    sort(s + 1, s + n + 1, cmp);
    for (int i = 1; i <= 5; i++) {
        cout << s[i].n << " " << s[i].a << endl;
    }
    return 0;
}
