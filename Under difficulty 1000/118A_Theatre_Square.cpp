#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define mod 1e9 + 7

int32_t main()
{
    IOS
    int n, m, a, p, q;
    cin>>n>>m>>a;

    (n%a == 0) ? p = n/a : p = n/a+1;
    (m%a == 0) ? q = m/a : q = m/a+1;

    cout<<p*q;
    return 0;
}