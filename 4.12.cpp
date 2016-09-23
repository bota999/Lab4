#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int k,m,n,M;
	cin>>k>>m>>n;

	if(n % k==0){
		M=2*m*n/k;
		cout<<M;
	}
	if(n % k!=0){
		M=2*m*n/k + 2*m;
		cout<<M;
	}
return 0;
}








