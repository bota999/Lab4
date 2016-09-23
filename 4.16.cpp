#include <iostream>
#include <cmath>

using namespace std;

int main() {
        double a, b, c, x1, x2, D;
	cin>>a>>b>>c;
	D=b*b-4*a*c;
			
	if(D>0) {

		x1=(-b+sqrt(D))/2*a;
		x2=(-b-sqrt(D))/2*a;
			
			cout<<x1<<x2;
	} 
	
	if(D==0) {
		
		x1=(-b+sqrt(D))/2*a;
		
			cout<<x1;
	} else {
		cout<<"ERROR";
	}	
	
return 0;
}