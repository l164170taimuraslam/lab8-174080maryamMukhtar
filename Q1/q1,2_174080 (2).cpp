#include<iostream>
#include"q1.h"
using namespace std;
enrollment::enrollment(int size)
{
	maxSize=size;
	rollnumbers=new int [maxSize];
	length=0;
}
enrollment::enrollment(const enrollment& obj)
{
	this-> maxSize=obj.maxSize;
	this->  length=obj.length;
	this-> rollnumbers=new int[maxSize];
	for(int i=0;i<this->length;i++)
	{
		this->rollnumbers[i]=obj.rollnumbers[i];
	}
}
void enrollment::setLength(int a)
{
	length=a;
}
void enrollment::input()
{
	cin>>rollnumbers[0];
	for(int i=1;i<length;i++)
	{
		cin>>rollnumbers[i];
		for(int j=0;j<i;j++)
		{
			if(rollnumbers[i]==rollnumbers[j])
			{
				while(rollnumbers[i]==rollnumbers[j])
				{
					cout<<"Roll Number is already present"<<endl;
					cout<<"Enter Roll Number Again: ";
					cin>>rollnumbers[i];
				}			
			}
		}
	}
}
void enrollment::print()const
{
	for(int i=0;i<length;i++)
	{
		cout<<rollnumbers[i]<<" ";
	}
}
void enrollment::generateAttendanceSheet()
{
	int temp;
	for(int i=0;i<length-1;i++)
	{
		if(rollnumbers[i]>rollnumbers[i+1])
		{
			temp=rollnumbers[i];
			rollnumbers[i]=rollnumbers[i+1];
			rollnumbers[i+1]=temp;
		}
	}
}
void enrollment::insertinOrder(int rollnumber)
{
	if(length==maxSize)
	{
		cout<<"\tYou don't have any space"<<endl;
	}
	else if(Exist(rollnumber)==true)
	{
		cout<<"\tRoll Number is Already Present"<<endl;
	}
	else
	{
		rollnumbers[length]=rollnumber;
		length=length+1;
		generateAttendanceSheet();
	}
}
bool enrollment:: Exist(int rollnumber)
{
	for(int i=0;i<length;i++)
	{
		if(rollnumbers[i]==rollnumber)
		{
			return true;
		}
	}
	return false;
}
void enrollment:: testcopyconstructor(enrollment obj)
{
	for(int i=0;i<length;i++)
	{
		this->rollnumbers[i]=obj.rollnumbers[i]+1;
	}
}
enrollment::~enrollment()
{
	delete[]rollnumbers;
}