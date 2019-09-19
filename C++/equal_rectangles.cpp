#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int N=101;
int a[4*N];

void solve()
{
    int n,i,s;
    cin>>n;

    for(i=0;i<4*n;i++)
      cin>>a[i];

    sort(a,a+4*n);

    int l=0,r=4*n-1;
    s=a[l]*a[r];

    while(l<r)
    {
      if(a[l]!=a[l+1] || a[r]!=a[r-1] || a[l]*a[r]!=s)
      {
        cout<<"NO\n";
        return;
      }
      l+=2;
      r-=2;
    }
  cout<<"YES\n";
}

int main()
{
	int n;
	cin>>n;
  
	while(n--)
		solve();
}
