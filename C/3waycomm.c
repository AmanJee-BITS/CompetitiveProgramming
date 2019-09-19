#include<stdio.h>
#include<math.h>
double dist(double a,double b,double c,double d);
int main()
{
    int x1,y1,x2,y2,x3,y3;
    double d1,d2,d3;
    int t,n;
    scanf("%d",&t);

while(t-->0)
{
    scanf("%d",&n);
    scanf("%d %d",&x1,&y1);
	  scanf("%d %d",&x2,&y2);
	  scanf("%d %d",&x3,&y3);

    d1= dist(x1,y1,x2,y2);
    d2= dist(x1,y1,x3,y3);
    d3= dist(x3,y3,x2,y2);

 if((n>=d1 || n>=d3 )&& (n>=d2 || n>=d3)  && (n>=d2 || n>=d1))
     printf("yes\n");

 else
    printf("no\n");
 }
 return 0;
}

double dist(double a,double b,double c,double d)
{
 double i=0;
 i=sqrt(pow(a-c,2)+ pow(b-d,2));
    return i;
}
