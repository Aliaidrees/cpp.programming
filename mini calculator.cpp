include<iostream>
using namespace std;
int main()
{
	int i=4;
	while(i==4)
	{
		int valueOne;
        int valueTwo;
        cout<<"enter the valueOne"<<endl;
        cin>>valueOne;
        cout<<"enter a valueTwo";
        cin>>valueTwo;
        cout<<"the result is"<<valueOne+valueTwo<<endl;	
        cout<<"do you want to continue calculation?"<<endl;
         cout<<"press 4 to continue others for exit";
         cin>>i;
	}
	cout<<"thank you for using this program";
}
