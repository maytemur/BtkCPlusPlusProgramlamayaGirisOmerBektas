// 04DegiskenVeRam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a = 10;
    int* ptr = &a; //int yan�na * koymak pointer i�aret ediyoruz demek &a olarak bellek adresini atayabiliriz

    std::cout <<&a << "\n";

    //pointer'�n yani y�ld�z�n 3 de�i�ik konumunda olan durumlarla kar��la�abiliriz
    int * aPtr = &a; //y�ld�z ortada
    int* abPtr = &a; //y�ld�z ba�ta int'ten sonra
    int *abcPtr = &a; //y�ld�z sonda abcPtr'nin ba��nda
    //bunlar�n hepsi derleyici i�in ayn�d�r. Derleyici bo�uklar� silerek bunlar�  <int*aPtr> b�yle g�r�r.

    std::cout << *aPtr << "\n";

    //bellek adresi ile �al��al�m
    std::cout << *&*&*&aPtr << "\n"; //bu b�yle istedi�imiz kadar gider ister ampersant & ekle bellek adresini verir ister ondan
    //sonra y�ld�z ekle * ,adresin de�erini verir ...




}
