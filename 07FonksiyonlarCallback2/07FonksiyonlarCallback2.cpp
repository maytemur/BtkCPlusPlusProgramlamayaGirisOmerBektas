// 07FonksiyonlarCallback2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int A = *((int*)a); //typecasting to int* and getting value
    int B = *((int*)b);
    //return abs(A) - abs(B); 
    //bu satýrý deðiþtirerek farklý farklý sorting fonksiyon yazmak 
    //yerine callback kullanarak daha kolay sorting yapabilirmiþiz ???
    
    //2nci örnek-büyükten küçüðe sýralama
    //return B - A; 

    //3ncü örnek -küçükten büyüðe sýralama
    return A - B; 
}

int main()
{
    int i, A[] = { -31,22,-1,50,-6,4 }; // => sort edilecek
    qsort(A, 6, sizeof(int), compare); //qsort stdlib içinde quick sort ,her türlü arrayi sort etmek için
    for (i = 0; i < 6; i++) printf("%d ", A[i]);
}

//hala çok anlamlý deðil!!!
//JS örneði youtube da zamanlama ayarlamasý için kullanýldýðýný söylüyor ???
