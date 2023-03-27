#include <iostream>
using namespace std;

int main()
{

    cout << "Name: Muhammad Mijanur Rahman"<<endl;
    cout << "Student ID: CSE2001019249"<<endl;
	char m = 'A';

	switch (m) {
	case 'A':
		cout << "Choise is A";
		break;
	case 'B':
		cout << "Choise is B";
		break;
	case 'C':
		cout << "Choise is C";
		break;
	default:
		cout << "Choice other than A, B and C";
		break;
	}
	return 0;
}

