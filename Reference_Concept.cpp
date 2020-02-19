#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int &r=a;	// 	Creating multiple references to single variable 'x'
	int &r2=a;	// 	Creating multiple references to single variable 'x'
	cout<<"\nValue of a is :"<<a<<"\nValue of r is :"<<r<<"\nValue of r2 is :"<<r2<<endl;
	cout<<"Address of a "<< &a<<endl<<"Address of r "<< &r<<endl<<"Address of r2 "<< &r2<<endl;	// All this reference variables will get same address LOCATION...
	
	float a1=18.45;
	float &r1=a1;
	float &r3=a1;
	cout<<"\nValue of a1 is :"<<a1<<"\nValue of r1 is :"<<r1<<"\nValue of r3 is :"<<r3<<endl;
	cout<<"Address of a1 "<< &a1<<endl<<"Address of r1 "<< &r1<<endl<<"Address of r3 "<< &r3<<endl;	// All this reference variables will get same address LOCATION...
		
	int &r4=r2;	// Creating reference to reference to reference.
	int &r5=r;	// Creating reference to reference to reference.
	float &r6=r1;	// Creating reference to reference to reference.
	float &r7=r3;	// Creating reference to reference to reference.
	cout<<"\nValue of r4 is :"<<r4<<"\nValue of r5 is:"<<r5<<endl;
	cout<<"\nValue of r6 is :"<<r6<<"\nValue of r7 is:"<<r7<<endl;
	
	int *p=&r;	// creating pointer to reference
	cout<<"\nValue of p is :"<<p<<endl;
	int *q=&a;
	int *(&q1)=q;	// Creating reference to pointer
	cout<<"\nValue of q1 is :"<<q1<<endl;
	
	float *p2=&a1;	// creating pointer to reference
	cout<<"\nValue of p2 is :"<<p2<<endl;
	float *q2=&a1;
	float *(&q3)=q2;		// Creating reference to pointer
	cout<<"\nValue of q3 is :"<<q3<<endl;


	//	Creating reference to an array is allowed
	int arr[] = {10,20,30,40};

	int (&refarr)[4] = arr;

	// int (&refarr)[ ] = arr; is not allowed , we have to provide the size for the array...*/

	return 0;
}
