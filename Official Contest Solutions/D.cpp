//KARYGAUSS03
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl ;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define sz(x) ((int)(x).size())
#define max(a,b) (a>b ? a : b)
#define min(a,b) (a<b ? a : b)
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
#define endl '\n'

const int MOD = (1e9)+7 ;
const int N = 2e5 + 5;
const double PI = acos(-1);
const double eps = 1e-10;
const long long oo = 1e10;
const int K = 26;
const int M=(1e9)+7;
const ll inf = (1LL << 61) - 1;
const int INF = 10000;
void yes()
{
    cout<<"YES\n";
}
void no()
{
    cout<<"NO\n";
}


void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    int l = (n/2)-1;
    int diff[n-1];
    for(int i = 1; i<n; i++)
        diff[i-1] = a[i] - a[i-1];
    ll sum = 0;
    for(int i = 0; i<l; i++) {
        sum += diff[i];
    }
    ll ans = sum;
    for(int i = l; i<n-1; i++){
        sum = sum - diff[i-l] + diff[i];
        if(sum<ans)
            ans = sum;
    }
    cout << ans;
    return;
}




int main()
{
    freopen("min.in","r",stdin);
    //freopen("out.txt","w",stdout);
    fastio;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
