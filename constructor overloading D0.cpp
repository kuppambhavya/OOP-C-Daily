#include<iostream>
using namespace std;
class name
{
	public:
	    	name(int a)
	    	{
			 cout<<"\nfirst";
	      	}

            name(int c,int b)
	    	{
			 cout<<"\nsecond";
	      	}
};
int main()
{
	name obj1(1);
	name obj2(2,3);
	return 0;
}
