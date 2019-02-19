#include <iostream>
#include"queuelinklist.h"
using namespace std;


int main()
{
	Queue <int> q;
	int elem, choice;
	
	do
	{
		
	system("cls");
	cout<<"1. Push"<<endl;
	cout<<"2. Size"<<endl;
	cout<<"3. Front"<<endl;
	cout<<"4. Pop"<<endl;
	cout<<"5. Check Empty"<<endl;
	
	cin>>choice;
	
	switch(choice)
	{
		case 1:  	cin>>elem;
					q.push(elem);
				 	break;
		
		case 2: 	cout<<q.Size();
					break;
					
		case 3: 	cout<<q.front();
					break;
					
		case 4:		q.pop();
					break;
		
		case 5:		bool ans = q.isEmpty();
					cout<< (ans == true ? "true" : "false");
					break ;
					
	}
	
	cout<<"Again?";
	cin>>choice;
	
	}while(choice!=0);
	
}
