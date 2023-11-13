#include<iostream>
#include<random>
using namespace std;

int main(){

	std::random_device rd;  // a seed source for the random number engine
  std::mt19937 gen(rd()); // mersenne_twister_engine seeded with rd()

	int l = 0;
	do {
		cout << "Introduce la longitud (entre 8 y 16): ";
		cin >> l;
		if(l < 8 || l > 16)
			cout << "Introduce una longitud valida" << endl;
	} while(l < 8 || l > 16);

	string caracteres = "abcdefghijklmnopqrstuvwxyz";

	string intro;
	do {
		cout << "Quieres mayusculas (Y/N): ";
		cin >> intro;
		if(intro != "Y" && intro != "N")
			cout << "Introduce una opcion valida" << endl;
	} while(intro != "Y" && intro != "N");

	if(intro == "Y") caracteres += "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;

	do {
		cout << "Quieres numeros (Y/N): ";
		cin >> intro;
		if(intro != "Y" && intro != "N")
			cout << "Introduce una opcion valida" << endl;
	} while(intro != "Y" && intro != "N");

	if(intro == "Y")  caracteres += "0123456789";

	do {
		cout << "Quieres sim (Y/N): ";
		cin >> intro;
		if(intro != "Y" && intro != "N")
			cout << "Introduce una opcion valida" << endl;
	} while(intro != "Y" && intro != "N");

	if(intro == "Y") caracteres += "!\"#$%&'()*+,-./";

	uniform_int_distribution<int> dis(0,caracteres.length()-1);
	string cont = "";
	for(int i = 0; i < l; i++){
	 	cont += caracteres[dis(gen)];	
	}

	cout << endl << "password: " << cont << endl;

	return 0;
}