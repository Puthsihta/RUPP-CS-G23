#include <iostream.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int i, num, m, n;
class Shop {
	char item[10];
	int quantity;
	float UnitPrice;
public:
	double amount;
	float GetUP() {
		return UnitPrice;
	}
	int SoldItem(int TempQuantity) {
		return (quantity -= TempQuantity);
	}
	void AddItem();
	void ShowItem();
	char operator == (char*);
};

int InputNumber() {
	int m;
	cout << "Input number of item to store: ";
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
void Shop:: AddItem() {
	cout << endl << "Item      : ";
	cin.seekg(ios::end); cin.get(item, 10);
	cout << "Quantity  : "; cin >> quantity;
	cout << "Unit Price: "; cin >> UnitPrice;
}

void Shop:: ShowItem() {
	cout << endl << "Item      : " << item << endl;
	cout << "Quantity  : " << quantity << endl;
	cout << "Unit Price: " << UnitPrice << endl;
}

char Shop:: operator == (char *SearchItem) {
	return (strcmp(item, SearchItem) == 0);
}

void ContiDeleteItem(Shop sp[], char * SearchItem) {
	int k = 0, j;
	for(i = 0; i < n; i++)
		if(sp[i] == SearchItem) {
			k++;
			for(j = i; j < n - 1; j++)
				sp[j] = sp[j + 1];
			n--;
		}
	if(k == 0)
		cout << endl << "Search not found!";
}

void DeleteItem(Shop sp[]) {
	char SearchItem[10];
	cout << "Enter to item to delete: ";
	cin.seekg(ios::end); cin.get(SearchItem, 10);
	ContiDeleteItem(sp, SearchItem);
	cout << endl << "Delete Completed!";
}

void SellItem(Shop sp[]) {
	int k = 0;
	char TempItem[10];
	int TempQuantity;
	float paid;
	cout << endl << "Item      : ";
	cin.seekg(ios::end); cin.get(TempItem, 10);
	cout << "Quantity  : "; cin >> TempQuantity;
	for(i = 0; i < n; i++)
		if(sp[i] == TempItem) {
			k++;
	cout << "Unit Price: " << sp[i].GetUP() << endl;
	sp[i].amount = sp[i].GetUP() * TempQuantity;
	cout << "Amount    : " << sp[i].amount << endl;
	cout << "Paid USD  : "; cin >> paid;
	cout << endl;
	cout << endl << "Total USD : " <<
	(paid - sp[i].amount) << endl;
	if(sp[i].SoldItem(TempQuantity) == 0)
	ContiDeleteItem(sp ,TempItem);
    }
cout << endl;
cout << "Thank you for using our product. Good Luck! ";
}
void main() {
	Shop sp[20];
	int choice;
	do {
		clrscr();
	cout << "[1] ADD ITEM TO STORAGE" << endl;
	cout << "[2] SHOW ITEM IN STORAGE" <<endl;
	cout << "[3] SELL ITEM" << endl;
	cout << "[4] DELETE ITEM" << endl;
	cout << "[5] EXIT" << endl << endl;
	cout << "ENTER CHOICE: "; cin >> choice;
		switch(choice) {
			case 1: clrscr();
			i = GetIndex();
			n = InputNumber();
			for( ; i < n; i++)
				sp[i].AddItem();
				break;
			case 2: clrscr();
			cout << "Item in storage:\n";
			for(i = 0; i < n; i++)
				sp[i].ShowItem();
				getch();
				break;
			case 3: clrscr();
	cout << "There are our product below:\n";
			for(i = 0; i < n; i++)
				sp[i].ShowItem();
cout << endl;
cout<< "BUYER: Please, enter information below:\n";
		SellItem(sp);
			getch();
			break;
			case 4: clrscr();
			DeleteItem(sp);
				getch();
				break;
			case 5: //LeaveProgram();
					exit(0);
					getch();
	default: cout << "Invalid Choice!"; getch();
    }
  }while(choice <= 5);
}

