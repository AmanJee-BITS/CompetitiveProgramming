#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int b[n];
    int k=0;

    for(int j=0; j<n; j++)
    {
      long long int a[3];

      for(int i=0; i<3; i++)
      {cin>>a[i];}

      sort(a,a+3);

       long long int diff = a[2] - a[1];
       long long int rem = a[0] - diff;

      if(rem > 0)
      {
        a[1] = a[1] + diff;
        a[1] = a[1] + rem/2;
        a[2] = a[2] + rem/2;

        long long int fv = min(a[1],a[2]);
        b[k] = fv;
        k++;
      }
      else
      {
        a[1] = a[1] + a[0];
        long long  int d = a[2] - a[1];
        long long  int r = d/2;
        a[1] = a[1] + r;
        a[2] = a[2] + r;

        b[k] = min(a[1],a[2]);
        k++;
      }
    }

    for(int i=0; i<n; i++)
    cout<<b[i]<<endl;

    return 0;
}
