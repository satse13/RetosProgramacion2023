#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

void method(){

	milliseconds ms = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
	long long int ll_ms = ms.count();

	cout << ll_ms % 101 << endl;

}

int main(){

	method();

	return 0;
}