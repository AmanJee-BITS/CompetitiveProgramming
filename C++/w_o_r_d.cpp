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
 
 
 
int main(int argc, char const *argv[])
{
  std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  string a;

  cin>>a;

  int k = a.length();
  
  int small=0,large=0;

  for(int i=0; i<k; i++) {
    if(a[i]>= 'a' && a[i]<= 'z'){
      small++;
    }
    else if(a[i]>= 'A' && a[i]<= 'Z'){
      large++;
    }
  }

  if(small>=large){
    for(int i=0; i<k;i++){
      if(a[i]>= 'A'  && a[i]<= 'Z'){
        a[i] = a[i] + 32;
      }
    }
  }

  else if(large>small){
    for(int i=0; i<k; i++){
      if(a[i]>= 'a' && a[i]<= 'z'){
        a[i]= a[i] - 32;
      }
    }
  }

  for(int i=0; i<k ; i++){
    cout<<a[i];
  }
 
  return 0;
}