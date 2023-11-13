#include <iostream>
#include <unordered_map>
using namespace std;



void textTransform(string input){
	unordered_map<char,string> dictionary = {
		{'a',"4"},
		{'b',"I3"},
		{'c',"["},
		{'d',")"},
		{'e',"3"},
		{'f',"|="},
		{'g',"&"},
		{'h',"#"},
		{'i',"1"},
		{'j',",_|"},
		{'k',">|"},
		{'l',"1"},
		{'m',"/\\/\\"},
		{'n',"^/"},
		{'o',"0"},
		{'p',"|*"},
		{'q',"(_,)"},
		{'r',"I2"},
		{'s',"5"},
		{'t',"7"},
		{'u',"(_)"},
		{'v',""},
		{'w',""},
		{'x',"><"},
		{'y',"j"},
		{'z',"2"},
	};

	for(char c: input){
		cout << dictionary[c];
	}
	cout << endl;
}



int main(){

	textTransform("adiospadre");

	return 0;
}