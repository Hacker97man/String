#include "stdafx.h"
#include<iostream>
using namespace std;
void EnterIndex();
void deleteIndex();
void TurnedName();
void Repetition();
void Small();
char ar[5000];
inline void out();
int n = 0;
int main()
{
	char a;
	int i = 0;
	cout << "Enter [.] To Stop The Inserting : ";
	cin >> a;
	while (a != '.')
	{
		ar[i++]=a;
		cin >> a;
		n++;
	}
	cout << "[1]Enter The Char  indext  To Edit\n";
	cout << "[2]Enter The Char  indext  To delete\n";
	cout << "[3]Witer The Turned Name\n";
	cout << "[4]Repetition The Name\n";
	cout<<"[5]Turned The Cap To Small and Conversely\n";
	int r;
	cin >> r;
	switch (r)
	{
	case 1: EnterIndex(); out(); break;
	case 2:deleteIndex(); out(); break;
	case 3:TurnedName(); out(); break;
	case 4:Repetition(); out(); break;
	case 5:Small(); out(); break;
	default:cout << "Bad Choice !!\n";
		break;
	}
	
	return 0;
}
inline void out() {
	for (int i = 0; i < n; i++)
		if (ar[i] != '0')
			cout << ar[i];
	cout << endl;
}
void Repetition() {
	cout << "Enter The Number Of The Repetition :";
	int repetition;
	cin >> repetition;
	for (int i = 0; i < repetition; i++)
		cout << ar << endl;
}
void TurnedName() {
	char tn[5000];
	for (int i = n - 1; i >= 0; i--)
		tn[n-i] = ar[i];
	for (int i = 0; i < n; i++)
		ar[i] = tn[i];
}
void EnterIndex() {
	cout << "Enter The Indext Of The Char To Edit :";
	int in;
	cin >> in;
	if (in >= n)
		cout << "The Index Out Of Reange\n";
	else {
		cout << "Enter The New Char  : ";
		char ne;
		cin >> ne;
		ar[in-1] = ne;
	}
}
void deleteIndex() {
	cout << "Enter The Indext Of The Char To delete :";
	int in;
	cin >> in;
	if (in >= n)
		cout << "The Index Out Of Reange\n";
	else {
		ar[in-1] = '0';
	}
}

void Small() {
	for (int i = 0; i < n; i++)
	{
		if (ar[i] >= 'A' && ar[i] <= 'Z')
			ar[i] += 32;
		else if (ar[i] >= 96 && ar[i] <= 122)
			ar[i] -= 32;
	}
}
