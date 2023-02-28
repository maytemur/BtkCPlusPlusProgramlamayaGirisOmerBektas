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

//bunu çalýþtýrýrsak ekrana Hello basar. Þu an için neden A dan çalýþtýrmýyoruzda böyle pointer iþareti ile dolanbaçlý olarak
//B fonksiyonundan çalýþtýrýyoruz , pek bir anlamý yok , dersde de bunu açýklamadý zaten böyle oluyor denilip ezber mantýðý
//geçildi yani adam bilmiyor!
//yukarýdaki örnek mycodeschool kanalýndan alýndý.
//Bir sonraki projede örnek var
