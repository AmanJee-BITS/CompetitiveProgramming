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

  int n;

  cin>>n;

  int a[n],i;

  for(i=1; i<=n; i++)
  {
    cin>>a[i];
  }

  int j;
  int b[n];

  for(i=1;i<=n;i++)
  {
    j = a[i];
    b[j] = i;
  }

  for(j=1;j<=n;j++)
  {
    cout<<b[j]<<" ";
  }

  return 0;
}
