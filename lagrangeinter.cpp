//Lagranges interpolation
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	float x[10],f[10],sum=0,l,b;
	printf("Enter the number of data points:\n");
	scanf("%d",&n);
		printf("\nInput the data points for x:");
	for(i=0;i<n;i++)
	{
	  scanf("%f",&x[i]);
	}
		printf("\nInput the data points for f(x):");
		for(i=0;i<n;i++)
	{
	  scanf("%f",&f[i]);
	}
	printf("\nInput the specied value of x:");
	scanf("%f",&b);
	for(i=0;i<=n;i++)
	{
		l=1;
		for(j=0;j<=n;j++)
		{
			if(i!=j)
				l=l*(b-x[j])/(x[i]-x[j]);
			}
			sum=sum+l*f[i];
		}
		printf("\nThe required functional value at %f  =\t%f",b,sum);
		return 0;
}
