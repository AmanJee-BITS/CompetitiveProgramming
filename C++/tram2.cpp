#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 int main()
 {
   int n;
   cin>>n;

   if(n>=2 && n<=1000)
   {
     int a[n][10];

     for(int i=0; i<n; i++)
     {
       cin>>a[i][0]>>a[i][1];

     }

     if(a[0][0]==0 && a[n-1][1]==0)
     {
         int sum = 0;
         int max = -999;

         for(int i=0;i<n;i++)
         {
           sum = sum + a[i][1] - a[i][0];
           if(sum>max)
           {
             max = sum;
           }
         }

         cout<<max;
      }
     return 0;
   }
  }
