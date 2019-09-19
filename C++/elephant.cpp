#include <bits/stdc++.h>
#define endl '\n'
#define M 32

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

  int c=0;

  while(x>=5)
  {
    x=x-5;
    c++;
  }

  //cout<<x<<endl;

  if(x>=4)
  {
    while(x>0)
    {
      x=x-4;
      c++;
    }
  }

  if(x>=3)
  {
    while(x>0)
    {
      x=x-3;
      c++;
    }
  }

  if(x>=2)
  {
    while(x>0)
    {
      x=x-2;
      c++;
    }
  }

  if(x>=1)
  {
    while(x>0)
    {
      x=x-1;
      c++;
    }
  }

  cout<<c;

  return 0;
}
