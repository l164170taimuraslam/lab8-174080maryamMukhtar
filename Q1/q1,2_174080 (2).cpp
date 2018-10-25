#include<iostream>
#include"q1.h"
using namespace std;
enrollment::enrollment(int size)
{
	maxSize = size;
	rollnumbers = new int[maxSize];
	length = 0;
}
enrollment::enrollment(const enrollment& obj)
{
	this->maxSize = obj.maxSize;
	this->length = obj.length;
	this->rollnumbers = new int[maxSize];
	for (int i = 0; i < this->length; i++)
	{
		this->rollnumbers[i] = obj.rollnumbers[i];
	}
}
void enrollment::setLength(int a)
{
	length = a;
}
void enrollment::setmaxsize(int b)
{
	maxSize = b;
}
int enrollment::getlength()
{
	return length;
}
int enrollment::getmaxsize()
{
	return maxSize;
}
void enrollment::input()
{
	cin >> rollnumbers[0];
	ValidInput(rollnumbers[0]);
	for (int i = 1; i < length; i++)
	{
		cin >> rollnumbers[i];
		ValidInput(rollnumbers[i]);
		for (int j = 0; j < i; j++)  //loop to check if the entered input is already present
		{
			if (rollnumbers[i] == rollnumbers[j])
			{
				while (rollnumbers[i] == rollnumbers[j])
				{
					cout << "Roll Number is already present" << endl;
					cout << "Enter Roll Number Again: ";
					cin >> rollnumbers[i];
				}
			}
		}
	}
}
void enrollment::ValidInput(int &a)
{
	if (a < 0 || a == 0)
	{
		while (a < 0 || a == 0)
		{
			cout << "Invalid Roll Number" << endl;
			cout << "Enter Roll Number Again: ";
			cin >> a;
		}
	}
}
void enrollment::print()const
{
	for (int i = 0; i < length; i++)
	{
		cout << rollnumbers[i] << " ";
	}
}
void enrollment::generateAttendanceSheet()           //ascendning order
{
	int temp;
	for (int i = 0; i < length; i++)            //selection sort
	{
		for (int j = i + 1; j < length; j++)
		{
			if (rollnumbers[i] > rollnumbers[j])
			{
				temp = rollnumbers[i];
				rollnumbers[i] = rollnumbers[j];
				rollnumbers[j] = temp;
			}
		}
	}
}
void enrollment::insertinOrder(int rollnumber)
{
	if (length == maxSize)
	{
		cout << "\tYou don't have any space\n" << endl;
	}
	else if (Exist(rollnumber) == true)            //checking the existence of roll number 
	{
		cout << "\tRoll Number is Already Present\n" << endl;
	}
	else
	{
		rollnumbers[length] = rollnumber;
		length = length + 1;
		generateAttendanceSheet();
	}
}
bool enrollment::Exist(int rollnumber)                //function to check the prersence of a roll number
{
	for (int i = 0; i < length; i++)
	{
		if (rollnumbers[i] == rollnumber)
		{
			return true;
		}
	}
	return false;
}
void enrollment::testcopyconstructor(enrollment obj)    //copying elements of one obj into another by adding 1
{
	for (int i = 0; i < length; i++)
	{
		this->rollnumbers[i] = obj.rollnumbers[i] + 1;
	}
}
enrollment::~enrollment()
{
	delete[]rollnumbers;
}
