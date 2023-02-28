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


class Ak47 : public Silah { //kalıtım alma
public:
	//miras aldığı için artık bu hep tekrar eden 2 değişkeni tekrar tanımlamaya gerek kalmadı
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
		//protected degere erişebiliriz ama onu değiştiremeyiz sadece kullanabiliriz. Protected bu işe yarar! kalıtım alan sınıflar 
		//bu değeri kullanabilir ama değiştiremez
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

void testFonksiyonu(Ak47& ak47) {		//böyle birşey gördüğümüzde bu bizden referans istiyordur

}

int main() {
	//C++ yeni başlayanların sıklıkla kafasını karıştıran bir olay olan pointer ve referans olayına bakalım

	Ak47 ak47;
	Ak47* ak47Ptr = &ak47;	//ak47Ptr pointer adresinin işaret ettiği bellek adresi &ak47 olacak

	ak47.isim = "Test"; //burada nasıl bu class'ın isim property'sine erişip değiştirebiliyorsak ak47Ptr nokta diyerekde pointer'ına erişebiliriz yalnız burda bir nüans var
										//oda derleyici bunu nokta yaptığımızda -> olarak değiştirir çünkü söz konusu olan pointer ve referansı. Bu özelliğe bu şekilde erişebiliriz
										//aynı şekilde metoda da (atesEt()) erişip çağırabiliriz
	ak47Ptr->isim = "Test2";
	ak47Ptr->atesEt();
	//referansda da aynı şekilde ak47Ref.isim diyerek referansına erişebiliriz
	Ak47& ak47Ref = ak47;
	ak47Ref.isim = "Test3";

	testFonksiyonu(ak47);		//bizden referans istiyor ama ak47 nesnesini direkt olarak gönderebiliriz
													//biz burda bu nesneyi gönderdiğimizde içinde aslında bellek adresini ,referansını ve değerini gönderiyoruz

	//referans için istiklal caddesini gösteren 2 tabela örneğini verdi. 2 side aynı caddeyi referans veriyor gösteriyor diyerek, şöyle bir örnek yapıldı
	int sayiReferans = 19;  //burdada aslında sayiReferans 19'u referans ediyor. Yani normalde int double 'a verdiğimiz değerler referans'la aynı

	int& denemeReferans = sayiReferans;

	//bu saatten sonra denemeReferans'ın başına ne gelirse sayiReferans'ında başına gelir

	denemeReferans = 56;
	std::cout << sayiReferans; //bu tabiki artık 56 değerini verir

	return 0;
}
