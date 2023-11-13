#include<iostream>
#include<unordered_map>
#include <vector>
using namespace std;

void tennisGame(const vector<string> game){
	unordered_map<int,string> map = {
		{0,"Love"},
		{1,"15"},
		{2,"30"},
		{3,"40"},
	};

	int point1 = 0, point2 = 0;

	for(int i = 0; i < game.size();i++){
		if(game[i] == "P1"){
			if(point2 == 4)
				point2--;
			else
				point1++;
		}
		else{ 
			if(point1 == 4)
				point1--;
			else
				point2++;
		}
		if(point1 == point2 && point1 == 3)
			cout << "Deuce" << endl;
		else if(point1 == 4)
			cout << "Ventaja P1" << endl;
		else if(point2 == 4)
			cout << "Ventaja P2" << endl;
		else if(point1 == 5)
			cout << "Ha ganado el P1" << endl;
		else if(point2 == 5)
			cout << "Ha ganado el P2" << endl;
		else 
			cout << map[point1] << " - " << map[point2] << endl;	
	}
}


int main(){

	vector<string> game = {{"P1","P1", "P2", "P2", "P1", "P2", "P1", "P1"}};

	tennisGame(game);

	return 0;
}