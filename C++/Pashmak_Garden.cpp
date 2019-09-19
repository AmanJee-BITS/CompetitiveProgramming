#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x1,x2,y1,y2;
  cin>>x1>>y1>>x2>>y2;

  int x = x2-x1;
  int y = y2-y1;

  int temp =0;
  if(x<0)
  {
    x = x*(-1);
  }

  if(y<0)
  {
    y = y*(-1);
  }

  float dist = pow(x,2) + pow (y,2);
  dist = sqrt(dist);

  int x3,y3,x4,y4;
  float p = sqrt(2);
  int rem = dist/p;
  if( rem*p == dist)
  {

    if(x1<x2 && y1<y2)
    {
      x3 = x1;
      x4 = x2;
      y3 = y2;
      y4 = y1;
    }
    if(x1<x2 && y1>y2)
    {
      x3 = x2;
      x4 = x1;
      y3 = y1;
      y4 = y2;
    }
    if(x2<x1 && y2<y1)
    {
      x3 = x1;
      x4 = x2;
      y3 = y2;
      y4 = y1;
    }
    if(x2<x1 && y2>y1)
    {
      x3 = x2;
      x4 = x1;
      y3 = y1;
      y4 = y2;
    }
  }

  if(rem * p != dist)
  {
    if(x1==x2 && y1<y2)
    {
      x3 = x1 - dist;
      x4 = x3;
      y3 = y2;
      y4 = y1;
    }
    if(x1==x2 && y1>y2)
    {
      x3 = x1 + dist;
      x4 = x3;
      y3 = y2;
      y4 = y1;
    }
    if(y1==y2 && x1<x2)
    {
      x3 = x2;
      x4 = x1;
      y3 = y2 + dist;
      y4 = y3;
    }
    if(y1==y2 && x2<x1)
    {
      x3 = x2;
      x4 = x1;
      y3 = y1 - dist;
      y4 = y3;
    }
    else if((x1==x2 && y1==y2) || (x1!=x2 && y1!=y2))
    {temp = -1;}
  }

  if(temp==0)
  {cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;}
  else
  cout<<"-1";

return 0;
}
