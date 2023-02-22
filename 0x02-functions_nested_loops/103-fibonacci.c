#include <iostream>
using namespace std;

int main(){
	int sum, a, b, h, num;
	a = 1;
	b = 1;
	num = 0;
    cout << "Number of terms: ";
    cin >> num;
    
    while(b < num){
    	if (b%2 == 0){
    		sum = sum + b;
		}
    	h = a + b;
    	a = b;
    	b = h;
	}
	cout << "\r\n"<< sum;
}
