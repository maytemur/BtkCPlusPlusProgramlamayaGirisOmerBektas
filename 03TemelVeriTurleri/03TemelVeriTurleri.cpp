// 03TemelVeriTurleri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()
{
    char d = 120;
    std::cout << d <<"\n";

    char e = 24;
    char f = 35;
    std::cout << e+f <<"\n"; //burada ascII karakterleri yerine toplayarak int olarak alıyor

    //(Literal Constants) - aslına uygun sabitler
    bool isActive { true };
    std::cout << "Hello WOrld!" <<"\n";

    //(Symbolic Constants) -sembolik sabit- bilerek ve isteyerek tanımladığımız sabitler dedi?
    const int o { 4 };
    // o=15; üstte sabit dedik değiştiremeyiz hata verir
    const double pi { 3.14 };



    // kapalı tür casting (dönüşüm)
    int av = 10;
    av = 1.4;

    std::cout <<"av'ın değeri " << av <<"\n";

    //parantez kullanım amaçlarından bir tanesi derleme zamanı hata yakalama
    // bunu süslü parantez içinde kullanırsak double sayı var int diyorsun diye hata verir ama süslü parantez olmadan tanımlasak
    // int abcdef{ 1.1 }; 
    //süslü parantez olmayınca hata vermez derler 
    int abcdef= 1.1; 
  std::cout <<"abcdef " << abcdef << "\n";


    //açık tür casting (dönüşüm)
    int a = 10;
    a = static_cast<int>(5.9);  //verdiğimi al int'e dönüştür --> static_cast<int>
    std::cout <<"acik donusum a " << a << "\n";

    /*char ch{97};
    std::cout << static_cast<int>(ch);*/





    // true // doğru // evet // olumlu
    // false // yanlış // hayır // olumsuz


   /* bool a = true;

    std::cout << sizeof(a);*/

     auto j = "basla"; //c den miras kalmış bir kullanımdır. herhangi bir değişken türü verebiliriz! Php'de böyle kullanım varmış!
     std::cout << j <<"\n"; //hata vermiyor ama basmadı belki bakılabilir ?



    /* wchar_t string1 = '😄';

     std::wcout << sizeof(string1);
     return 0;*/



     /*for (int i = 0; i < 255; i++) {
         char a = i;
         std::cout << a;
     }*/

     /* auto d = 1;
      std::cout << sizeof(d); */

      /* int a = 5;
       int b(2);
       int c{ 2 };         */


       /*int a;

       std::cout << a;*/


       /* char d[] = "merhaba";

        std::cout << d;*/



         signed int s = -1;
         unsigned int u = 1 ;
         //burada karşılaştırma yaparken unsigned olanıda signed yapıyor yani -1 e döndürüp karşılaştırmada else'e düşüyor!
         if (s < u) {
             std::cout << "Kucuk" <<"\n";
         }else {
             std::cout << "Kucuk Degil" << "\n";
         }



         
            unsigned short x {65535};
            std::cout << "x degeri: " << x << '\n';

            x = 65536;
            std::cout << "x yeni deger: " << x << '\n'; //max değer 65535 dan sonra taşma oluyor ve sonuç sıfır -değer taşması örneği!

            x = 65537;
            std::cout << "x son deger: " << x << '\n';

            //unsigned yani işaretsiz pozitif bir tam sayı demiş oluyoruz. fa=3 yerine fa{3} de diyebiliyoruz
            unsigned int fa{ 3 };
            unsigned int gs{ 5 };

            std::cout << fa-gs << '\n'; //burada sonuç -2 dönmez acayip uzun bir integer dönüyor,bunu şöyle düşünüyor; demek ki burdan
            //çıkacak sonuç yine işaretsiz bir tam sayı olacak diyerek alakasız bir sayı çıkarıyor dedi!



            /* 9.876500000000000000000000
             9.8765 x 10²⁴

             C++ gösterimi sıfırdan önceki haneler + 1.2e4 olarak gösterilir.
             Örn: 9.8765 x 10²⁴ c++ karşılığı 5.9736e24*/

             /*std::cout << std::setprecision(9);
             std::cout << 9876543.21 << '\n';*/

            float p{123456789.0f};
             std::cout << std::setprecision(16);  //burda hassasiyet 16 ama float'ın tutabileceği bilgi 4 bayt ondan büyük olanı yuvarlayacak
             //kendine göre bir sayı verecektir burda 123456792 çıkar sonuç!!! bu yüzden böyle büyük değerlere double kullanmak gerekir
             std::cout << p << '\n';

             //bu şekilde de veri türleri var int8_t int16_t int32_t int64_t ; bunlar sabit veri tutmak için tasarlanmıştır
             //integer'in 4 byte kaplayıp kaplamayacağı derleyiciye ve pc ye göre değişecektir ama burda int8_t diyerek ben tamamen
             //8 byte istiyorum demiş oluyoruz.

             int8_t de = 115;
             std::cout << de << "\n"; //burada 115 beklerken s aldık. Sebebi ise derleyici burda 1 bytlık veri var buda olsa olsa char dır diyerek
             //ekrana char 115 karşılığı s'i basıyor

         //std::cout << std::setprecision(16);
         //std::cout << 9876543.21 << '\n';


        /* unsigned char d = 6;
         unsigned char a = 6;


         std::cout << a+d << '\n';*/

             int gh = 10;
             std::cout <<"gh ın bellek adresi : " << &gh; //gh'nın bellek adresini ver dedik başına & eklemek buna yarıyor &gh

}