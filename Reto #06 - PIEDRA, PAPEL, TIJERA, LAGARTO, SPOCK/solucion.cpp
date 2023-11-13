#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

void method(const vector<tuple<string,string>> &tupList){
	
	int p1 = 0;
	int p2 = 0;
	for(tuple t: tupList){
		if(get<0>(t) == "🗿" && ((get<1>(t) == "✂️") || (get<1>(t) == "🦎"))){
			p1++;
			continue;
		}
		else if(get<0>(t) == "✂️" && ((get<1>(t) == "🦎") || (get<1>(t) == "📄"))){
			p1++;
			continue;
		}
		else if(get<0>(t) == "📄" && ((get<1>(t) == "🗿") || (get<1>(t) == "🖖"))){
			p1++;
			continue;
		}
		else if(get<0>(t) == "🦎" && ((get<1>(t) == "📄") || (get<1>(t) == "🖖"))){
			p1++;
			continue;
		}
		else if(get<0>(t) == "🖖" && ((get<1>(t) == "✂️") || (get<1>(t) == "🗿"))){
			p1++;
			continue;
		}
		else {
			p2++;
			continue;
		}
	}
	
	if(p1 > p2)
		cout << "P1 wins" << endl;
	else if(p2 > p1)
		cout << "P2 wins" << endl;
	else 
		cout << "TIE" << endl;
}

int main(){

	vector<tuple<string,string>> v = {make_tuple("🗿","✂️"), make_tuple("✂️","🗿"), make_tuple("📄","✂️")};

	method(v);

	return 0;
}