#include <cmath>
#include <iostream>
using namespace std;


void print(char symbol, int length)
{
	for (; length > 0; length--){
		cout << symbol;
	}

}

void patern(char a, int b){
	for(int i=1; i<=b; i++){
		print(a, i);//1st triangle
		print(' ', b-i);//1
		cout << ' ';
		print(a,b-i+1);//2
		print(' ',i-1);//2
		cout << ' ';
		print(' ', i-1);//3
		print(a, b-i+1);//3
		cout << ' ';
		print(' ', b-i);//4
		print(a, i);//4
		cout << ' ';
		endl(cout);
	}
	cout << a;//1st
	print(' ', b-1);//1st
	cout<< ' ';
	print(a, b);//2nd triangle
	cout<< ' ';
	print(a, b);//3rd triangle
	cout << ' ';
	print(' ',b-1);//4th triagle
	cout<< a;//4th triangle
	endl(cout);//end of first line
	for(int j=0; j<=b-3; j++){
		cout << a;//1st triangle
		print(' ',j);//1st triangle
		cout<< a;//1st triangle
		print(' ',b-2-j);//1st triangle
		cout << ' ';
		cout<<a;
		print(' ',b-3-j);
		cout<<a;
		print(' ',j+1);
		cout<<' ';
		print(' ',j+1);
		cout<<a;
		print(' ',b-3-j);
		cout<<a;
		cout<<' ';
		print(' ',b-j-2);
		cout<< a;
		print(' ',j);
		cout<<a;
		endl(cout);

	}
	print(a,b);
	cout<<' ';
	cout<< a;
	print(' ',b-1);
	cout<< ' ';
	print(' ',b-1);
	cout<< a;
	cout<<' ';
	print(a,b);
}


int main(){
	char ap;
	int length;
	cin >>ap;
	cin >>length;
	patern(ap, length);
	return 0;
} 