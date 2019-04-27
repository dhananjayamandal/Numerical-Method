//linear curve fitting
#include<stdio.h>
#define MAX 100
int main()
{
	int n;
	float x[MAX],y[MAX],sx=0,sy=0,sx2=0,sxy=0,a,b;
	printf("Enter the number of points:\t");
	scanf("%d",&n);
	printf("Enter the values of x:\t");
	for(int i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	 
	printf("Enter the values of  y:\t");
	 	for(int i=0;i<n;i++)
	 	{
	     	scanf("%f",&y[i]);	
	 	}
	     
	for(int i=0;i<=n-1;i++)
	{
		sx+=x[i];
		sy+=y[i];
		sxy+=x[i]*y[i];
		sx2+=x[i]*x[i];
	}
	b=((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
	a=(sy/n)-((b*sx)/n);
	printf("\nThe required equations is:\n");
	printf("y=%f+%f x",a,b);
	return 0;
}
