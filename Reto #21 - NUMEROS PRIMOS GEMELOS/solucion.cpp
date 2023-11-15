#include <iostream>
#include <math.h>


using namespace std;

bool esPrimo(int num){

	int sq = sqrt(num);

	for(int i = 2; i <= sq;i++){
		if(num%i == 0)
			return false;
	}

	return true;
}

void primos(int num){


	int ult = 3;
	for(int i = 4; i < num;i++){
		if(esPrimo(i)){
			if(i - ult == 2){
				cout << " (" << ult << "," << i << ")";
			}
			ult = i;
		}
	}

}

int main(){

	primos(14);


	return 0;
}