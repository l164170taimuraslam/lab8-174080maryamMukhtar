#include<iostream>
#include "RationalNumbers.h"
using namespace std;

RationalNumbers::RationalNumbers()
{
	a = 0;
	b = 0;
}
RationalNumbers::RationalNumbers(int x, int y)
{
	a = x;
	b = y;
}
int RationalNumbers::geta()
{
	return a;
}
int RationalNumbers::getb()
{
	return b;
}
void RationalNumbers::print()
{
	cout << a << " / " << b << endl;
}

RationalNumbers RationalNumbers::operator+(const RationalNumbers &obj)
{
	RationalNumbers temp;
	if (this->b == obj.b)
	{
		temp.a = this->a + obj.a;
		temp.b = this->b;
	}
	else
	{
		temp.a = (this->a*obj.b) + (obj.a*this->b);
		temp.b = this->b*obj.b;
	}
	temp.ReducedForm();
	return temp;
}
RationalNumbers RationalNumbers::operator-(const RationalNumbers &obj)
{
	RationalNumbers temp;
	if (this->b == obj.b)
	{
		temp.a = this->a - obj.a;
		temp.b = this->b;
	}
	else
	{
		temp.a = (this->a*obj.b) - (obj.a*this->b);
		temp.b = this->b*obj.b;
	}
	temp.ReducedForm();
	return temp;
}
RationalNumbers RationalNumbers::operator*(const RationalNumbers &obj)
{
	RationalNumbers temp;
	temp.a = this->a * obj.a;
	temp.b = this->b * obj.b;
	temp.ReducedForm();
	return temp;
}
RationalNumbers RationalNumbers::operator/(const RationalNumbers &obj)
{
	RationalNumbers temp;
	temp.a = (this->a) * obj.b;
	temp.b = (this->b)* obj.a;
	temp.ReducedForm();
	return temp;
}
bool RationalNumbers::operator==(const RationalNumbers &obj)
{
	if (this->a == obj.a && this->b == obj.b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool RationalNumbers::operator!=(const RationalNumbers &obj)
{

	if (this->a != obj.a || this->b != obj.b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void RationalNumbers::ReducedForm()      //Reducing Rational Number BY Finding GCD
{
	int temp;

	if (a > b)
	{
		temp = a;
	}
	else
	{
		temp = b;
	}
	int temp1 = 2;

	while (temp1 <= temp)
	{
		if (a%temp1 == 0 && b%temp1 == 0)
		{
			a /= temp1;
			b /= temp1;
			temp1 = 2;
		}
		else
		{
			temp1++;
		}
	}

	if (b < 0)
	{
		b *= -1;
		a *= -1;
	}
}
RationalNumbers::~RationalNumbers()
{

}
