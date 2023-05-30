#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct Stuff
{
	int id;
	char name[12];
	char phone[18];
	float salary;
}s[99], so[99];
int main()
{
	int arr[99];
	int n, m;
	float sl;
	printf("\n+++++++++++++++++   Stuff List   ++++++++++++++++\n");
	printf("Enter the number of Stuff: "); scanf("%d", &n);
	while(n<2 || n>99)
	{
		printf("\t\t-------Error-----------\n");
	}
	printf("\n\t1. Create List of Stuff << Write with File >>"); 
	printf("\n---------------------------------------------------------------------\n");
	for(int i=0; i<n; i++)
	{
		s[i].id = i+1;
		printf("\n");
		printf("#Stuff %d\n", i+1);
		printf("\tEnter Name: "); fflush(stdin); gets(s[i].name);
		printf("\tEnter PhoneNumber: "); fflush(stdin); gets(s[i].phone);
		printf("\tEnter Salary: "); scanf("%g", &sl);
		s[i].salary = sl;
	}  
	// Write Data To binary File name Employee.bin
	FILE *fw;
	fw = fopen("Employee.bin", "wb") ;
	for(int i=0; i<n; i++)
	{
		fwrite(&s[i], sizeof(struct Stuff), 1, fw);
	}
	fclose(fw);
	// Sort by UpperSalary
	struct Stuff temp;
	for(int i=0; i<n-1; i++)
			{
				for(int j=i+1; j<n; j++)
				{
					if(s[i].salary < s[j].salary)
					{
						temp = s[i];
						s[i] = s[j];
						s[j] = temp;
					}
				}
			}
	printf("\nShow After Sort!\n");
	printf("\n---------------------------------------------------------------------\n");
	printf("\tID\t\tName\t\tPhoneNumber\t\tSalary\n");
	printf("\n---------------------------------------------------------------------\n");
	for(int i=0; i<n; i++)
	{
		printf("\t%d\t\t%s\t\t%s\t%g\n", so[i].id, so[i].name, so[i].phone, so[i].salary);
	}
	getch();
	
	// Read Data for File name Employee.bin
	int Num;
	printf("\n\t2. Read Data from File\n");
	printf("\n---------------------------------------------------------------------\n");
	printf("\tID\t\tName\t\tPhoneNumber\t\tSalary\n");
	printf("\n---------------------------------------------------------------------\n");
	FILE *fr;
	fr = fopen ("Employee.bin", "rb");
	for(int i=0; i<n; i++)
	{
		fread(&so[i], sizeof(struct Stuff), 1, fr);
		printf("\t%d\t\t%s\t\t%s\t%g\n", so[i].id, so[i].name, so[i].phone, so[i].salary);
	}
	
	getch();
	return 0;
}