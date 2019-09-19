#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
  std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  int n;
    cin>>n;

    while(n--)
    {
        int a,fl=-1,b[205];
        cin>>a;

        for(int i=0;i<a;i++)
            cin>>b[i];

        for(int i=0;i<a-1;i++)
            { if(abs(b[i]-b[i+1])!=1)
              fl++;
            }

        if(abs(b[a-1]-b[0])!=1)fl++;

        if(fl>0)
          cout<<"NO"<<endl;
        else
          cout<<"YES"<<endl;
    }
  return 0;
}
