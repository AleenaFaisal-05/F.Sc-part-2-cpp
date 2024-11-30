#include<iostream>
using namespace std;
int main() {
	double a,b,c;
	cout<<"enter the vales of a,b and c :"<<endl;
	cin>>a>>b>>c;
	double discriminant = b*b - 4 *a *c;
	if (discriminant>0)
	{
	
	cout<<"roots are real and different"<<endl;
}
 else if (discriminant = 0)
{
	cout<<"roots are real and equal"<<endl;

}
else if (discriminant < 0)
 {
	cout<<"roots are imaginary"<<endl;
	
 } 
return 0;
}
