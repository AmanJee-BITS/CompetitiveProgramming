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

  int a[n];
  for(int i=0; i<n; i++)
  cin>>a[i];

  sort(a,a+n);

  int i,c1=0,c2=0,c3=0,c4=0;
  for(i=0;i<n;i++) {
    if (a[i] == 1)
    c1++;
    else if (a[i] == 2)
    c2++;
    else if (a[i] == 3)
    c3++;
    else
    c4++;
  }

  cout<<c4 + c3 + (c2*2+max(c1-c3,0)+3)/4;

  return 0;
}
