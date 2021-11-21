#include <iostream>
using namespace std;
void hanoi(int, char,char,char);
int mov=0;
void hanoi(int num, char a,char c,char b){
	if(num==1){
		cout<<"Mover del bloque "<<num<<" Desde "<<a<<" Hasta "<< c<< endl;
		cout<<"movimiento: "<<mov++<<endl;
	}
	else{
		hanoi(num-1,a,b,c);
		cout<<"Mover del bloque "<<num<<" Desde "<<a<<" Hasta "<< c<< endl;
		cout<<"movimiento: "<<mov++<<endl;
		hanoi(num-1,b,c,a);
	}
}

int main(int argc, char** argv) {
	int num;
	cout<<"\nDiscos A, B, C\n";
	cout<<"\nIngrese el numero de discos ";
	cin>>num;
	hanoi(num,'A','B','C');
	cout<<"numero de movimientos:  "<<mov<<endl;
	return 0;
}
