// 08FonksiyonlarInline.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Inline Functions - sat�r i�i fonksiyonlar

inline int topla(int a, int b) {
    return a + b;
}

int main()
{
    topla(10, 10); 
    //inline fonksiyonu bunu g�rd���nde derleyicinin a+b yazmas�n� sa�layacakt�r
    //yani derleyici topla(10,10) g�rd��� yere a+b yazar
    //pek bir i�levselli�i yok dedi?
}
