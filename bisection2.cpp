#include<stdio.h>
#include<math.h>
float f(float);
int main()
{
	float x,a,b,err=0.00001;
	printf("\n Enter values of a and b:");
	scanf("%f%f",&a,&b);
	printf("The guess values of a and b is %f and %f\n",a,b);
	printf("guess a  guess b  x   f(a)  f(b)  f(x)\n");
	if(f(a)*f(b)>0)
	printf("\n Root does not lies between %f and %f",a,b);
	else
	{
		do
		{
			x=(a+b)/2;
			printf("%f %f %f %f %f %f\n",a,b,x,f(a),f(b),f(x));
			if(f(x)==0)
			{
				break;
			}
			else if(f(a)*f(x)<0)
			 b=x;
			 else
			 a=x;
		}while(fabs(b-a)>=err);
		printf("\n Root of the equation=%f",x);
	}
}
float f(float x)
{
	return (exp(x)-3*x);
}
     
