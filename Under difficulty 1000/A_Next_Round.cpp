#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define si(x)   scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define endl    "\n"
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;

const int mod = (int)1e9 + 7;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

/*void solve() 
{
  int i, j, n, m;

}
*/
int32_t main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n = 1, i, k, qualify = 0;
    cin >> n >> k;
    fo(i, n)
        cin>>a[i];

    fo(i, n)
    {
        if(a[i] >= a[k-1])
            qualify++;
    }
    
    cout<<qualify;
    return 0;
}