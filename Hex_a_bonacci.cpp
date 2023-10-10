#include <stdio.h>

#define MAX_N 10000
#define MOD 10000007

int a, b, c, d, e, f;
int memo[MAX_N + 1];

int fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;

    if (memo[n] != -1) {
        return memo[n];
    }

    memo[n] = (fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6)) % MOD;

    return memo[n];
}

int main() {
    int n, cases;
    scanf("%d", &cases);

    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);

        for (int i = 0; i <= n; ++i) {
            memo[i] = -1;
        }

        printf("Case %d: %d\n", caseno, fn(n));
    }

    return 0;
}
