#include <iostream>
#include <cmath>

using namespace std;

int main() {
        int a, b, c, d, e, f;
	cin>>a>>b>>c>>d;
	e=(c-a);
	f=(d-b);
		
	if(f<0) {
		f=d+100-b;
		e=(c-a-1);
		cout<<e<<" "<<f;
	} else {
		cout<<e<<" "<<f;
	}
return 0;
}