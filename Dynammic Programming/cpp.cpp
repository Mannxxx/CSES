#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.h"
#else
#define deb(...) 42
#define darr(...) 42

#endif

using namespace std;

#define ll long long
#define ull unsigned long long
#define pll pair<ll,ll>
#define ld long double
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define vvll vector<vector<ll>>
#define vvpll vector<vector<pair<ll,ll>>>

#define MODULO 1000000007
#define MOD 1000000007

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

#define       forn(i,n)              for(ll i=0;i<n;i++)
#define      for1n(i,n)              for(ll i=1;i<=n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (ll)a.size()
#define             mp               make_pair

void execution_time() {
    auto start = chrono::high_resolution_clock::now();
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << duration.count() << endl;
}

ll gcd(ll a, ll b)
{
    a = abs(a), b = abs(b);
    while (a != 0 && b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a == 0 ? b : a;
}

ll lcm(ll a, ll b)
{
    return (ll)((a * b) / gcd(a, b));
}

void solve()
{
  ll n,x;
  cin>>n>>x;
  vll coins(n);
  forn(i,n){cin>> coins[i];}
  vll dp(x+1,0);
  dp[0]=1;
  for(int j=0;j<n;j++)
  {
    for(int i=1;i<=x;i++)
    {
        if(i-coins[j]>=0)
        {
            dp[i]=(dp[i]+dp[i-coins[j]])%MOD;
        }
    }
  }
  cout<<dp[x]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
        cout << "\n";
    return 0;
}
