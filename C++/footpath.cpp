#include <bits/stdc++.h>
#define endl '\n'`

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])

{
  std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("large.in","r",stdin);
  //freopen("large.out","w",stdout)
;
  long long int n,m,a;
  cin>>n,m,a;
  cout<<((n-1)/a + 1)*((m-1)/a + 1);

  return 0;

}

