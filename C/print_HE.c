#include <stdio.h>
#include <string.h>
int main()
{
  int n;
  scanf("%d", &n);
  char s[n];
  int i;
  int h=0,a=0,c=0,k=0,e=0,r=0,t=0;
  int sum=0;

  scanf("%s",s);

  for(i=0;i<n;i++)
  {
    if(s[i] == 'h')
    {h++;}
    else if(s[i]=='a')
    {a++;}
    else if(s[i]=='c')
    {c++;}
    else if(s[i]=='k')
    {k++;}
    else if(s[i]=='e')
    {e++;}
    else if(s[i]=='r')
    {r++;}
    else if(s[i]=='t')
    {t++;}
    else
    continue;
  }
  if(h>=2 && a>=2 && e>=2 && r>=2 && t>=1 && c>=1 && k>=1)
  {
    sum= h+a+e+r+t+c+k;
    sum=sum/11;
    printf("%d",sum);
  }
  return 0;
}

//BEST CODE//

#include <stdio.h>

int main()
{
    int i,n,h,a,c,k,e,r,t,x;
    char z;
    scanf("%d",&n);
    h=a=c=k=e=r=t=0;
    for(i=0;i<n;i++)
    {
    	z=getchar();
    	switch(z)
    	{
    		case 'h':h++;
    		break;
    		case 'a':a++;
    		break;
    		case 'c':c++;
    		break;
    		case 'k':k++;
    		break;
    		case 'e':e++;
    		break;
    		case 'r':r++;
    		break;
    		case 't':t++;
    		break;
    	}
    }
    x=h/2;
    if(a/2<x)
    x=a/2;
    if(c<x)
    x=c;
    if(k<x)
    x=k;
    if(e/2<x)
    x=e/2;
    if(r/2<x)
    x=r/2;
    if(t<x)
    x=t;
    printf("%d",x);
    return 0;
}
Language: C
