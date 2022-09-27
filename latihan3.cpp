#include <iostream>
using namespace std;
void jumlahan(int *x , int y){
	*x =(1-y);
}
int main (){
	int y;
	int x;
	cout<<"Masukkan Nilai Y \t \t : ";
	cin>>y;
	jumlahan(&x,y);
	cout<<"Nilai Hasil Penjumlahan \t : "<<x;
}