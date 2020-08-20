#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define fo(i, n) for(i = 0; i < n; i++)
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define N 1e9 + 7

int32_t main()
{
    IOS
    string s = "heidi";
    string t;
    int tctr = 0;
    int i, j = 0, k = 0;
    cin>>t;

    fo(i, t.length() + s.length())
    {
        if(tctr > 0 && s.length() == tctr)
            break;

        if(t[j] == s[k])
        {
            tctr++;
            j++;
            k++;
        }
        else
            j++;
    }
    (s.length() == tctr) ? cout<<"YES" : cout<<"NO";

    return 0;
}
