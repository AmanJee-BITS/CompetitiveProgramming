#include<iostream>
using namespace std;

int main()
{
  int n,t;
  cin>>n>>t;
  char s[n];                  //TO DO//
  int i;
  for(i=0;i<n;i++)
  {
    cin>>s[i];
  }
  while(t--)
  {
    for(i=0;i<n;i++)
    {
      if(s[i]=='B' && s[i+1]=='G')
      {
        s[i]='G';
        s[i+1]='B';
      }
    }
  }
  for(i=0;i<n;i++)
  cout<<s[i];
  return 0;
}
