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

  int a,b,c;
  cin>>a;
  cin>>b;
  cin>>c;

  int x = INT_MIN;
  int s[10],i=0;

  s[i] = a + b + c;
    i++;
  s[i] = a * b * c;
    i++;
  s[i] = a + (b *c);
    i++;
   s[i] = (a*b) + c;
    i++;
  s[i] = (a+b) * c;
    i++;
  s[i] = a * (b+c);

  int k=i+1;

  sort(s,s+k,greater<int>());

    cout<<s[0]<<endl;

  return 0;
}
