// C -Program to interpolate using 
// newton forward interpolation 
#include<stdio.h> 
// calculating u mentioned in the formula 
float p_cal(float p, int n) 
{ 
	float temp = p; 
	for (int i=1;i< n; i++) 
		temp *=(p-i); 
	return temp; 
} 

// calculating factorial of given number n 
int fact(int n) 
{ 
	int f = 1; 
	for (int i = 2; i <= n; i++) 
		f *= i; 
	return f; 
} 

int main() 
{ 
	// Number of values given 
		int n = 5; 
	float x[] = { 1891, 1901, 1911, 1921, 1931 }; 
					
	// y[][] is used for difference 
	// table and y[][0] used for input 
	float y[n][n]; 
	y[0][0] = 46; 
	y[1][0] = 66; 
	y[2][0] = 81; 
	y[3][0] = 93; 
	y[4][0] = 101;

	// Calculating the forward difference 
	// table 
	for (int i=1;i<n;i++) { 
		for (int j = 0;j <n-i;j++) 
			y[j][i] = y[j+1][i-1] - y[j][i-1]; 
	} 

	// Displaying the forward difference table 
	for (int i = 0;i<n;i++) { 
		printf("%f\t",x[i]);
		for (int j=0;j<n-i;j++) 
			printf("%f\t",y[i][j]); 
		printf("\n");
	} 

	// Value to interpolate at 
	 float value = 1925;
	   // initializing u and sum
	 float sum = y[0][0]; 
    float p = (value-x[0])/(x[1]-x[0]); 
    for (int i=1;i<n;i++) { 
        sum+=(p_cal(p,i)*y[0][i])/fact(i); 
    }
	printf("\n Value at %f is %f",value,sum); 
	return 0; 
} 

