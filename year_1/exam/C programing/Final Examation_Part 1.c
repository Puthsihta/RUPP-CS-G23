#include <stdio.h>
#include <conio.h>
#include <malloc.h>
int main()
{
	int n=15;
	int i, k;
	float *ptr;
	int a[15] = { 30, 45, 60, 35, 23, 50, 40, 90,18,25, 42,70,20,56, 43 };
	ptr = (float*)calloc(n,sizeof(float));
	printf("\nOutput Value of Array: ");
	for(i=0; i<n; i=i+2)
	{
		printf("\tArray[%d] = %d", i, a[i]);
	}
	printf("\nOutput Value of Pointer: ");
	for(k=n-1; k>0; k=k-1)
	{
		*(ptr+k)= k+0.5;
		printf("\tPointer [%d] = %g", k, *(ptr+k));
	}
	
	getch();
	return 0;
}