#include <iostream>
using namespace std;

int main()
{
	int age;
	char name[10];
	
	cout << "Enter your name and age :- ";
	cin >> name >> age;
	cout << "Dear " << name << ", next year your age will be " << age+1;
	
	return 0;
}
