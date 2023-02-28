// 13SiniflarOOPErisim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Public
//Private
//Protected

//Bu biraz tv kumandas�na benziyor. Tv nin i�inde hi�bir�eye do�rudan komut vermiyoruz normalde! A��l�rsa garanti d��� kal�yor vs vs
//Kodu yazan benim neden s�n�f� saklayay�m ? bu yanl�� bir d���nce! ba�kalar�da kullanacaksa veya k�t�phane yaz�yoruz diyelim vs vs diye a��klad�

class Payment {
public:
    float tutar;

    std::string paraBirimi;

    std::string hashCode = "1253226";

    Payment() { //e�er bir parametre g�nderilmezse bu �al���r
        tutar = 1.3;
        paraBirimi = "tl";
        std::cout << "yap";
    }   
    Payment(bool f,std::string a) { //bu parametreler g�nderilirse bu �al���r
        tutar = 1.3;
        paraBirimi = "tl";
        std::cout << a;
    }

        //hi� bir parametre g�nderilmezse void metodu �al���r arka planda derleyici buna uygun �ekilde hata vermeden kodu �al��t�r�yor
    
    ~Payment() { //y�k�c� metod!!!! parametre g�ndermeyiz pek bir i�e yarad��� s�ylenemez �a��rmasakda derleyici �al��t�r�yor bunu
        std::cout << "Bitti";
    }
    void pay() {
        std::cout << "�deme al�nd�";
    }

};

int main()
{
    Payment pay;
    pay.tutar = 10.25;
    pay.paraBirimi = "tl";
    pay.pay();

    return 0;
}

//constructor(yap�c�)
//destructor(y�k�c�) methodlar
//y�k�c� metod s�n�f� sonland�rmaya yar�yor metod ba��na ~ i�areti konuluyor yukar�da �rne�i var
