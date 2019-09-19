#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s,b;
    long int i,j,l,n,c=0,k=0;
    cin >> s;
    l= s.length();

 for(i=0;i<l;i++)
 {
     n=s[i];
     if(n<97)
     {
         n=n+32;
         s[i]=n;
     }
     if(n!=97 && n!=101 && n!=105 && n!=111 && n!=117 && n!=121)
     {
         b[c]='.';
         c++;
         b[c]=s[i];
         c++;
         k=k+2;
     }
     }
     for(i=0;i<k;i++)
      cout<<b[i];
     return 0;
}
