#include<iostream>
using namespace std;

// FUNCTION DEFINATION FOR ALL THE 3 TYPES OF CASES...

void CallByValue(int x)
{
	cout<<"CallByValue"<<endl;
	x++;
}

void CallByReference(int &x)
{
	cout<<"CallByreference"<<endl;
	x++;
}

void CallByAddress(int *x)
{
	cout<<"CallByAddress"<<endl;
	(*x)++;
}

int main()
{
	int a = 10;
	cout<<"\nValue of variable before function call "<<a<<endl;
	CallByValue(a);
	cout<<"Value of variable before function call "<<a<<endl;

	int b = 10;			
	cout<<"\nValue of variable before function call "<<b<<endl;
	CallByReference(b);
	cout<<"Value of variable before function call "<<b<<endl;

	int c = 10;
	cout<<"\nValue of variable before function call "<<c<<endl;
	CallByAddress(&c);
	cout<<"Value of variable before function call "<<c<<endl;

	return 0;
}
