// https://codeforces.com/problemset/problem/282/A
#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
   string b;
   int n,p=0;
   cin>>n;
   
   while(n--)
   {
       cin>>b;
       if(b[0]=='-'||b[2]=='-')
           p=p-1;
       
       else if(b[0]=='+'||b[2]=='+')    
           p=p+1;
    
   }
   cout<<p;

}