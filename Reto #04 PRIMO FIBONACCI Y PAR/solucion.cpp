#include<iostream>
#include<math.h>
using namespace std;

	void method(const long long int &number) {

		bool pair = false, fib = false, prime = true;

		if(number % 2 == 0)
			pair = true;
		
		int n1 = 1; 
		int n2 = 1;
		int result = 2;
		while(result < number){
			n1 = n2;
			n2 = result;
			result = n1 + n2;
		}

		if(number == result || number == 1)
			fib = true;
		
		int sq = sqrt(number);

		for(int i = 1; i < sq;i++){
			if(number % i == 0){
				prime = false;
				break;
			}
		}

		cout << "El numero";

		if(prime)
			cout << " es primo ";

		if(fib) 
		 	cout << " es fibonacci";
		
		if(pair)
			cout << " es par";

		if(!pair && !fib && ! prime)
			cout << " no es nada"; 

		cout << endl;

	}
int main(){

	method(3);
}