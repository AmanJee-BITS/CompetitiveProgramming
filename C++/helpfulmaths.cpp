#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i,j,m,p;
    string s;

    cin >>s;
    int l = s.length();
    m=(l+1)/2;

    char a[m];
    int c=0;
    for(i=1;i<=3;i++)
    {
        for(j=0;j<l;j+=2)
        {
            p=s[j];
            if((p-48)==i)
            {
                a[c]=s[j];
                c++;
            }
        }
    }
    for(i=0;i<m;i++)
    {
       if(i!=(m-1))
        cout<<a[i]<<'+';
       else
        cout<<a[i];
    }
    return 0;
}
