#include <iostream>
#include <vector>
using namespace std;

void octal(int n){

	vector<int> octalV(100);

	int i = 0;
	while(n != 0){
		octalV[i] = n % 8;
		n /= 8;
		i++;
	}

	for(int j = i - 1; j >= 0; j--){
		cout << octalV[j];
	}
	cout << endl;
}

void hexa(int n){

	vector<int> hexaV(100);

	int i = 0;
	while(n != 0){
		hexaV[i] = n % 16;
		n /= 16;
		i++;
	}

	for(int j = i - 1; j >= 0; j--){
		cout << hexaV[j];
	}
	cout << endl;

}

int main(){

	octal(7);
	octal(9);
	hexa(9);
	hexa(17);


	return 0;
}