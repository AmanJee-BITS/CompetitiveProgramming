#include <bits/stdc++.h>
using namespace std;
#define inf (pow(10,18))
#define ll long long int 
#define mod 1000000007
#define ntq(z)  long long int z; cin>>z; for(long long int i=0;i<z;i++)
#define fi(x9,y9) for(long long int i=x9;i<y9;i++)
#define fj(x9,y9) for(long long int j=x9;j<y9;j++)
#define fk(x9,y9) for(long long int k=x9;k<y9;k++)
#define f(z9) for(long long int i=0;i<z9;i++)
#define endl "\n"
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define stoi(s,n) stringstream str(s); str >> n;
#define get_vi(v, n) vi v(n); f(n){cin >> v[i];}
 
typedef vector< ll > vi;
typedef vector< pair<ll,ll> > vp;
typedef vector< vi > vvi;
typedef pair< ll,ll > ii;
 
void printprecise(double l,ll precision) {
    std::cout << std::fixed;
    std::cout << std::setprecision(precision);
    std::cout << l;
}
 
ll ncr(ll n, ll k) 
{ 
    ll C[n + 1][k + 1]; 
    ll i, j; 
    for (i = 0; i <= n; i++) 
    { 
        for (j = 0; j <= min(i, k); j++) 
        { 
            if (j == 0 || j == i) 
                C[i][j] = 1; 
  
            else
                C[i][j] = C[i - 1][j - 1] + 
                          C[i - 1][j]; 
        } 
    } 
  
    return C[n][k]; 
}
 
 
ll power_wm(ll x, ll y, ll p) { 
    ll res = 1;      // Initialize result 
 
    x = x % p;  // Update x if it is more than or  
                // equal to p 
 
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res * x) % p; 
 
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x) % p;   
    } 
    return res; 
}
 
 
ll power(ll x, ll y) { 
    ll res = 1;      // Initialize result 
 
 
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res * x); 
 
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x);   
    } 
    return res; 
}
 
 
ll root(ll x,vi &roots){
  if(roots[x]!=x)
    roots[x]=root(roots[x],roots);
  return roots[x];
}
 
 
void unoin(ll p, ll q,vi &roots,vi &rank){
  ll rp=root(p,roots);
  ll rq=root(q,roots);
  if(rank[rq]<rank[rp]){
    roots[rq]=rp;
  }
  else if(rank[rp]>rank[rq]){
    roots[rp]=rq;
  }
  else{
    roots[rp]=rq;
    rank[rq]++;
  }
  
}
 
 
ll dig_sum(ll n) {
  ll s = 0;
  while(n) {
    s += n%10;
    n /=10;
  }
  return s;
}
 
ll gcd(ll a, ll b) {
    if(a < b) {
      a = a + b;
      b = a - b;
      a = a - b;
    }
    if (b == 0) 
      return a; 
    return gcd(b, a % b); 
}
 
 
ll toD(ll x, ll y, ll m) {
  return x*m + y%m;
}
 
 
pair <ll, ll> twoD(ll p, ll m) {
  return (make_pair(p/m, p%m));
}
 
vi parentof,vis,dist;
vvi g;
 
void dfs(int p) {
 
  vis[p] = 1;
  f(g[p].size()) {
    if(vis[g[p][i]] == 0) {
      parentof[g[p][i]] = p;
      dist[g[p][i]] = dist[p] + 1;
      dfs(g[p][i]);
    }
  }
}
 
 
 
 
 
int main() {
   
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
  #ifndef ONLINE_JUDGE    
  freopen("input.txt", "r", stdin);    
  freopen("output.txt", "w", stdout);
  #endif   
 
  ll n;
  cin >> n;
 
  if(!(n%2)) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    vi v (2*n + 1);
    ll dmin = 0, dmax = 2 * n + 1;
    for(ll i = 1; i <= n; i+= 2) {
      v[i] = i;
      v[i+n] = i+1;
    }
    
 
    for(ll i = 2; i < n; i += 2) {
      v[i] = 2*n - i + 2;
      v[i+n] = v[i] - 1;  
    }
 
    fi(1, 2*n + 1) {
      cout << v[i] << " ";
    }
 
  }
 
 
 
  return 0;
}