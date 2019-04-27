#include<stdio.h>
#include<conio.h>
#include<math.h> 
#define err 0.000001 
#define MAXIT 20 
float f(float x)
{
 return(x*x*x-9); 	
}
float fd(float x)
{
 return(3*x*x); 	
}
int main() 
{  
   int count;    
   float x0, xn, fx, fdx, fxn;    
   printf("SOLUTION BY NEWTON RAPHSON'S METHOD\n");   
   printf("input initial value of x:");    
   scanf("%f",&x0); 
   count=1;
	 if(count<MAXIT)       
	 {  
	        fx=f(x0);    
        fdx=fd(x0);    
         xn=x0-fx/fdx;    
         count=count+1;  
         if (fabs((xn-x0)/xn) < err)    
       {  
         printf("root=%f\n",xn); 
         fxn =f(xn);
         printf("function value=%f\n",fxn);
	     printf("no. of iterations=%f\n",count);
	}    
	  else {  
	   x0=xn;   
	  }       
	 }    
	 else{  
	       printf("SOLUTION DOESNOT CONVERGE.\n");          
	       printf("iterations=%f\n",count);      
	    }    
	 return 0;
	 } 

