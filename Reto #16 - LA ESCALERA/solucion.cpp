#include <iostream>
using namespace std;

void escaleraPos(int num){
	int maxC = num * 2+1;

	for(int i = 0; i <= maxC+1;i++){
		if(i != maxC+1){
			cout << " ";
		}
		else 
			cout << "_" << endl;
		
	}
	maxC += 2;
	for(int i = 0; i < num;i++){
		maxC -= 2;
		for(int j = 0; j <= maxC;j++){
			if(j == maxC)
				cout << "|" << endl;
			else if(j == maxC-1)
				cout << "_";
			else 
				cout << " ";
		}
	}
}

void escaleraNeg(int num){
	int maxC = -1*num * 2+1;

	cout << "_" << endl;
	
	int esp = 1;

	for(int i = 0; i < -1*num;i++){
		for(int j = 0; j < esp;j++)
			cout << " ";
			cout << "|_" << endl;
			esp+=2;	
	}
}

//  _
// 	|_
// 	 |_
// 	 	 |_

// _
// 	|_
// 	  |_
// 	 	  |_ 
	 
	   
	 



void escalera(int num){

	if(num == 0) 
		cout << "__" << endl;
	else if(num > 0)
		escaleraPos(num);
	else 
		escaleraNeg(num);

}

int main(){

	escalera(-4);

	return 0;
}