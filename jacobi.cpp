#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x, float y, float z)
{
	return(17-y+2*z)/20;
}
float s(float x, float y, float z)
{
	return(-18+z-3*x)/20;
}
float t(float x, float y, float z)
{
	return(25-2*x+3*y)/20;
}
int main()
{
	float x0,y0,z0,x1=0,y1=0,z1=0,tempx,tempy,tempz,acc=0.0001;
	int count=0;
	printf("Enter the initial guesses:\n");
	scanf("%f%f%f",&x0,&y0,&z0);
	do{
		tempx=x1;
		tempy=y1;
		tempz=z1;
		x1=f(x0,y0,z0);
		y1=s(x0,y0,z0);
		z1=t(x0,y0,z0);
		count++;
		x0=x1;
		y0=y1;
		z0=z1;
	}while(fabs(tempx-x1)>acc && fabs(tempy-y1)>acc && fabs(tempz-z1)>acc);
	printf("\n\nResults:\n");
	printf("x=%f \n y=%f \n z=%f",x1,y1,z1);
	printf("Iteration=%d",count);
	return 0;
}
