#include <iostream>
#include <cmath>

using namespace std;

int main() {
        int n,m,k;
	cin>>n>>m>>k;

	if(k!=n*m && k<30000){
	} 
	if (n*m % (k-1)==0) {
        	cout<<"YES"<<endl;
        } else {
                cout<<"NO"<<endl;
        }

return 0;
}