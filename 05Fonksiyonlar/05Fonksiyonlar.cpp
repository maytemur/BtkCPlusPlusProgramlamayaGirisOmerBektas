// 05Fonksiyonlar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void mesaj(char msg,int sayi1,int sayi2) {
	std::cout <<msg<<" " << sayi1<<" " << sayi2<<" " << "\n";
	//void oldu�u i�in bir �ey demesekde hata vermez ama int float vs t�r�nde bir fonksyion deseydik void olmasayd� 
	//s�z konusu b�t�n de�i�kenlere de�er vermemiz gerekirdi
}


int toplaOverload(int bir, int iki) {
	return bir + iki;
}

double toplaOverload(double bir, double iki) {
	return bir + iki;
}


int main()
{
	mesaj('n',21,21); //char oldu�u i�in tek t�rnak i�inde g�ndermemiz gerekiyor
	//ayn� isimli 2 fonksyiondan hangisi uygunsa onu kullan�yor ,double da g�nderebiliriz int de buna function overload
	//denir
	int a = 10;
	int b = 14;
	std::cout<<"Toplaman�n sonucu (function overload) " << toplaOverload(a, b);
	//std::cout<<"Toplaman�n sonucu (function overload) " << toplaOverload(al, bl);  
	// a long b long da hata verir ama mesela char versek gider int olarak code de�erini al�r
	//std::cout<<"Toplaman�n sonucu (function overload) " << toplaOverload(false, true);
	//buda �al���r ve sonu� olarak false i�in int de�erini true i�in 1 de�erini verirdi yani derleyici en iyi ihtimali verebilmek i�in
	//u�ra��r
}

int toplaSayi(int sayi3, int sayi4) {
	mesaj('d',54,78);
	return sayi3 + sayi4;
}

//fonksiyon i�inden ba�ka bir fonksiyon �a��rabiliriz ama C++ fonksiyon i�inde fonksiyon kullanmay� desteklemez
//ve fonksiyon �al��t�r�ld�ktan sonra b�t�n de�erleri geri d�nd�r�ld�kten sonra haf�zadan silinir
//mesela �u fonksiyon hata verir

//float buyukSayi(float deger) {
//	int icfonksiyon(int hata) {
//		return hata + 3;	
//	}
//	return deger * deger;
//}

//Forward decleration (ileriye y�nelik bildirim )

//yani yukar�daki mesaj fonksiyonunu toplaSayi() fonksiyonundan a�a��da tan�mlansayd� hata verirdi ��nk� derleyici topla 
//fonksiyonunu bulamazd� ama forward decleration yaparsak bunu engelleyebiliriz 
//bunu mesela dosyan�n ba��nda "private late init var" gibi  int toplaSayi(int birinci,int ikinci ); �eklinde tan�mlarsak derleyici
//hata vermez
//birde bunu ��zmenin di�er yolu header file ile yapmakd�r zaten header file'lar bir i� yapmaz, header file'lar i�inde genelde
//bildirimler vard�r, bir header file yap�p, bunu header file i�inde de declare edebiliriz

//Function Overload - A��r� y�kleme- yukar�daki main fonksiyonun i�inde a��klama var




