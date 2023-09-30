#include <iostream>
using namespace std;

int main() {
	float a, b;
	int op;
	cout << "Enter Two numbers: " << endl;
	cin >> a >> b;
	if (cin.get() == 10)
	{
		cout << "vse good" << endl;
	    } else {
			 cout << "pishov nahuy chmo" << endl;
			 exit(1);
		}
	cout << "Choose Operator: 1. + 2. - 3. * 4. / " << endl;
	cin >> op;

	switch (op) {
	case 1:
		cout << a + b << endl;
		break;
	case 2:
		cout << a - b << endl;
		break;
	case 3:
		cout << a * b << endl;
		break;
	case 4:
		cout << a / b << endl;
		break;
	}

	return 0;
}