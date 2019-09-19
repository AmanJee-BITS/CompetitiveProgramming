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

  int q;
  cin>>q;

  while(q--)
  {
    int n,k=0;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }

    sort(a,a+n);

    for(int j=0; j<n-2; j++)
    {
      if(a[j]<=a[n-2])
      k++;
    }
    if(k == a[n-2])
    cout<<k-1<<endl;
    else if(k > a[n-2])
    cout<<a[n-2]-1<<endl;
    else
    cout <<k<< '\n';
  }
    return 0;
  }
