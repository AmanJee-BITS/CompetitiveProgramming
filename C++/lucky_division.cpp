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

  int n,x,y,len=0;

  cin>>n;

  int a[1000];

  while(n>0){
    y = n%10;
    n = n/10;
    a[len] = y;
    len++;
  }

  for(int i =0; i<len; i++)
  {
    if(a[i] != 4 || a[i] != 7)
    count++;
  }

  if(count == 0)
  cout<<"NO";
  else if(count > 0)
  {
    if(n%4==0 || n%7)
  }

  return 0;
}
