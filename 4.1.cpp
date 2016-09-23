#include <iostream>
#include <cmath>
using namespace std;

int main() {
        int y;
        cin>>y;
        
        if(y>0 && y % 4==0 && y % 100!=0 || y>0 && y % 400==0 ){
        	cout<<"YES";
        } else {
        	cout<<"NO";
        }        
return 0;
}