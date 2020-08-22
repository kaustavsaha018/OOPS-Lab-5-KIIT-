#include<iostream>
#include<math.h>
using namespace std;
class Triangle{
	float a,b,c;
	
	public:
		void get_data(float s1,float s2, float s3){
			a=s1;
			b=s2;
			c=s3;
		}
		void find_area(){
			float s=(a+b+c)/2; 
			float area = sqrt(s*(s-a)*(s-b)*(s-c));
			cout<<"The area of the Triangle is: "<<area<<endl;
		}
};

int main(){
	Triangle t;
	int a,b,c;
	cout<<"Enter the sides of triangle:"<<endl;
	cin>>a>>b>>c;
	t.get_data(a,b,c);
	t.find_area();
	
	return 0;
}
