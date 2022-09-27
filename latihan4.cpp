#include <iostream>
using namespace std;
struct mahasiswa{
	string nama;
	string jeniskelamin;
	float tb;
	float ipk;
};

void tukartb(float *x,float *y){
	float tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}
void tukaripk(float *x,float *y){
	float tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}
void tukarnama(string *x,string *y){
	string tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}
void tukarjeniskelamin(string *x,string *y){
	string tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}



int main (){
	int n;
	cin>>n;
	mahasiswa data[n];
	for (int i=0 ; i<n;i++){
		cout<<"Nama \t : ";
		cin>>data[i].nama;
		cout<<"Jenis Kelamin \t : ";
		cin>>data[i].jeniskelamin;
		cout<<"Tinggi Badan \t : ";
		cin>>data[i].tb;
		cout<<"IPK \t : ";
		cin>>data[i].ipk;
	}
	for (int i = 0 ;i<n;i++){
		for (int j = i ; j<n; j++){
			if (data[j].tb>=data[i].tb){
				tukartb(&data[j].tb,&data[i].tb);
				tukarnama(&data[j].nama,&data[i].nama);
				tukarjeniskelamin(&data[j].jeniskelamin,&data[i].jeniskelamin);
				tukaripk(&data[j].ipk,&data[i].ipk);
			}
		}
	}
	for (int i = 0 ;i <n ;i++){
		cout<<"Nama \t :" <<data[i].nama<<endl;
		cout<<"Jenis Kelamin \t : "<<data[i].jeniskelamin<<endl;
		cout<<"Tinggi Badan \t : "<<data[i].tb<<endl;
		cout<<"IPK \t : "<<data[i].ipk<<endl;

	}
}