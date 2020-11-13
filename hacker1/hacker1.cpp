#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, k;
    cin >> n >> q;
    int *a[10];
    for (int i = 0; i < n; i++)
    {
        cin >> k; //number of char
        for (int j = 0; j < k; j++)
        {
            cin >> a[i][j]; // char input
        }
    }
    for (int i = 0; i < q; i++) {
        int r, s;
        cin >> r >> s;
        cout << a[r][s] << endl;
    }
    return 0;
}
