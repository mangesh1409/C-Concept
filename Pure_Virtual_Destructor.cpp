#include<iostream>
using namespace std;

class demo
{
	public:
			int i,j;
			demo()
			{
				cout<<"Inside base constructor"<<endl;
			}
			
			void fun()
			{
				cout<<"Inside base fun"<<endl;
			}
			virtual void gun()
			{
				cout<<"Inside base gun"<<endl;
			}	
			virtual ~demo()=0;
};

class hello:public demo
{
	public:
			int x,y;
			hello()
			{
				cout<<"Inside derived  constructor"<<endl;
			}
			void gun()
			{
				cout<<"Inside derived gun"<<endl;
			}
			
			~hello()
			{
				cout<<"Inside derived destructor"<<endl;
			}
};

int main()
{
	//demo dobj;			// we cannot create object of class that contain pure virtual destructor  error
	hello hobj;
	
}
