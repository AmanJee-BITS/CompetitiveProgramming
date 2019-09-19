#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int T,i,p=0,q=0;
  scanf("%d",&T);
  int A[T],B[T],N[T];
  int C[T],D[T],max[T];
  for(i=0;i<T;i++)
  {
    scanf("%d %d %d",&A[i],&B[i],&N[i]);
  }
  for(i=0;i<T;i++)
  {
    if(N[i]%2 !=0)
    {
      p=(N[i]/2) +1;
      q=N[i]-p;
      C[i]=A[i] * pow(2,p);
      D[i]=B[i] * pow(2,q);
    }
    else
    {
      p=N[i]/2;
      C[i]=A[i] * pow(2,p);
      D[i]=B[i] * pow(2,p);
    }
  }
  for(i=0;i<T;i++)
  {
    if(C[i]>D[i])
    {
      max[i]=C[i]/D[i];
    }
    else
    {
      max[i]=D[i]/C[i];
    }
  }
  for(i=0;i<T;i++)
  {
    printf("%d\n",max[i]);
  }
  return 0;
}
