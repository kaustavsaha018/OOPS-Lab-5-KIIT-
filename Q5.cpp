#include<iostream>
using namespace std;

class Rational{
	int num, den;
	
	public:
		void assign(int n1,int n2);
		void display();
		float convert();
		void invert();
};

void Rational::assign(int n1, int n2){
	if(n1>=0,n2>0){
		num=n1;
		den=n2;
	}
	else{
		cout<<"Wrong Input!"<<endl;
		exit(1);
	}
}

void Rational::display(){
	cout<<"Diplaying...  "<<num<<"/"<<den<<endl;
}

float Rational::convert(){

	return (float)num/den;
}

void Rational::invert(){
	if(num>0){
		cout<<"Inverting...  "<<den<<"/"<<num<<endl;
	}
	else{
		cout<<"Wrong Operation! The value will be infinite."<<endl;
		exit(1);
	}
	
}

int main(){
	Rational r1;
	int n,d;
	cout<<"Enter the value of the numerator: ";
	cin>>n;
	cout<<"Enter the value of the denomenator: ";
	cin>>d;
	r1.assign(n,d);
	r1.display();
	cout<<"Converting...  "<<r1.convert()<<endl;
	r1.invert();
	
	return 0;
}
