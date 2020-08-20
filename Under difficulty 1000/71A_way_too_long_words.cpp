#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    string s;
    cin>>n;
    
    while(n--)
    {
        cin>>s;
        if(s.length() > 10)
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1];
            if(n!=0)
                cout<<endl;
        }        
        else
        {
            cout<<s;
            if(n!=0)
                cout<<endl;
        }
    }

    return 0;
}
