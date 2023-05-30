#include <iostream.h>
#include <iomanip.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <dos.h>
int i, num, m, n;
class OptionType {
public:
	int data;
	void AddEntry();
	void ShowRecord();
	int operator == (int);
	int operator > (OptionType &);
};

int InputNumber() {
	cout << "Input number of Entry: ";
	if(num == 0)
		cin >> num;
	else {
		cin >> m;
		num += m;
	}
	return num;
}

int GetIndex() {
	if(num == 0)
		i = 0;
	else
		i = num;
	return i;
}

int OptionType:: operator == (int search) {
	return (data == search);
}

int OptionType:: operator > (OptionType & Second) {
	return (data > Second.data);
}

void SortRecord(OptionType op[]) {
	OptionType temp;
	int j;
	for(i = 0; i < n; i++)
		for(j = i + 1; j < n; j++)
			if(op[i] > op[j]) {
				temp = op[i];
				op[i] = op[j];
				op[j] = temp;
			}
	for(i = 0; i < n; i++)
		op[i].ShowRecord();
}
void SearchRecord(OptionType op[]) {
	int k = 0, SearchData;
	cout << "Enter data to search: "; cin >> SearchData;
	for(i = 0; i < n; i++)
		if(op[i] == SearchData) {
			k++;
			op[i].ShowRecord();
		}
	if(k == 0)
		cout << endl << "Search not found!";
}

void UpdateRecord(OptionType op[]) {
	int k = 0, SearchData;
	cout << "Enter data to update: "; cin >> SearchData;
	for(i = 0; i < n; i++)
		if(op[i] == SearchData) {
			k++;
			cout << endl;
			cout << "Data " << "[" << (i + 1) << "] : " << SearchData << endl;
			cout << "Update to: "; cin >> op[i].data;
			cout << endl << "Update Completed!";
		}
	if(k == 0)
		cout << endl << "Search not found!";
}

void DeleteRecord(OptionType op[]) {
	int j, k = 0, SearchData;
	cout << "Enter data to delete: "; cin >> SearchData;
	for(i = 0; i < n; i++)
		if(op[i] == SearchData) {
			k++;
			for(j = i; j < n - 1; j++)
				op[j].data = op[j + 1].data;
			n--;
			cout << endl << "Delete Completed!";
		}
	if(k == 0)
		cout << endl << "Search not found!";
}

void OptionType:: ShowRecord() {
	cout << endl << "Data " << "[" << (i + 1) << "] : " << data << endl;
}

void OptionType:: AddEntry() {
	cout << "Data " << "[" << (i + 1) << "] : "; cin >> data;
}

void LeaveProgram() {
	gotoxy(26,2); cout << "Thank you for using this program" << endl;
	gotoxy(33,4); cout << "Good Luck! /(~ .~)/ ";
}

void main() {
	OptionType op[20];
	int choice;
	do { clrscr();
		 cout << "[1] ADD ENTRY" << endl;
		 cout << "[2] SHOW RECORD" << endl;
		 cout << "[3] SEARCH RECORD" << endl;
		 cout << "[4] SORT RECORD" << endl;
		 cout << "[5] UPDATE RECORD" << endl;
		 cout << "[6] DELETE RECORD" << endl;
		 cout << "[7] EXIT" << endl << endl;
		 cout << "ENTER CHOICE: "; cin >> choice;
		 switch(choice) {
			case 1: clrscr();
					i = GetIndex();
					n = InputNumber();
					//OptionType * op = new OptionType[n]; //make of allocation memory to store data has been wrong, prepare later(ask teacher)
					for( ; i < n; i++)
						op[i].AddEntry();
					break;
			case 2: clrscr();
					for(i = 0; i < n; i++)
						op[i].ShowRecord();
					getch();
					break;
			case 3: clrscr();
					SearchRecord(op);
					getch();
					break;
			case 4: clrscr();
					SortRecord(op);
					getch();
					break;
			case 5: clrscr();
					UpdateRecord(op);
					getch();
					break;
			case 6: clrscr();
					DeleteRecord(op);
					getch();
					break;
			case 7: clrscr();
					LeaveProgram();
					getch();
					exit(0);
			default: cout << "Invalid Choice!" << endl;
		 }
	}while(choice <= 6);
}



