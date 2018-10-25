#include<iostream>
#include"q1.h"
using namespace std;
void Input(int &a);                                             //Input Function
void check(int &a, enrollment obj);                             //Function to check if length is greater than max size
void Task1(int &a, enrollment &computer_programming);           //Function performing Task 1
void Task3(int &rollnum, enrollment &computer_programming);     //Inserting roll number in the array of roll numbers
void Task4(enrollment obj);                                    //Printing Roll Numbers
int main()
{
	//TASK 1
	enrollment computer_programming;
	int a;   //length
	Task1(a, computer_programming);
	cout << "-----Computer Programming Object-----" << endl;
	computer_programming.print();

	//TASK 2 
	enrollment cp_lab = computer_programming;               //calling copy constructor

	//TASK 3
	int rollnum;
	Task3(rollnum, computer_programming);

	//TASK 4
	cout << "-----Computer Programming Object-----" << endl;
	Task4(computer_programming);
	cout << "\n-----CP Lab Object-----" << endl;
	Task4(cp_lab);

	//TASK 5
	enrollment temp = computer_programming;            //copy constructor
	computer_programming.testcopyconstructor(temp);   //calling test copy constructor function for adding 1 in computer programming roll numbers array
	cout << "\n----Printing Roll Numbers After Test Copy Constructor----" << endl;
	Task4(computer_programming);
	cout << endl;
	system("pause");
	return 0;
}
void Input(int &a)
{
	cin >> a;
}
void check(int &a, enrollment obj)
{
	if (a > obj.getmaxsize() || a < 0)
	{
		while (a > obj.getmaxsize() || a < 0)
		{
			cout << "This size is not possible" << endl;
			cout << "Enter Length Again: ";
			cin >> a;
		}
	}
}
void Task1(int &a, enrollment &computer_programming)
{
	cout << "Enter the number of students enrolled: ";
	Input(a);
	check(a, computer_programming);
	computer_programming.setLength(a);
	cout << "Enter Roll Numbers" << endl;
	computer_programming.input();
}
void Task3(int &rollnum, enrollment &computer_programming)
{
	cout << "\nEnter the Roll Number you want to add : ";
	Input(rollnum);
	if (rollnum < 0)
	{
		cout << "Invalid Roll Number !" << endl;
		while (rollnum < 0)
		{
			Input(rollnum);
		}
	}
	cout << endl;
	computer_programming.insertinOrder(rollnum);
}
void Task4(enrollment obj)
{
	obj.print();
	cout << endl;
}
