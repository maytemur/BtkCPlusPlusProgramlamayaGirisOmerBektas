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
	  /// topla fonksiyonuna 2 integer g�nderin
	  /// </summary>
	  void topla() {
		  this->sonuc = this->f + this->g;
	  }
	  /// <summary>
	  /// yazd�r�lacak de�er fonksiyonu
	  /// </summary>
	  void yazdir() {
		  std::cout << this->sonuc;
	  }

};

int main()
{
	//Programlama Yakla��mlar�-Stilleri
	//1-Procedural Programming-Prosed�rel Programlama
	//2-Object-Oriented Programming-Nesne Y�nelimli Programlama
	//3-Functional Programming-Fonksiyonel Programlama

	//Mesela Java tamamen OOP bir programlama dili iken C++ b�yle de�ildir. Baz� programlama dilleri prosed�rel iken 
	//baz�lar� fonksiyoneldir



	//prosed�rel yani step by step ad�m ad�m programlama. B�t�n acemilerin ilk yapt�klar� �ey ad�m ad�m prosed�rel
	//programlamad�r. Daha sonra d�ng�leri ��renirler yani fonksionel programlama yaparlar fonksiyonlarla
	int a = 10;
	int b = 20;
	std::cout << a + b;

	//fonlsiyonel programlama
	int cc = 34;
	int dd = 45;
	print(toplayalim(cc, dd));

	//OOP-nesne y�nelikli programlama- basit- �ncelikle bir s�n�fa ihtiyac�m�z var. Ne yapmak istiyoruz ? 
	//toplama yapmak istiyoruz o zaman bir tane yukar�da bir tane class yazal�m , forward decleration yapmaya gerek yok
	//direkt olarak yukar�da yazd�m
	//nesneleri birbirinden ay�ran �eyler �zellikleri ve fonksiyonlar�d�r
	toplamaSinifi birinciSinif;
	birinciSinif.f = 34;
	birinciSinif.g = 2;

	birinciSinif.topla();
	birinciSinif.yazdir();
}


//Nesnel y�nelikli programlaman�n art�lar� 
//do�all�k, g�venilirlik,yeniden kullan�labilirlik,s�rd�r�lebilirlik,geni�letilebilirlik,zamandan tasarruf
