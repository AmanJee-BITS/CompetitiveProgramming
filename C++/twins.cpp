//codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
  std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("large.in","r",stdin);
  //freopen("large.out","w",stdout);

  int t,n=0,h=0,i;
  cin>>t;

  int a[t];
  for(i=0;i<t;i++){
    cin>>a[i];
    h+=a[i];
  }
  sort(a,a+t);

  for(i=0;2*n<=h;i++){
    n=n+a[t-i-1];
  }
  cout<<i<<endl;

  return 0;
}
