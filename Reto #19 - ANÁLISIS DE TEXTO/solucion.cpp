#include <iostream>
using namespace std;

void oracion(string ora){

	int maxL = 0;
	int numO = 0;
	int numP = 0;
	int med = 0;

	int i = 0;
	int desc = 0;
	int lp = 0;
	bool palabra = true;

	while(i < ora.size()){

		if(ora[i] == '.' || ora[i] == ' '){
			if(palabra) {
				numP++;
				if(lp > maxL)
					maxL = lp;
			}
			if(ora[i] == '.') numO++;
			palabra = false;
			lp = 0;
		}
		else{
			palabra = true;
			med++;
			lp++;
		}

		i++;
	}


	cout << "Longitud maxima: " << maxL << endl;
	cout << "Numero Palabras: " << numP << endl;
	cout << "Numero Oraciones " << numO << endl;
	cout << "Longitud Media: " << med / numP << endl;

}

int main(){

	oracion("Hola me llamo Alejandro. Tengo pocos problemas.");

	return 0;
}