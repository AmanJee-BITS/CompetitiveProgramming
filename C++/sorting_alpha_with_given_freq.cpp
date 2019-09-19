#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

char c,a[1000];
int i;

std::set<char> hello;

int main()
{
  set<char> :: iterator itr;

  while((c = getchar()) != '\n')
     {
       hello.insert(c);
     }

    for(itr = hello.begin(); itr != hello.end(); ++itr)
    {
      cout <<*itr;
    }
    return 0;
}
