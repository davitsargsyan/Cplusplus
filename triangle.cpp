#include <cmath>
#include <iostream>
using namespace std;


void print(char symbol, int length)
{
for (; length > 0; length--){
cout << symbol;
}
//endl(cout); el petq chi arden nerqev@ grelem paterni mej
}

void patern(char a, int b){
	for(int i=1; i<=b; i++){
		print(' ', b-i);
		print(a, i);
		endl(cout);
	}
}


int main(){
	char ap;
	int length;
	cin >>ap;
	cin >>length;
	patern(ap, length);
	return 0;
} 