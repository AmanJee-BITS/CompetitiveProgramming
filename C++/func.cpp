#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,sum=0,i;
  cin>>n;
  for(i=n;i>0;i--)
  {
    sum = sum + i*pow(-1,i);
  }
  cout<<sum;
  return 0;
}
