// 11SiniflarOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int toplayalim(int c, int d) {
	return c + d;
}
void print(int h) {
	std::cout << h;
}

class toplamaSinifi {
public: int f, g, sonuc;
	  /// <summary>
	  /// topla fonksiyonuna 2 integer gönderin
	  /// </summary>
	  void topla() {
		  this->sonuc = this->f + this->g;
	  }
	  /// <summary>
	  /// yazdýrýlacak deðer fonksiyonu
	  /// </summary>
	  void yazdir() {
		  std::cout << this->sonuc;
	  }

};

int main()
{
	//Programlama Yaklaþýmlarý-Stilleri
	//1-Procedural Programming-Prosedürel Programlama
	//2-Object-Oriented Programming-Nesne Yönelimli Programlama
	//3-Functional Programming-Fonksiyonel Programlama

	//Mesela Java tamamen OOP bir programlama dili iken C++ böyle deðildir. Bazý programlama dilleri prosedürel iken 
	//bazýlarý fonksiyoneldir



	//prosedürel yani step by step adým adým programlama. Bütün acemilerin ilk yaptýklarý þey adým adým prosedürel
	//programlamadýr. Daha sonra döngüleri öðrenirler yani fonksionel programlama yaparlar fonksiyonlarla
	int a = 10;
	int b = 20;
	std::cout << a + b;

	//fonlsiyonel programlama
	int cc = 34;
	int dd = 45;
	print(toplayalim(cc, dd));

	//OOP-nesne yönelikli programlama- basit- öncelikle bir sýnýfa ihtiyacýmýz var. Ne yapmak istiyoruz ? 
	//toplama yapmak istiyoruz o zaman bir tane yukarýda bir tane class yazalým , forward decleration yapmaya gerek yok
	//direkt olarak yukarýda yazdým
	//nesneleri birbirinden ayýran þeyler özellikleri ve fonksiyonlarýdýr
	toplamaSinifi birinciSinif;
	birinciSinif.f = 34;
	birinciSinif.g = 2;

	birinciSinif.topla();
	birinciSinif.yazdir();
}


//Nesnel yönelikli programlamanýn artýlarý 
//doðallýk, güvenilirlik,yeniden kullanýlabilirlik,sürdürülebilirlik,geniþletilebilirlik,zamandan tasarruf
