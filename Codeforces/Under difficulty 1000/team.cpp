#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, ctr = 0;
    cin>>n;
    int a[3];
    while(n--)
    {
        cin>>a[0]>>a[1]>>a[2];
        if((a[0]+a[1]+a[2]) >= 2)
            ++ctr;
    }
    cout<<ctr;

    return 0;
}