// 13SiniflarOOPErisim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Public
//Private
//Protected

//Bu biraz tv kumandasýna benziyor. Tv nin içinde hiçbirþeye doðrudan komut vermiyoruz normalde! Açýlýrsa garanti dýþý kalýyor vs vs
//Kodu yazan benim neden sýnýfý saklayayým ? bu yanlýþ bir düþünce! baþkalarýda kullanacaksa veya kütüphane yazýyoruz diyelim vs vs diye açýkladý

class Payment {
public:
    float tutar;

    std::string paraBirimi;

    std::string hashCode = "1253226";

    Payment() { //eðer bir parametre gönderilmezse bu çalýþýr
        tutar = 1.3;
        paraBirimi = "tl";
        std::cout << "yap";
    }   
    Payment(bool f,std::string a) { //bu parametreler gönderilirse bu çalýþýr
        tutar = 1.3;
        paraBirimi = "tl";
        std::cout << a;
    }

        //hiç bir parametre gönderilmezse void metodu çalýþýr arka planda derleyici buna uygun þekilde hata vermeden kodu çalýþtýrýyor
    
    ~Payment() { //yýkýcý metod!!!! parametre göndermeyiz pek bir iþe yaradýðý söylenemez çaðýrmasakda derleyici çalýþtýrýyor bunu
        std::cout << "Bitti";
    }
    void pay() {
        std::cout << "Ödeme alýndý";
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

//constructor(yapýcý)
//destructor(yýkýcý) methodlar
//yýkýcý metod sýnýfý sonlandýrmaya yarýyor metod baþýna ~ iþareti konuluyor yukarýda örneði var
