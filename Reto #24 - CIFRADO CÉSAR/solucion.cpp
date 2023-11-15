#include <iostream>
#include <string>
using namespace std;

const string abc = "abcdrfghijklmnopqrstuvwxyz";

void cesar(int llave, string msj){

	string msj_cifrado;

 for (int i = 0; i < msj.size(); i++) {
		if (msj.at(i) > 'z' || msj.at(i) < 'a') {
			msj_cifrado += msj.at(i);
			continue;
		}
		msj_cifrado += (msj.at(i) + llave) > 'z' ? 'a' + ((msj.at(i) + llave) % ('z' + 1)) : (msj.at(i) + llave);
  }

	cout << msj_cifrado << endl;
}


int main(){

	cesar(3,"hola");

	return 0;
}