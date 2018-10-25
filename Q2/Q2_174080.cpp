#include<iostream>
#include"q1.h"
using namespace std;
int main()
{
	enrollment computer_programming;
	int a;
	cout<<"Enter the number of students enrolled: ";
	cin>>a;
	computer_programming.setLength(a);
	cout<<"Enter Roll Numbers"<<endl;
	computer_programming.input();

	enrollment cp_lab=computer_programming;
	int rollnum;
	cout<<"Enter the Roll Number you want to add : ";
	cin>>rollnum;
	cout<<endl;
	computer_programming.insertinOrder(rollnum);
	cout<<"-----Computer Programming Object-----"<<endl;
	computer_programming.print();
	cout<<endl;
	cout<<"-----CP Lab Object-----"<<endl;
	cp_lab.print();
	cout<<endl;
	enrollment temp=computer_programming;
	computer_programming.testcopyconstructor(temp);
	cout<<"----Printing Roll Numkers After Adding 1-----"<<endl;
	computer_programming.print();
	system("pause");
	return 0;
}
