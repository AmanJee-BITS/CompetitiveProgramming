#include<stdio.h>
int main()
{
    int y,i,j,k,l;
    scanf("%d",&y);

while(y++)
    {
         i=y%10;
         j=(y/10)%10;
         k=(y/100)%10;
         l=(y/1000)%10;

    if(i!=j&&j!=k&&k!=l&&j!=l&&i!=l&&i!=k)
       break;
    }
printf("%d",y);
return 0;
}
