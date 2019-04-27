#include<stdio.h>
#include<math.h>
float f(float x); // prototype of given function to find the root of that eqn.
int main()
{
    float a,b,c,d,e,error;
    int count=1,n;
    printf("\n\nEnter the values of a and b:\n"); //(a,b) must contain the solution.
    scanf("%f%f",&a,&b);// accepting the two initial guess values.
    printf("Enter the values of allowed error:\n");
    scanf("%f",&e); // accepting the stopping critation
    do
    {
        if(f(a)==f(b))
        {
            printf("\nSolution cannot be found as the values of a and b are same.\n");
        break;
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        error=fabs(f(c));
        printf("Iteration No-%d    x=%f\n",count,c);
        count++;
        if(count==n)
        {
        break;
        }
    }while(error>e);
    printf("\n The required solution is %f\n",c);
 
}
float f(float x) // function defination of given eqn to find its root.
{
    return(x*exp(x)-cos(x));
}
