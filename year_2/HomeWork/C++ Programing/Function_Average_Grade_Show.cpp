
//Writing in CodeBlock IDE;

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

double average(double sum)
{                    
	double  avg;
	avg = sum/6;
	//cout << "Average = " << avg << endl;
	return avg;
}

void grade(double avg)
{

	if(avg >= 50)
	{
		if(avg >= 60)
		{
			if (avg >= 70)
			{
				if( avg >= 80)
				{
					if(avg >= 90)
					{
						if (avg >= 100)
						{
							cout << "\n\t--------You are Grade : A\n\n";
						}
					}else
					{
						cout << "\n\t----------You are Grade : B\n\n";
					}
				}else
				{
					cout << "\n\t---------You are Grade : C\n\n";
				}
			}else
			{
				cout << "\n\t---------------You are Grade : D\n\n";
			}
		}else
		{
			cout << "\n\t-----------You are Grade : E\n\n";
		}
	}else
	{
		cout << "\n\t---------!-------You're Fail-------!------\n\n";
	}	
}
void outPut()
{
	double sum;
	double avg;
	
	cout  << "\n---------------------Result----------------\n";
	avg = average(sum);
	cout << "\n\tAverage = " << avg << endl;
	grade(avg);
}
 
int main()
{
	cout << "\t----------------------Menu Score-----------------\n\n";
	cout<< "1. C++ Programing\n2. English\n3. Database\n4. Data Struture\n";
	cout << "5. Data Communication\n6. Computer Architecture\n\n";

	
	double cPlusPlus_score;
	double english_score;
	double database_score;
	double data_communication_score;
	double data_stuture_score;
	double computer_architecture_score;
	
	
	again:
	system("color 7")	;
	cout << "\t1. Enter C++ Programing Score = ";
	cin >> cPlusPlus_score ;
	cout << "\t2. Enter English Score = ";
	cin >> english_score ;
	cout << "\t3. Enter Databasae Score = ";
	cin >> database_score;
	cout << "\t4. Enter Data Stuture Score = ";
	cin >> data_stuture_score;
	cout << "\t5. Enter Data Communication Score = ";
	cin >> data_communication_score;
	cout << "\t6. Enter Computer Architecture Score = "; 
	cin >> computer_architecture_score;
	
	int limits = 100;
	
	while((cPlusPlus_score && english_score && data_communication_score &&
		 data_stuture_score && database_score && computer_architecture_score) > limits)
	{
		system("color 4");
		cout << "\n\n\t\t----------Out of A B*tch------------\n\n";
		getch();
		system("cls");
		goto again;
	}
	double sum;
	sum = cPlusPlus_score + english_score + data_communication_score + data_stuture_score +
	computer_architecture_score + database_score;
	
	outPut();

	getch();
	return 0;
}
