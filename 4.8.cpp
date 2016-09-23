#include <iostream>
#include <cmath>

using namespace std;

int main() {
        double a,b,x;
	cin>>a>>b;
	
	if(a==0) {
		cout<<"NO";
	} 
	if(a!=0) {
		cout<<-b/a; 
	} 
	if(a==0 && b==0) {
		cout<<"INF";
	}

return 0;
}