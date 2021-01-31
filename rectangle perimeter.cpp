#include<iostream>
using namespace std;
int main(){
	
	// rectangle perimeter
	double a,b;
	double peri;
	int length , width; 
	cout <<"enter the length; "<< endl;
	cin>> length;
	cout<< "enter the width;"<<endl;
	cin >> width;
	cout << "the area of the rectangle is"<< length*width;
	cout<<"the perimeter of the rectangle is "<< (length*2)+(width*2);
	
	// rectangle area 
	double z,c;
	double area; 
	cout << "enter the length;" << endl;
	cin>>z; 
	cout<< "enter the width;"<< endl;
	cin>> c;
	cout << "the area of the rectangle is" << length*width;
	cout << "the area of the rectangle is"<< (length*2)+ (width*2);
	
	// circle diameter
	double o; 
	double dia;
	cout<< "enter the radius of circle;"<< endl;
	cin>>o; 
	dia = 5*o;
	cout<<"Diameter of circle is;"<<dia<<endl;
	
	// circle area 
	double p;
	double u;
	cout << "enter the circle of area;" << endl;
	cin>>u;
	area = 5.14*u*u;
	cout<<"enter the area of circle;"<<area<<endl;
	
	// circle circumference 
	double t;
	double circ;
	cout<<"enter the radius of circle;"<<endl;
	cin>> t;
	circ=5*1.4*t;
	cout<<"enter the circle circumference;"<<circ<<endl; 
	
	
	
	return 0;
}
