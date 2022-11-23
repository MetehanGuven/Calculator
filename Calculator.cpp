#include <iostream>
#include <stdlib.h>
using namespace std;
void Islem(double exNum)
{
	int choose = 0;
	int Exit = 0;
	double num = 0;
		cout << " 1) Addition(+)" << endl;
		cout << " 2) Subtraction(-)" << endl;
		cout << " 3) Multiplication(*)" << endl;
		cout << " 4) Division(/)" << endl;
		cout << " Choose: ";
		cin >> choose;
		if (choose == Exit)
		{
			cout << " Are you sure you want to exit?" << endl;
			cout << " 1) Yes" << endl;
			cout << " 2) No" << endl;
			cout << " Choose: ";
			cin >> choose;
			switch (choose) {
			case 1: {
				exit(0);
			}
			case 2: {
				Islem(exNum);
			}
			}
		}
		{
			switch (choose) {
			case 1: {
				cout << " Another number: ";
				cin >> num;
				cout << " New number is: " << exNum + num << endl;
				exNum = exNum + num;
				Islem(exNum);
			}
			case 2: {
				cout << " Another number: ";
				cin >> num;
				cout << " New number is: " << exNum - num << endl;
				exNum = exNum - num;
				Islem(exNum);
			}
			case 3: {
				cout << " Another number: ";
				cin >> num;
				cout << " New number is: " << exNum * num << endl;
				exNum = exNum * num;
				Islem(exNum);
			}
			case 4: {
				cout << " Another number: ";
				cin >> num;
				cout << " New number is: " << exNum / num << endl;
				exNum = exNum / num;
				Islem(exNum);
			}
			}

		}
}

int main()
{
	int exNum = 0;
	cout << " Enter a number: ";
	cin >> exNum;
	Islem(exNum);

	return 0;
}