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
void yes(){
    cout<<"YES\n";
}
void no(){
    cout<<"NO\n";
}


void solve(){
    ll a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    if (a1 == b1 && a2 == b2) {
        cout << "Possible\n";
        return;
    }
    if (a1 == c1 && a2 == c2) {
        cout << "Possible\n";
        return;
    }
    if (b1 == c1 && c2 == b2){
        cout << "Possible\n";
        return;
    }
    double AB = sqrt((a1 - b1)*(a1 - b1) + (a2 - b2)*(a2 - b2));
    double AC = sqrt((a1 - c1)*(a1 - c1) + (a2 - c2)*(a2 - c2));
    double BC = sqrt((c1 - b1)*(c1 - b1) + (c2 - b2)*(c2 - b2));
    double mx = max(AB, max(BC, AC));
    //cout << mx << endl;
    if (AC == mx){
        if (BC + AB > mx ){
            cout << "Possible\n";
            return;
        }
        else  {
            cout << "Impossible\n";
            return;
        }
    }
    else if (BC == mx){
        if (AC + AB > mx ){
            cout << "Possible\n";
            return;
        }
        else  {
            cout << "Impossible\n";
            return;
        }
    }
    else if (AB == mx){
        if (AC + BC > mx ){
            cout << "Possible\n";
            return;
        }
        else  {
            cout << "Impossible\n";
            return;
        }
    }
}




int main(){
    freopen("circles.in","r",stdin);
    //freopen("out.txt","w",stdout);
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
