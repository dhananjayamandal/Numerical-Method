// Heuns method
#include<stdio.h>
#include<math.h>
#define max 15
float f(float x,float y)
{
	float f;
   f=2.0*y/x; 
   return(f);
}
int main()
{
   int n,i;
   float x,y,xp,h,m1,m2;
   printf("\nEnter the initial value of x and y\n");
   scanf("%f%f",&x,&y);
   printf("\nInput x at which y is required");
   scanf("%f",&xp);
   printf("\nInput step size");
   scanf("%f",&h);
   n=(int)((xp-x)/h+0.5);
   for(i=1;i<=n;i++)
   {
   	m1=f(x,y);
      m2=f(x+h,y+m1*h);
      x=x+h;
      y=y+0.5*h*(m1+m2);
   	printf("%5d %10.6f %10.6f\n",i,x,y);
   }
   printf("\nThe value of y at x=%f is %10.6f\n",x,y);
     return 0;
}

