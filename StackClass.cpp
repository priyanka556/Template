#include<iostream>
using namespace std;
 

#include"StackClass.h"

main()
{
	int choice;
	stack<int>obj1;
        stack<char>obj2;
	stack<double>obj3;
	cout<<"1.Int 2.char 3.Double"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"Int stack creating"<<endl;
		       obj1.menu();
		       break;
		case 2:cout<<"char stack creating"<<endl;
		       obj2.menu();
		       break;
		case 3:cout<<"Double stack creating"<<endl;
		       obj3.menu();
		       break;
	}
}

