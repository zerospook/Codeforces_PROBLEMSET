#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define fo(i, n) for(i = 0; i < n; i++)
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define N 1e9 + 7

int main()
{
    int n, a, b; 
    cin>>n>>a>>b;

    vector<int> aLikes;
    vector<int> bLikes;
    int *apples = new int[n+1];

    memset(apples, 0, sizeof(apples));

    int get=0;
    for(int i =0;i<a;++i){
        cin>>get;
        aLikes.push_back(get);
    }
    for(int i=0;i<b;++i){
        cin>>get;
        bLikes.push_back(get);
    }

    for(int i =1;i<=n;++i){
        for(auto &it:aLikes){
            if(it == i){
                cout<<"1 ";
                apples[i]=1;
                break;
            }
        }

        for(auto &it:bLikes){
            if(it == i && apples[i]!=1){
                cout<<"2 ";
                apples[i]=1;
                break;
            }
        }
    }
    return 0;
}

