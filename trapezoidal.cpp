#include<stdio.h>
#include<conio.h>
float f(float x)
{
	return (1/(1+x*2));
}
int main()
{
	int n,i;
	float x[20],y[20],x0,xn,h,I,sum=0;
	printf("Enter the value of x0,xn,h:\n");
	scanf("%f%f%f",&x0,&xn,&h);
	n=(xn-x0)/h;
	if(n%2==1)
	{
		n++;
	}
	printf("The functional value are:\n");
	for(i=0;i<=n;i++)
	{
		x[i]=x0+i*h;
		y[i]=f(x[i]);
		printf("%f\n",y[i]);
	}
	for(i=1;i<n;i++)
	{
		sum+=y[i];
	}
	I= (h/2)*(y[0]+y[n]+2*(sum));
	printf("\n The final integration is %f",I);
	return 0;
}
