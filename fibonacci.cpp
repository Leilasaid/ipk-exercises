#include <iostream>
using namespace std;
int fibonacci(int n){
	double a =0;
	double b =1;
	int i;
	for( i = 2; i <= n; i++){
		b = a+b;
		a = b-a;
		
	}
	cout << "f_" << n << " = " << b << endl;
	return b;
}
int main() {
	int n;
	cout << "wie lang soll die folge sein?" << endl;
	cin >> n;
	if ( n==0){
		cout << "f_" << n << " = 0" << endl;
	}
	else if ( n==1){
		cout << "f_" << n << " = 1" <<  endl;
	}
	else {
		fibonacci(n);
	}

    return 0;
}
