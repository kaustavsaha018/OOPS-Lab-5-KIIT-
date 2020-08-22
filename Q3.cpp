#include<iostream>
#include<math.h>
using namespace std;
class Triangle{
	float a,b,c;
	float find_perimeter(){
		return a+b+c;
	}
	public:
		void get_data(float s1,float s2, float s3){
			a=s1;
			b=s2;
			c=s3;
		}
		void find_area(){
			float s=find_perimeter()/2; 
			float area = sqrt(s*(s-a)*(s-b)*(s-c));
			cout<<"The area of the Triangle is: " <<area<<endl;
		}
};

int main(){
	Triangle t[3];
	int i,a,b,c;
	for(i=0;i<3;i++){
		cout<<"Enter the sides of triangle "<<i+1<<":"<<endl;
		cin>>a>>b>>c;
		t[i].get_data(a,b,c);
		t[i].find_area();
		cout<<endl;
	}
	
	return 0;
}
