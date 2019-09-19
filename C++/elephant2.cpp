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

  int x;

  cin>>x;

   int c;
  if(x%5==0)
  {
    c=x/5;
  }

  else if(x%5 != 0)
  {
    c = x/5 + 1;
  }

  cout<<c;

  return 0;
}
