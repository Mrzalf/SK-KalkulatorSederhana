#include <iostream>
using namespace std;

int tambah (int x,int y){
	int hasil;
	hasil=x+y;
	return hasil;
}
int kurang (int x,int y){
	int hasil;
	hasil=x-y;
	return hasil;
}
int kali (int x,int y){
	int hasil;
	hasil=x*y;
	return hasil;
}
float bagi (float x,float y){
	float hasil;
	hasil=x/y;
	return hasil;
}
int mod (int x,int y){
	int hasil;
	hasil=x%y;
	return hasil;
}
int pangkat (int x, int y){
	int hasil;
	hasil=pow(x,y);
	return hasil;
}
int akar (int x){
	int hasil;
	hasil=sqrt(x); 
}
int main (){
	int x,y,pilih;
	float a,b;
	cout<<" PROGRAM KALKULATOR "<<endl;
	cout<<" Menu Operasi : ";
	cout<<" \n1. Penambahan ";
	cout<<" \n2. Pengurangan ";
	cout<<" \n3. Perkalian ";
	cout<<" \n4. Pembagian ";
	cout<<" \n5. modulus ";
	cout<<" \n6. Perpangkatan ";
	cout<<" \n7. Akar Pangkat ";
	cout<<"\nPilih Menu No : "; cin>>pilih;
	if (pilih == 1){
		cout<<"Masukkan Bilangan Pertama : ";cin>> x;
		cout<<"Masukkan Bilangan Kedua : ";cin>> y;
		cout<<"Hasil Dari "<<x<<" + "<<y<<" = "<<tambah(x,y);
	}
	else if (pilih == 2){
		cout<<"Masukkan Bilangan Pertama : ";cin>> x;
		cout<<"Masukkan Bilangan Kedua : ";cin>> y;
		cout<<"Hasil Dari "<<x<<" - "<<y<<" = "<<kurang(x,y);
	}
	else if (pilih == 3){
		cout<<"Masukkan Bilangan Pertama : ";cin>> x;
		cout<<"Masukkan Bilangan Kedua : ";cin>> y;
		cout<<"Hasil Dari "<<x<<" x "<<y<<" = "<<kali(x,y);
	}
	else if (pilih == 4){
		cout<<"Masukkan Bilangan Pertama : ";cin>> x;
		cout<<"Masukkan Bilangan Kedua : ";cin>> y;
		cout<<"Hasil Dari "<<a<<" / "<<b<<" = "<<bagi(x,y);
	}
	else if (pilih == 5){
		cout<<"Masukkan Bilangan Pertama : ";cin>> x;
		cout<<"Masukkan Bilangan Kedua : ";cin>> y;
		cout<<"Hasil Dari "<<x<<" % "<<y<<" = "<<mod(x,y);
	}
	else if (pilih == 6){
		cout<<"Masukkan Bilangan Pertama : ";cin>> x;
		cout<<"Masukkan Bilangan Kedua : ";cin>> y;
		cout<<"Hasil Dari "<<x<<" pangkat "<<y<<" = "<<pangkat(x,y);
	}
	else if (pilih == 7){
		cout<<"Masukkan Bilangan : ";cin>> x;
		cout<<"Hasil dari Akar "<<x<<" = " << akar(x);
	}
	else {
		cout<<"Pilihan Tidak Tersedia";
	}
	return 0;
}
