/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define mod 10000007

int a, b, c, d, e, f;
vector<ll> v(10001, -1);

ll solve(int n)
{
    for (int i = 0; i <= n; ++i)
    {
        if (i == 0)
            v[i] = a;
        else if (i == 1)
            v[i] = b;
        else if (i == 2)
            v[i] = c;
        else if (i == 3)
            v[i] = d;
        else if (i == 4)
            v[i] = e;
        else if (i == 5)
            v[i] = f;

        else
            v[i] = (v[i - 1] + v[i - 2] + v[i - 3] + v[i - 4] + v[i - 5] + v[i - 6]) % mod;
    }

    return v[n] % mod;
}

int main()
{
    optimize();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int n;
        cin >> a >> b >> c >> d >> e >> f >> n;
        cout << "Case " << i << ": " << solve(n) << endl;
    }
    return 0;
}