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
    /*int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    int cnt_a = 0, cnt_b = 0;
    for (int i = 0 ; i < n ; i++){
        for (int j =0 ; j < n ; j++){
            cin >> a[i][j];
            if (a[i][j] == 1) cnt_a++;
        }
    }

    for (int i = 0 ; i < n ; i++){
        for (int j =0 ; j < n ; j++){
            cin >> b[i][j];

            if (b[i][j] == 1) cnt_b++;
        }
    }

    if (cnt_a > cnt_b){
        no();
        return;
    }

    int paper[n + 1];
    memset(paper, 0 , sizeof(paper));


    int a1[n+1][n+1], a2[n+1][n+1], a3[n+1][n+1];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            a1[i][j] = a[j][n-i-1];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            a2[i][j] = a1[j][n-i-1];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            a3[i][j] = a2[j][n-i-1];
        }
    }*/





    int n;
    cin >> n;
    int a[n + 1][n + 1], b[n + 1][n + 1];
    int cnt_a = 0, cnt_b = 0;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cin >> a[i][j];
            if (a[i][j] == 1) cnt_a++;
        }
    }
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cin >> b[i][j];
            if (b[i][j] == 1) cnt_b++;

        }
    }

    if (cnt_b == 0){
        yes();
        return;
    }

    if (cnt_a > cnt_b){
        no();
        return;
    }
    int a1[n+1][n+1], a2[n+1][n+1], a3[n+1][n+1];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            a1[i][j] = a[j][n-i-1];
           //cout << a1[i][j] << " ";
        }
        //cout << endl;
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            a2[i][j] = a1[j][n-i-1];
            //cout << a2[i][j] << " ";
        }
        //cout << endl;
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            a3[i][j] = a2[j][n-i-1];
            //cout << a3[i][j] << " ";
        }
        //cout << endl;
    }
    bool valables[4];
    memset(valables, 1, sizeof(valables));
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++) {
            if(b[i][j] == 0 && a[i][j] == 1)
                valables[0] = 0;
            if(b[i][j] == 0 && a1[i][j] == 1)
                valables[1] = 0;
            if(b[i][j] == 0 && a2[i][j] == 1)
                valables[2] = 0;
            if(b[i][j] == 0 && a3[i][j] == 1)
                valables[3] = 0;
        }
    }

    int painted[n+1][n+1];
    for(int i=0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            painted[i][j] = 0;
            if(valables[0] == 1)
                painted[i][j] |= a[i][j];
            if(valables[1] == 1)
                painted[i][j] |= a1[i][j];
            if(valables[2] == 1)
                painted[i][j] |= a2[i][j];
            if(valables[3] == 1)
                painted[i][j] |= a3[i][j];
            //if(painted[i][j] > 1) painted[i][j] = 1;
            //cout << painted[i][j] << " ";
            if(painted[i][j] != b[i][j]){
                no();
                return;
            }
        }
    }
    yes();



}




int main()
{
    freopen("artwork.in","r",stdin);
    //freopen("out.txt","w",stdout);
    fastio;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
