#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

bool isVow(char x)
{
    switch(x)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'y':
        case 'Y':
                    return true;
    }
    return false;
}

int32_t main()
{
    IOS
    int i;

    string s, news = "";
    cin>>s;
    
    for(i = 0; s[i]; i++)
    {
        if(!isVow(s[i]))
        {
           news.append(".");
           // news += '.';
           news += (tolower)(s[i]); 
        }    
    }
    cout<<news;
    return 0;
}