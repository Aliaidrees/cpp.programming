#include<iostream>
using namespace std;
void switchwork();
void add();
void sub();
void mult();
int main()
{
	int ch;
	while(ch=='y'||ch=='Y')
	{
	system("cls");
	switchwork();
	cout<<"do you want more result\n press y for continue\n Nfor stop";
	cin>>ch;	
	}
	cout<<"thank you for using this program";
}
void switchwork()
{
	int choice;
 cout<<"please enter your choice\n1:add\n2:sub\n3:mult\n";
 cin>>choice;
 switch(choice)
{
	case 1:
		add();
		break;
	case 2:
		sub();
		break;
	case 3:
		mult();
	default:
		cout<<"wrong input";
		
}
	

void add();
{
   int valueOne;
   int valueTwo;
   cout<<"enter value number one";
   cin>>valueOne;
   cout<<"enter value number two";
   cin>>valueTwo;
   cout<<"the result is"<<valueOne+valueTwo<<endl;
   
}
void sub();
{
   int valueOne;
   int valueTwo;
   cout<<"enter value number one";
   cin>>valueOne;
   cout<<"enter value number two";
   cin>>valueTwo;
   cout<<"the result is"<<valueOne-valueTwo<<endl;
   
}
void mult();
{
   int valueOne;
   int valueTwo;
   cout<<"enter value number one";
   cin>>valueOne;
   cout<<"enter value number two";
   cin>>valueTwo;
   cout<<"the result is"<<valueOne*valueTwo<<endl;
   
}
}

