// CPP Program to interpolate using 
// newton backward interpolation 
#include<stdio.h>  
// Calculation of p mentioned in formula 
float p_cal(float p, int n) 
{ 
	float temp = p; 
	for (int i = 1; i < n; i++) 
		temp*=(p + i); 
	return temp; 
} 

// Calculating factorial of given n 
int fact(int n) 
{ 
	int f = 1; 
	for (int i = 2; i <= n; i++) 
		f *= i; 
	return f; 
} 

int main() 
{ 
	// number of values given  
	int n = 4; 
	float x[] = { 45, 50, 55, 60 }; 
	
	// y[][] is used for difference table 
	// with y[][0] used for input 
	float y[n][n]; 
	y[0][0] = 0.7071; 
	y[1][0] = 0.7660; 
	y[2][0] = 0.8192; 
	y[3][0] = 0.8660; 

	// Calculating the backward difference table 
	for (int i = 1; i < n; i++) { 
		for (int j = n - 1; j >= i; j--) 
			y[j][i] = y[j][i - 1] - y[j - 1][i - 1]; 
	} 

	// Displaying the backward difference table 
	for (int i = 0; i < n; i++) { 
		for (int j = 0; j <= i; j++) 
			printf("%f\t",y[i][j]); 
		printf(" \n ");
	} 

	// Value to interpolate at 
	float value = 52; 

	// Initializing u and sum 
	float sum = y[n - 1][0]; 
	float p = (value - x[n - 1]) / (x[1] - x[0]); 
	for (int i = 1; i < n; i++) { 
		sum+=(p_cal(p, i) * y[n - 1][i]) /fact(i); 
	} 

	printf("\n Value at %f is %f",value,sum);
		return 0; 
} 

