// 07FonksiyonlarCallback2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int A = *((int*)a); //typecasting to int* and getting value
    int B = *((int*)b);
    //return abs(A) - abs(B); 
    //bu sat�r� de�i�tirerek farkl� farkl� sorting fonksiyon yazmak 
    //yerine callback kullanarak daha kolay sorting yapabilirmi�iz ???
    
    //2nci �rnek-b�y�kten k����e s�ralama
    //return B - A; 

    //3nc� �rnek -k���kten b�y��e s�ralama
    return A - B; 
}

int main()
{
    int i, A[] = { -31,22,-1,50,-6,4 }; // => sort edilecek
    qsort(A, 6, sizeof(int), compare); //qsort stdlib i�inde quick sort ,her t�rl� arrayi sort etmek i�in
    for (i = 0; i < 6; i++) printf("%d ", A[i]);
}

//hala �ok anlaml� de�il!!!
//JS �rne�i youtube da zamanlama ayarlamas� i�in kullan�ld���n� s�yl�yor ???
