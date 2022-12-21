#include<iostream>
using namespace std;

int main(){
	int num;
	char again='y';
	while(again == 'y' || again == 'Y')
	{
		cout<<"Enter a number between 1 to 10: ";
		cin>>num;
		if(num<=10){
			cout<<"Program worked successfully. :)";
			return 0;
		}
		else if(num>10){
			cout<<"Invalid choice"<<endl;
		cout<<"Try again y/n: ";
		cin>>again;
		}
		// 
	}
	return 0;
}
