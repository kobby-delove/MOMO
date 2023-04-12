#include <iostream>

using namespace std;
int main(){
	const int defaultpin=0000;
	int attempts=0;
	int select;
	float reference;
	char option;
	char Y;
	char N;
	int number;
	float amount;
	int pin;
	int c_pin;
	int new_pin;
	float balance,counter;
	string digits;
	balance=1000;
	cout<<"Main Menu"<<endl;
	cout<<"Reset/Change Pin"<<endl;
	cout<<"Send"<<endl;
	cin>>select;
	if(select==1)
	{
	do{
	cout<<"Please enter your 4-digits Pin:"<<endl;
	cin>>pin;
	attempts++;
	if(pin!=defaultpin){
	cout<<"Incorrect Pin.Please try again"<<endl;
	}
	else if(pin==defaultpin){
	cout<<"Your balance is 1000";
	}
	}while(pin!=defaultpin&&attempts<3);
	if(attempts>3){
	cout<<"Maximum attempts reached.";
	cout<<"Exiting Program"<<endl;
	}
	switch(pin){
	break;	
	}
	}
	else if(select==2)
	{
	cout<<"Are Sure You Want To Change Your Pin"<<endl;
	cout<<"Choose Y/N"<<endl;
	cin>>option;
	if(option==Y){
	cout<<"Enter New Pin"<<endl;
	cin>>new_pin;
	pin==new_pin;
	cout<<"Your New Pin is"<<new_pin;
	}
	}
	else if(select==3)
	{
	cout<<"Enter Mobile Number"<<endl;
	cin>>number;
	cout<<"Enter Amount To Transfer"<<endl;
	cin>>amount;
	cout<<"Transfer"<<amount<<"to"<<number<<endl;
	cin>>reference;
	cout<<"Please enter your pin."<<endl;
	cin>>pin;
	do{
	attempts++;
	if(pin!=defaultpin){
	cout<<"Incorrect Pin.Please try again"<<endl;
	}
	else if(pin==defaultpin){
	cout<<"You have successfully sent"<<amount<<"to"<<number<<endl;
	cout<<"Your current balance is"<<balance-amount<<endl;
	}
	}while(pin!=defaultpin&&attempts>3);
	if(attempts>3){
	cout<<"Maximum attempts reached.";
	cout<<"Exiting Program"<<endl;
	}
	switch(pin){
	break;
	}
	}
	
	
	
	
	

	return 0;
}
