#include <bits/stdc++.h>
 
#define endl '\n'
 
using namespace std;
 
// typedef long long ll;
// typedef vector< ll > vi;
// typedef vector< pair<ll,ll> > vp;
// typedef vector< vi > vvi;
// typedef pair< ll,ll > ii;
// typedef unsigned long long llu;
 
// #define inf (pow(10,18))
// #define mod 1000000007
// #define ntq(z)  long long int z; cin>>z; for(long long int i=0;i<z;i++) 
// #define fi(x9,y9) for(long long int i=x9;i<y9;i++)
// #define fj(x9,y9) for(long long int j=x9;j<y9;j++)
// #define fk(x9,y9) for(long long int k=x9;k<y9;k++)
// #define f(z9) for(long long int i=0;i<z9;i++)
// #define sz(a) int((a).size())
// #define pb push_back
// #define all(c) (c).begin(),(c).end()
// #define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
// #define present(c,x) ((c).find(x) != (c).end())
// #define cpresent(c,x) (find(all(c),x) != (c).end())
// #define stoi(s,n) stringstream str(s); str >> n;
// #define get_vi(v, n) vi v(n); f(n){cin >> v[i];}
 
 
 
int main()
{
  std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  int n,k=0;

  cin>>n;

  while(n > 0){

    if(n>=100){
      
      k = k + n/100;
      n = n % 100;
    }

    else if(n>=20 && n<100){
      
      k = k + n/20;
      n = n % 20;
    }

    else if(n>=10 && n<20){
      
      k = k + n /10;
      n = n % 10;
    }

    else if(n>=5 && n<10){
      
      k = k + n/5;
      n = n % 5;
    }

    else if(n>=1 && n<5){
      
      k = k + n;
      n = n % 1;
      
    }
  }

  cout<<k;

  return 0;
}