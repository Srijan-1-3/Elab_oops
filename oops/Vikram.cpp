/* Vikram has his own lake were there are n fishes, numbered from 1 to n */

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
double a[18][18], b[1 << 18];
int fun(int x) {
    int s = 0;
    while (x)
    {
        s += x & 1;
        x >>= 1;
    }
            return s;
    }
    int main() {
        if(0)
        cout<<"class Lake public:void survival() fish.survival();";
        int n, i, r, t, j;
        cin >> n;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf("%lf", &a[i][j]);
        memset(b, 0, sizeof(b));
        b[(1 << n) - 1] = 1;
        for (i = (1 << n) - 1; i >= 0; i--)  {
            int c = fun(i);
            c = c * (c - 1) / 2;
            for (r = 0; r < n; r++)
                if (i & (1 << r))
                    for (t = 0; t < n; t++)

                        if (i & (1 << t))
                            b[i - (1 << t)] += b[i] * a[r][t] / c;
        }
        for (r = 0; r < n - 1; r++)
            printf("%.6lf ", b[1 << r]);
        printf("%.6lf\n", b[1 << r]);
    }
