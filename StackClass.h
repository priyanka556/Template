template<class any>
class stack
{
	any arr[5];
	int top;
	public:stack()
	       {
		       top=-1;
	       }
	       void push(any data)
	       {
		       if(top==4)
			       cout<<"stack is full"<<endl;
		       else
			       arr[++top]=data;
	       }
	       any pop()
	       {
		       return arr[top--];
	       }
	       void menu()
	       {
		       any data;
		       int choice;
		       while(1)
		       {
		       cout<<"1.Push 2.Pop 3.Retrun"<<endl;
		       cout<<"Enter your choice"<<endl;
		       cin>>choice;
		       switch(choice)
		       {
		       case 1: cout<<"Enter data to push"<<endl;
			       cin>>data;
			       push(data);
			       break;
		       case 2:if(top==-1)
				      cout<<"stack is empty:"<<endl;
			      else
				      cout<<pop()<<endl;
			      break;
		       case 3:return;
		       }
		       }
	       }

};



