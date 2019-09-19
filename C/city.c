#include<stdio.h>

int main() {
    int  t;
    scanf("%d",&t);

    while(t>0)
    {
        int d1=0,c1=0,d2=0,c2=0,d3=0,c3=0;
        int n;
        scanf("%d",&n);
        while(n--)
        {
            int c,l,d;
            scanf("%d %d %d",&c,&l,&d);
            if(l==1&&d>d1){
            d1=d;
            c1=c;}
            else if(l==1&&d==d1)
            {
                if(c<c1){
                d1=d;
                c1=c;}
            }
            else if(l==2&&d>d2)
            {
            d2=d;
            c2=c;}
            else if(l==2&&d==d2)
            {
                if(c<c2){
                d2=d;
                c2=c;}
            }
            else if(l==3&&d>d3){
            d3=d;
            c3=c;}
            else if(l==3&&d==d3)
            {
                if(c<c3){
                d3=d;
                c3=c;}
            }
                else
                {

                }
        }
         printf("%d\t%d\n%d\t%d\n%d\t%d\n",d1,c1,d2,c2,d3,c3);
         t=t-1;
    }

return 0;

}
