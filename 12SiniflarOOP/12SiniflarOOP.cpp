// 12SiniflarOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Hesapla {
public: int genislik, yukseklik, alan;

	  void giris() {
		  std::cout << "Yukseklik gir" << std::endl;
		  std::cin >> yukseklik;		//girilen de�eri yukseklik de�i�kenine atad�k
		  
		  std::cout << "Genislik gir" << std::endl;
		  std::cin >> genislik;
	  }
	  void hesapla() {
		  alan = yukseklik * genislik;
		  std::cout << alan;
	  }
};

int main()
{
	Hesapla hesap;
	hesap.giris();
	hesap.hesapla();
}
