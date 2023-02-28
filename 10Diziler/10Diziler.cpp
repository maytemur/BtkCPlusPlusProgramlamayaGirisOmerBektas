// 10Diziler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iterator> //for sts::size
#include<locale.h>  //dil kodlarý bu kütüphanenin içinde

void test(int fonksiyonDizi[4]); //forward decleration
void cdizitest(char cdizi[]);//forward decleration


int main() {
	int puanlar[3]{ 10,20,30 };
	setlocale(LC_ALL, "Turkish");
	printf("TÜRKÇE\n");

	std::cout << puanlar << "\n"; //dizinin ilk elemanýnýn bellek adresini verir
	std::cout << *puanlar << "\n"; //pointer iþareti ile bellek adresi kime ait onu gösterir

	int* ptr = puanlar + 3;      //hiç hata vermez eksi deðeri döndürür ama dizi týþýna taþtýk bu hatayý yakalamak zordur!
	std::cout << *ptr << "\n";

	//dizi for döngüsü
	printf("Dizi for döngüsü\n");
	for (int i = 0; i < 3; i++) {

		std::cout << puanlar[i] << std::endl;
	}

	//içe içe diziler
	printf("iç içe diziler\n");

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
	std::cout << dizi[1][0]<<"\n"; //1nci dizinin [5,8], ilk elemanýný yani 5i verir
	printf("1nci dizinin [5,8], ilk elemaný yani 5 %d", dizi[1][0]); //1nci dizinin [5,8], ilk elemanýný yani 5i verir
	printf("\n");
	printf("içe içe döngüler\n");
	for (int i = 0; i < 3; i++) {
		for (int i2 = 0; i2 < 2; i2++) {
			std::cout << dizi[i][i2] << "\n"; //içe içe diziler programlama dünyasýnda çok sýk kullanýlýr ve çok iþe yarar dedi!
		}
	}

	//std bir kütüphanedir ve içinde size() diye bir fonksiyon vardýr ve þu þekilde kullanýlýr
	std::cout<<"dizinin size'ý: " << std::size(dizi) << std::endl; //3 elemanlý diye dizinin size'ýný verir 
	std::cout<<"alt dizinin size'ý: " << std::size(dizi[1]) << std::endl; //2 elemanlý diye dizinin 1nci alt dizisinin 5,8 in size'ýný verir 

	//diziden fonksiyona geçerken C++ da pointerla geçiyoruz deðerle deðil, örneðin
	int fonksiyonDizi[4]{ 3, 45, 4, 3 };
	test(fonksiyonDizi);
	//burada normalde fonksiyonDizi sinin deðerleri geçmesi gerekirken C++ da pointer olarak geçiyor
	//C++ geliþtiricileri bunun aþýrý ram istemesi sebebi ile ilk zamanlarda örneðin 8mb ram için 8mb deðer içerecek dizi
	//gönderilse makinayý komple kitlerdi onlarda dizinin deðeri yerine pointerlarýný yani bellek adresini göndermiþler
	//bu iþlem java,js,php gibi dillerde fonksiyona bir dizi gönderdiðimizde dizinin kendisi gidiyor. Aslýnda arka planda yin e
	//ayný iþlem oluyor ama bu çok daha örtülü yapýlýyor developer bunu göremiyor! çünkü o dillerde bildiðim kadarý ile 
	//pointer yok!
	char cdizi[]{ "Mustafa" }; //burada eleman sayýsýný belirtmesekde derleyici bunu kendi otomatik olarak doldurur
	cdizitest(cdizi);
}

void test(int fonksiyonDizi[4]) {
//void test(int* fonksiyonDizi[4]) {   //böylede yazabiliriz zaten derleyici bunu böyle algýlýyor

	for (int i = 0; i < 4; i++) {
		std::cout << "fonksiyon dizi: " << fonksiyonDizi[i]<<std::endl;
	}
}
void cdizitest(char cdizi[]) {
//void cdizitest(char* cdizi) {	   //böylede yazabiliriz
	std::cout << "character dizi: " << cdizi<<std::endl;
	//Normalde burada dizinin bellek adresini almayý beklerken dizinin kendisini karakter dizisini komple bir string gibi
	//yani Mustafa olarak alýrýz
}
