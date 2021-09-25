
#include <iostream>

using namespace std;


int main()
{
	int k;
	float a, b, c, d;
	cout <<"Choose number of task" << endl;
	cin >> k;
	switch (k)
	{
	case(1):
	{
		float a, b;
		cout << "Enter A side :" << endl;
		cin >> a;
		cout << "Enter B side :" << endl;
		cin >> b;
		cout << "S=" << (a * b) << endl;
		cout << "L=" << (a + b) * 2 << endl << endl;
	}
	break;

	case(2):
	{
		cout << "Enter diameter of circle :" << endl;
		cin >> d;
		cout << "L=" << d * 3.14 << endl << endl;
	}
	break;

	case(3):
	{
		cout << "Enter A :" << endl;
		cin >> a;
		cout << "Enter B :" << endl;
		cin >> b;
		cout << "Arithmetic mean=" << (a + b) / 2 << endl << endl;
	}
	break;

	case(4):
	{
		cout << "Enter C :" << endl;
		cin >> c;
		cout << "Enter D :" << endl;
		cin >> d;

		a = c * c;
		b = d * d;

		cout << "Sum of squares=" << a + b << endl;
		cout << "Difference of squares=" << a - b << endl;
		cout << "Multiplication of squares=" << a * b << endl;
		cout << "Quotient of squares=" << a / b << endl << endl;
	}
	break;

	case(5):
	{
		cout << "Enter C :" << endl;
		cin >> c;
		cout << "Enter D :" << endl;
		cin >> d;

		cout << "Sum of moduls=" << fabs(c) + fabs(d) << endl;
		cout << "Difference of moduls=" << fabs(c) - fabs(d) << endl;
		cout << "Multiplication of moduls=" << fabs(c) * fabs(d) << endl;
		cout << "Quotient of moduls=" << fabs(c) / fabs(d) << endl;
	}
	break;

	default:
		cout << "Incorrect number!" << endl;
		break;
	}


	return 0;
}

