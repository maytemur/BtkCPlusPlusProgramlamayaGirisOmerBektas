// 06FonksiyonlarCallback.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
//Callback Function 
void A() {
	printf("Hello");
}

void B(void (*ptr)()) { //function pointer as argument
	ptr(); //call-back function that "ptr" points to
}

int main() {
	void (*p)() = A;
	B(p);
}

//bunu �al��t�r�rsak ekrana Hello basar. �u an i�in neden A dan �al��t�rm�yoruzda b�yle pointer i�areti ile dolanba�l� olarak
//B fonksiyonundan �al��t�r�yoruz , pek bir anlam� yok , dersde de bunu a��klamad� zaten b�yle oluyor denilip ezber mant���
//ge�ildi yani adam bilmiyor!
//yukar�daki �rnek mycodeschool kanal�ndan al�nd�.
//Bir sonraki projede �rnek var
