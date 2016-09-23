#include <iostream>
#include <cmath>
using namespace std;

int main() {
        double a,b,c,d,x;
	cin>>a>>b>>c>>d;
		                         
	if(a!=0 && c!=0){
		cout<<-b/a;
	}
	
	if(a!=0 && b!=0 && c==0 && d==0){
		cout<<"NO";
	}
	if(a==0 && b==0 && c==0 && d==0) {
		cout<<"INF";
	} 

return 0; 
}