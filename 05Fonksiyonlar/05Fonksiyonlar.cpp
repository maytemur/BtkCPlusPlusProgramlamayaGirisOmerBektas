// 05Fonksiyonlar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void mesaj(char msg,int sayi1,int sayi2) {
	std::cout <<msg<<" " << sayi1<<" " << sayi2<<" " << "\n";
	//void olduðu için bir þey demesekde hata vermez ama int float vs türünde bir fonksyion deseydik void olmasaydý 
	//söz konusu bütün deðiþkenlere deðer vermemiz gerekirdi
}


int toplaOverload(int bir, int iki) {
	return bir + iki;
}

double toplaOverload(double bir, double iki) {
	return bir + iki;
}


int main()
{
	mesaj('n',21,21); //char olduðu için tek týrnak içinde göndermemiz gerekiyor
	//ayný isimli 2 fonksyiondan hangisi uygunsa onu kullanýyor ,double da gönderebiliriz int de buna function overload
	//denir
	int a = 10;
	int b = 14;
	std::cout<<"Toplamanýn sonucu (function overload) " << toplaOverload(a, b);
	//std::cout<<"Toplamanýn sonucu (function overload) " << toplaOverload(al, bl);  
	// a long b long da hata verir ama mesela char versek gider int olarak code deðerini alýr
	//std::cout<<"Toplamanýn sonucu (function overload) " << toplaOverload(false, true);
	//buda çalýþýr ve sonuç olarak false için int deðerini true için 1 deðerini verirdi yani derleyici en iyi ihtimali verebilmek için
	//uðraþýr
}

int toplaSayi(int sayi3, int sayi4) {
	mesaj('d',54,78);
	return sayi3 + sayi4;
}

//fonksiyon içinden baþka bir fonksiyon çaðýrabiliriz ama C++ fonksiyon içinde fonksiyon kullanmayý desteklemez
//ve fonksiyon çalýþtýrýldýktan sonra bütün deðerleri geri döndürüldükten sonra hafýzadan silinir
//mesela þu fonksiyon hata verir

//float buyukSayi(float deger) {
//	int icfonksiyon(int hata) {
//		return hata + 3;	
//	}
//	return deger * deger;
//}

//Forward decleration (ileriye yönelik bildirim )

//yani yukarýdaki mesaj fonksiyonunu toplaSayi() fonksiyonundan aþaðýda tanýmlansaydý hata verirdi çünkü derleyici topla 
//fonksiyonunu bulamazdý ama forward decleration yaparsak bunu engelleyebiliriz 
//bunu mesela dosyanýn baþýnda "private late init var" gibi  int toplaSayi(int birinci,int ikinci ); þeklinde tanýmlarsak derleyici
//hata vermez
//birde bunu çözmenin diðer yolu header file ile yapmakdýr zaten header file'lar bir iþ yapmaz, header file'lar içinde genelde
//bildirimler vardýr, bir header file yapýp, bunu header file içinde de declare edebiliriz

//Function Overload - Aþýrý yükleme- yukarýdaki main fonksiyonun içinde açýklama var




