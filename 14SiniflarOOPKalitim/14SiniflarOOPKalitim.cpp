// 14SiniflarOOPKalitim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Silah {
protected:
	int deger;
public:
	std::string isim;
	int mermiKapasitesi;
};


class Ak47 : public Silah { //kal�t�m alma
public:
	//miras ald��� i�in art�k bu hep tekrar eden 2 de�i�keni tekrar tan�mlamaya gerek kalmad�
	/*std::string isim;
	int mermiKapasitesi;*/
	bool seriTek;
	int kayisUzunlugu;
	bool durbun;

	void atesEt() {
		///
	}
};
class Pistol :public Silah {
public:
	/*std::string isim;
	int mermiKapasitesi;*/
	int kurmaKoluDeseni;

	void atesEt() {
		//protected degere eri�ebiliriz ama onu de�i�tiremeyiz sadece kullanabiliriz. Protected bu i�e yarar! kal�t�m alan s�n�flar 
		//bu de�eri kullanabilir ama de�i�tiremez
		deger = 20;
	}
};

class M1 :public Silah {
public:
	/*std::string isim;
	int mermiKapasitesi;*/
	bool seriTek;
	int kayisUzunlugu;
	int kurmaPozisyonu;

	void atesEt() {
		///
	}
};

void testFonksiyonu(Ak47& ak47) {		//b�yle bir�ey g�rd���m�zde bu bizden referans istiyordur

}

int main() {
	//C++ yeni ba�layanlar�n s�kl�kla kafas�n� kar��t�ran bir olay olan pointer ve referans olay�na bakal�m

	Ak47 ak47;
	Ak47* ak47Ptr = &ak47;	//ak47Ptr pointer adresinin i�aret etti�i bellek adresi &ak47 olacak

	ak47.isim = "Test"; //burada nas�l bu class'�n isim property'sine eri�ip de�i�tirebiliyorsak ak47Ptr nokta diyerekde pointer'�na eri�ebiliriz yaln�z burda bir n�ans var
										//oda derleyici bunu nokta yapt���m�zda -> olarak de�i�tirir ��nk� s�z konusu olan pointer ve referans�. Bu �zelli�e bu �ekilde eri�ebiliriz
										//ayn� �ekilde metoda da (atesEt()) eri�ip �a��rabiliriz
	ak47Ptr->isim = "Test2";
	ak47Ptr->atesEt();
	//referansda da ayn� �ekilde ak47Ref.isim diyerek referans�na eri�ebiliriz
	Ak47& ak47Ref = ak47;
	ak47Ref.isim = "Test3";

	testFonksiyonu(ak47);		//bizden referans istiyor ama ak47 nesnesini direkt olarak g�nderebiliriz
													//biz burda bu nesneyi g�nderdi�imizde i�inde asl�nda bellek adresini ,referans�n� ve de�erini g�nderiyoruz

	//referans i�in istiklal caddesini g�steren 2 tabela �rne�ini verdi. 2 side ayn� caddeyi referans veriyor g�steriyor diyerek, ��yle bir �rnek yap�ld�
	int sayiReferans = 19;  //burdada asl�nda sayiReferans 19'u referans ediyor. Yani normalde int double 'a verdi�imiz de�erler referans'la ayn�

	int& denemeReferans = sayiReferans;

	//bu saatten sonra denemeReferans'�n ba��na ne gelirse sayiReferans'�nda ba��na gelir

	denemeReferans = 56;
	std::cout << sayiReferans; //bu tabiki art�k 56 de�erini verir

	return 0;
}
