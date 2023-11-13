#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

bool heterograma(const string &str){

	unordered_set<char> set;
	for(char c: str){
		if(set.count(c))
			return false;
		set.insert(c);
	}

	return true;

}

bool isograma(const string &str){
	unordered_map<char,int> map;
	int max = 0;
	int min = str.length();
	for(char c: str){
		!map.count(c) ? map[c] = 1 : map[c]++;
	}

	for(auto it = map.begin(); it != map.end(); ++it){
		if(it->second > max)
			max = it->second;
		if(it->second < min)
			min = it->second;
	}

	if(max != min) 
		return false;

	return true;
}

bool pangrama(const string &str){

	string letras = "qwertyuiopasdfghjklñzxcvbnm";
	unordered_set<char> set;

	for(char c: str){
			if(!set.count(c))
				set.insert(c);
	}

	if(set.size() == letras.length())
		return true;
	return false;

}

int main(){

	string str = "qwertyuiopasdfghjklñzxcvbnm";
	cout << "Heterograma: ";
	if(heterograma(str))
		cout << "SI" << endl;
	else 
		cout << "NO" << endl;

	cout << "Isograma: ";
	if(isograma(str))
		cout << "SI" << endl;
	else 
		cout << "NO" << endl;

	cout << "Pangrama: ";
	if(pangrama(str))
		cout << "SI" << endl;
	else 
		cout << "NO" << endl;
	

	return 0;
}