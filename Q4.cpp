#include<iostream>
#include<stdio.h>
using namespace std;

class Account{
	char name[30];
	int account_no;
	char account_type[10];
	float balance;
	
	public:
		
		void get_data(char n[],int ac,char t[],float b);
		void deposit(float ammount);
		void withdrawl(float ammount);
		void display();
};

void Account::get_data(char n[],int ac,char t[],float b){
	int i=0;
	for(i=0;i<30;i++){
		name[i]=n[i];
	}
	
	account_no=ac;
	
	for(i=0;i<10;i++){
		account_type[i]=t[i];
	}
	
	balance=b;
	
}

void Account::display(){
	cout<<"NAME: "<<name<<endl;
	cout<<"ACCOUNT NO: "<<account_no<<endl<<
	"ACCOUNT TYPE: "<<account_type<<endl<<"BALANCE: "<<balance<<endl;
}

void Account::deposit(float ammount){
	balance=balance+ammount;
	cout<<"\nDEPOSITING...\nNEW BALANCE: "<<balance<<endl;
}

void Account::withdrawl(float ammount){
	balance=balance-ammount;
	cout<<"\nWITHDRAWING...\nNEW BALANCE: "<<balance<<endl;
}

int main(){
	Account a1;
	a1.get_data((char *)"Kaustav Saha",12345,(char *)"Savings",1000);
	a1.display();
	
	
	a1.deposit(500);
	a1.withdrawl(1000);
	
	return 0;
}
