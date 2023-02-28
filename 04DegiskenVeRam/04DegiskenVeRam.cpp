// 04DegiskenVeRam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a = 10;
    int* ptr = &a; //int yanýna * koymak pointer iþaret ediyoruz demek &a olarak bellek adresini atayabiliriz

    std::cout <<&a << "\n";

    //pointer'ýn yani yýldýzýn 3 deðiþik konumunda olan durumlarla karþýlaþabiliriz
    int * aPtr = &a; //yýldýz ortada
    int* abPtr = &a; //yýldýz baþta int'ten sonra
    int *abcPtr = &a; //yýldýz sonda abcPtr'nin baþýnda
    //bunlarýn hepsi derleyici için aynýdýr. Derleyici boþuklarý silerek bunlarý  <int*aPtr> böyle görür.

    std::cout << *aPtr << "\n";

    //bellek adresi ile çalýþalým
    std::cout << *&*&*&aPtr << "\n"; //bu böyle istediðimiz kadar gider ister ampersant & ekle bellek adresini verir ister ondan
    //sonra yýldýz ekle * ,adresin deðerini verir ...




}
