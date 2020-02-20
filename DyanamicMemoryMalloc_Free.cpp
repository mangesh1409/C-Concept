#include<iostream>
using namespace std;

class demo
{
	public:
			int i,j;
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
	demo *p=NULL;
	p=new demo();
	delete p;
	
	demo *q=NULL;
	q=(demo *)malloc(sizeof(demo));
	free(q);
	
	return 0;
}



