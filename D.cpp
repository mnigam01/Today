#include <bits/stdc++.h>

using namespace std;

#define IN(x) cin>>x;
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define FO(i, n) for (int i=0 ; i<n ; i+=1)
#define ROF(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define RO(i, n) for (int i=n ; i>=0 ; i-=1)
#define sort(v) sort(v.begin(),v.end())
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define MOD 998244353     //1000000007
#define OUT(x) cout << x <<"\n";
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
// typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef map<int,int> MPCI;
typedef set<int> SETI;
typedef set<int> SETC;
typedef long long ll;



void solve()
{
    int n;cin>>n;
    SETI se;
    FO(i,n)
    {
        int g;cin>>g;
        se.insert(g);
    }
    OUT(se.size()-2);

    
    



    
    
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    
    int t=1;
    // IN(t);
    
    while(t--) 
    {
        solve();
    }
    
    
    return 0;
}