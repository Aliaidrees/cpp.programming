#include<iostream>
using namespace std;
int main()
{
	char i=89;
	while(i==89)
	{
	int number;
	cout<<"please enter your choice\n 1 is for fah to cel\n 2 is cel to fah\n";
	cin>>number;
	if(number==1)
	{
		int fah;
		cout<<"enter a temperature in fah";
		cin>>fah;
		int cel=(fah-32)*5/9;
		cout<<"equivalent temperature in celcius is"<<cel<<endl;
		
	}
	else if(number==2)
	{
		int cel;
		cout<<"enter a temperature in cel";
		cin>>cel;
		int fah=cel*(5/9)+32;
		cout<<"equivalent temperature in fah is"<<fah<<endl;
		
	}
	else
	{
		cout<<"invalid choice";
	}
}
