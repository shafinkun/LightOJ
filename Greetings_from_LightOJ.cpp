#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    short t , n;
    cin >> t;
    n = t;
    while(t--)
    {
        short a , b;
        cin >> a >> b;
        int c = a + b;
        cout << "Case " << n - t << ": " << c << endl;
    }
    return 0;
}