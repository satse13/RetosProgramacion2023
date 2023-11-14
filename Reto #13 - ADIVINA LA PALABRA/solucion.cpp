#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>

using namespace std;

vector<string> palabras;

void abrirArchivo(){
	ifstream file;
	file.open("palabras.txt");
	string palabra;
	while (file >> palabra) {
		if (palabra.length() > 4) {
			palabras.push_back(palabra);
		}
	}
	
	srand((unsigned) time(NULL));
	int r = rand();
	auto rng = std::default_random_engine { r };
	std::shuffle(palabras.begin(), palabras.end(), rng);
	file.close();
}


void juego(){

	int fallos = 3;
	int nivel = 1;

	while(fallos > 0 && nivel <= palabras.size()){

		string word = palabras[nivel-1];
		int maxOcultas = word.length() * 0.6;

		int r = rand() % (maxOcultas - 1) + 2; // mínimo de 2

		vector<int> letrasOcultas;

		for(int i = 0; i < r;i++){
			letrasOcultas.push_back(rand() % word.length());
		}

		string oculta = word;

		for(int letra: letrasOcultas){
			oculta[letra] = '_';
		}

		while(oculta != word && fallos > 0){
			cout << "Palabra: " << oculta << "  Nivel: " << nivel << endl;
			cout << "Intentos: " << fallos << endl;
			cout << "Introduce una letra o la palabra: ";
			string opcion;
			cin >> opcion;
			bool acierto = false;
			if(opcion.length() == 1){
				for(int i = 0; i < word.length();i++){
					if(word[i] == opcion[0] && oculta[i] == '_'){
						oculta[i] = opcion[0];
						acierto = true;
					}
				}
			}
			else if(word == opcion){
				acierto = true;
				oculta = word;
			}
		
			if(!acierto)
				fallos--;
		}

		if(fallos > 0){
			cout << "Correcto!! la palabra era " << word << endl;
			system("pause");
		}
		nivel++;

	}

	cout << "Hasta pronto!!" << endl;

}

int main(){

	abrirArchivo();
	juego();

	
	return 0;
}