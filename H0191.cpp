/*************************************************************************
	> File Name: H0191.cpp
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 二  2/11 16:52:54 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

#define MAX_N 8000000
int num[MAX_N + 5] = {1, 1};

void init() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (!num[i]) {
            for (int j = 2; j * i <= MAX_N; j++) {
                num[i * j] = 1;
            }
        }
    }
}

int main() {
    init();
    int l, r;
    cin >> l >> r;
    int minl = -1, minr, maxl, maxr;
    for (int i = l; i < r; i++) {
        if (!num[i]) {
            int next = i + 1;
            while (num[next]) {
                next++;
            }
            if (next > r) {
                break;
            }
            if (minl == -1) {
                minl = maxl = i;
                minr = maxr = next;
            } else if (minr - minl > next - i) {
                minl = i;
                minr = next;
            } else if (maxr - maxl < next - i) {
                maxl = i;
                maxr = next;
            }
        }
    }
    if (minl == -1) printf("There are no adjacent primes.\n");
    else printf("%d,%d are closest, %d,%d are most distant.\n", minl, minr, maxl, maxr);
    return 0;
}
