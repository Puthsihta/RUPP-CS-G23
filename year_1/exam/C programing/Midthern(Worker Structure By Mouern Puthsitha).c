// Write in CodeBlock IDE by  Moeurn Puthsitha
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct Worker
{
	int id;
	char name[18];
	char sex[6];
	char phone[18];
	float bsalary;
	float hours;
	float bonus;
	float salary;
}arr[99];
int main()
{
	int n;
	float bs, h, bn,sl;  
	again:
	printf("Enter the number of Worker: "); scanf("%d", &n);
	while(n < 2 || n > 99)
	{
		goto again;
	}
	// INput Data of Worker
	for(int i=0; i<n; i++)
	{
		arr[i].id = i+1;
		printf("\n");
		printf("#Worker %d\n", i+1);
		printf("\tEnter Name: "); fflush(stdin); gets(arr[i].name);
		printf("\tEnter Gender: "); fflush(stdin); gets(arr[i].sex);
		printf("\tEnter Phone Number: "); fflush(stdin); gets(arr[i].phone);
		printf("\tEnter Base Salary: "); scanf("%g", &arr[i].bsalary);
		arr[i].bsalary = bs;
		printf("\tEnter Hours: "); scanf("%g", &arr[i].hours);
		//printf("\tEnter Bonus Salary: "); scanf("%g", &arr[i].bonus);
		
		// Condition of Bonus Salary with Hour of Working
		if(arr[i].hours <= 160)
		{
			arr[i].bonus = 0;
		}else  if(arr[i].hours < 180)
		{                            
			arr[i].bonus = (arr[i].hours-160)*1.5;
		}else
		{
			arr[i].bonus = (180-160)*1.5 + (arr[i].hours - 180)*2.5;
		}
		arr[i].hours = h;
		arr[i].bonus = bn;
		arr[i].salary = sl;
		sl = bs + bn;
	}
	

	printf("\n\n--------------------Show List of Worker-------------------------\n");
	printf("\tID\tName\tGender\tPhone Number\tBase Salary\tHour\tSalary\n");
	printf("--------------------------------------------------------------------\n");
	for(int i=0; i<n; i++)
	{
		printf("\t%03d\t%s\t%s\t  %s\t%g\t%g\t%g\n", arr[i].id, arr[i].name, arr[i].sex, arr[i].phone, arr[i].bsalary, arr[i].hours, arr[i].salary);
	}
	
	getch();
	return 0;
}