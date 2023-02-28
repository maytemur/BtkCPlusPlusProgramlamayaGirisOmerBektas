// 10Diziler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iterator> //for sts::size
#include<locale.h>  //dil kodlar� bu k�t�phanenin i�inde

void test(int fonksiyonDizi[4]); //forward decleration
void cdizitest(char cdizi[]);//forward decleration


int main() {
	int puanlar[3]{ 10,20,30 };
	setlocale(LC_ALL, "Turkish");
	printf("T�RK�E\n");

	std::cout << puanlar << "\n"; //dizinin ilk eleman�n�n bellek adresini verir
	std::cout << *puanlar << "\n"; //pointer i�areti ile bellek adresi kime ait onu g�sterir

	int* ptr = puanlar + 3;      //hi� hata vermez eksi de�eri d�nd�r�r ama dizi t���na ta�t�k bu hatay� yakalamak zordur!
	std::cout << *ptr << "\n";

	//dizi for d�ng�s�
	printf("Dizi for d�ng�s�\n");
	for (int i = 0; i < 3; i++) {

		std::cout << puanlar[i] << std::endl;
	}

	//i�e i�e diziler
	printf("i� i�e diziler\n");

	int dizi[3][2]{
		{
			1,2
		},
		{
			5,8
		},
		{
			10,3
		}
	};
	std::cout << dizi[1][0]<<"\n"; //1nci dizinin [5,8], ilk eleman�n� yani 5i verir
	printf("1nci dizinin [5,8], ilk eleman� yani 5 %d", dizi[1][0]); //1nci dizinin [5,8], ilk eleman�n� yani 5i verir
	printf("\n");
	printf("i�e i�e d�ng�ler\n");
	for (int i = 0; i < 3; i++) {
		for (int i2 = 0; i2 < 2; i2++) {
			std::cout << dizi[i][i2] << "\n"; //i�e i�e diziler programlama d�nyas�nda �ok s�k kullan�l�r ve �ok i�e yarar dedi!
		}
	}

	//std bir k�t�phanedir ve i�inde size() diye bir fonksiyon vard�r ve �u �ekilde kullan�l�r
	std::cout<<"dizinin size'�: " << std::size(dizi) << std::endl; //3 elemanl� diye dizinin size'�n� verir 
	std::cout<<"alt dizinin size'�: " << std::size(dizi[1]) << std::endl; //2 elemanl� diye dizinin 1nci alt dizisinin 5,8 in size'�n� verir 

	//diziden fonksiyona ge�erken C++ da pointerla ge�iyoruz de�erle de�il, �rne�in
	int fonksiyonDizi[4]{ 3, 45, 4, 3 };
	test(fonksiyonDizi);
	//burada normalde fonksiyonDizi sinin de�erleri ge�mesi gerekirken C++ da pointer olarak ge�iyor
	//C++ geli�tiricileri bunun a��r� ram istemesi sebebi ile ilk zamanlarda �rne�in 8mb ram i�in 8mb de�er i�erecek dizi
	//g�nderilse makinay� komple kitlerdi onlarda dizinin de�eri yerine pointerlar�n� yani bellek adresini g�ndermi�ler
	//bu i�lem java,js,php gibi dillerde fonksiyona bir dizi g�nderdi�imizde dizinin kendisi gidiyor. Asl�nda arka planda yin e
	//ayn� i�lem oluyor ama bu �ok daha �rt�l� yap�l�yor developer bunu g�remiyor! ��nk� o dillerde bildi�im kadar� ile 
	//pointer yok!
	char cdizi[]{ "Mustafa" }; //burada eleman say�s�n� belirtmesekde derleyici bunu kendi otomatik olarak doldurur
	cdizitest(cdizi);
}

void test(int fonksiyonDizi[4]) {
//void test(int* fonksiyonDizi[4]) {   //b�ylede yazabiliriz zaten derleyici bunu b�yle alg�l�yor

	for (int i = 0; i < 4; i++) {
		std::cout << "fonksiyon dizi: " << fonksiyonDizi[i]<<std::endl;
	}
}
void cdizitest(char cdizi[]) {
//void cdizitest(char* cdizi) {	   //b�ylede yazabiliriz
	std::cout << "character dizi: " << cdizi<<std::endl;
	//Normalde burada dizinin bellek adresini almay� beklerken dizinin kendisini karakter dizisini komple bir string gibi
	//yani Mustafa olarak al�r�z
}
