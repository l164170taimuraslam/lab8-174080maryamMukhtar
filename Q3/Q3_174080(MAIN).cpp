#include<iostream>
#include"RationalNumbers.h"
using namespace std;
void DenCheck(int &y);      //Function to check for denominator=0
int main()
{
	int x, y;
	cout << "Enter Numerator of A (Rational Number): ";
	cin >> x;
	cout << "Enter Denominator of A (Rational Number): ";
	cin >> y;
	DenCheck(y);
	RationalNumbers A(x, y);     //Rational A
	cout << "Enter Numerator of B (Rational Number): ";
	cin >> x;
	cout << "Enter Denominator of B (Rational Number): ";
	cin >> y;
	DenCheck(y);
	RationalNumbers B(x, y);     //Rational B
	cout << "\nA= ";
	A.print();
	cout << "\nB= ";
	B.print();

	RationalNumbers W, X, Y, Z;


	W = A + B;        //checking + opeartor overloader
	cout << "\nW= A+B = ";
	W.print();

	X = A - B;        //checking - opeartor overloader
	cout << "\nX= A-B = ";
	X.print();

	Y = A * B;        //checking * opeartor overloader
	cout << "\nY= A*B = ";
	Y.print();

	Z = A / B;        //checking / opeartor overloader
	cout << "\nZ= A/B = ";
	Z.print();
	cout << endl;

	A.ReducedForm();
	cout << "Reduced A= ";
	A.print();

	B.ReducedForm();
	cout << "Reduced B= ";
	B.print();

	if (A == B)       //checking == opeartor overloader
	{
		cout << "\n\tA and B are Equal !" << endl;
	}
	if (A != B)       //checking != opeartor overloader
	{
		cout << "\n\tA and B are Not Equal !" << endl;
	}
	system("pause");
	return 0;
}
void DenCheck(int &y)
{
	if (y == 0)
	{
		while (y == 0)
		{
			cout << "Denominator can not be Zero in a Rational Number" << endl;
			cout << "Enter Roll Number Again: ";
			cin >> y;
		}
	}
}