#include<iostream>
using namespace std;

class demo
{
	public:
			//int i,j;
			demo()
			{
				cout<<"Inside constructor"<<endl;
			}
			~demo()
			{
				cout<<"Inside destructor"<<endl;
			}
};

int main()
{
	demo dobj;
	cout<<"Default size of class or object is "<<sizeof(dobj)<<" without any characteristics"<<endl;
	
	return 0;
}



