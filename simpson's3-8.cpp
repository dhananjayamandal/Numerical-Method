//simpson's 3/8 rule
#include<stdio.h>
#include<conio.h>
float f(float x)
{
	return (1/(1+x*2));
}
int main()
{
	int n,i,flag,j;
	float x[20],y[20],x0,xn,h,I,s=0;
	printf("Enter the value of x0,xn,h:\n");
	scanf("%f%f%f",&x0,&xn,&h);
	n=(xn-x0)/h;
	printf("The functional value are:\n");
	for(i=0;i<=n;i++)
	{
		x[i]=x0+i*h;
		y[i]=f(x[i]);
		printf("%f\n",y[i]);
	}
	s+=y[0]+y[n];
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(i==3*j)
			{
				flag=1;
				break; 
			}
			else
			flag=0;
		}
		if(flag==0)
	{
		s+=3*y[i];
	}
	else
	   s+=2*y[i];
	}
	
	I= (3*h/8)*s;
	printf("\n The final integration is %f",I);
	return 0;
}
