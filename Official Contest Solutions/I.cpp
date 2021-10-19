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
    string enc,s;
    getline(cin, enc);
    getline(cin, s);
    string key="";
    int n=enc.length();
    for (int i=0; i<n; i++)
    {
        if(enc[i]==' ') continue;
        key+=(enc[i]-s[i]+26)%26+'a';
    }
    int len = key.length();
    string ans="";
    ans+=key[0];
    for (int i=1; i<len; i++)
    {
        if (key[i]==key[0])
        {
            int cnt=0;
            bool ok=true;
            for (int j=i; j<len && ok; j++)
            {
                if (key[j]!=key[cnt])
                {
                    ok=false;
                }
                cnt++;
            }
            if(ok)
            {
                cout << ans << '\n';
                return;
            }

        }
        ans+=key[i];
    }

    cout << key << endl;

}




int main()
{
    freopen("cipher.in","r",stdin);
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
