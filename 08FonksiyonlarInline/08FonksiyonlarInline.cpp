// 08FonksiyonlarInline.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Inline Functions - satýr içi fonksiyonlar

inline int topla(int a, int b) {
    return a + b;
}

int main()
{
    topla(10, 10); 
    //inline fonksiyonu bunu gördüðünde derleyicinin a+b yazmasýný saðlayacaktýr
    //yani derleyici topla(10,10) gördüðü yere a+b yazar
    //pek bir iþlevselliði yok dedi?
}
