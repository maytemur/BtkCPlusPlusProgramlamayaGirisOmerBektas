// 09AkisKontrolleri.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
int main() {
	int a = 0;
	int b = 0;
	char islem = '+';

	while (true) {
		std::cout << "Birinci sayi" << std::endl;
		std::cin >> a;
		std::cout << "ikinici sayi" << std::endl;
		std::cin >> b;

		std::cout << "�slem giriniz" << std::endl;
		std::cin >> islem;

		if (islem=='e') {  //tek char i�in �ift t�rnak kabul etmiyor!!
			continue;//islem i�in e verirsek tekrar while'�n ba��na d�ner
		}
		else if (islem=='g') {
			goto stop;
		}

		switch (islem) {
		case '+':
			std::cout << "Sonuc:" << a + b << std::endl;
			break;
		case '-':
			std::cout << "Sonuc:" << a - b << std::endl;
			break;
		case '*':
			std::cout << "Sonuc:" << a * b << std::endl;
			break;
		case '/':
			try {
				std::cout << "Sonuc:" << a / b << std::endl;
				throw std::runtime_error("Something Bad happened here");
			}
			catch (std::exception const& e) {
				std::cout << "Hata" << std::endl;
			}
			break;
		default:
			std::cout << "Bilinmeyen islem ,tekrar deneyiniz, 4 i�lem operat�r�?" << std::endl;
			break;
		}
		break; //s�rekli �al��mas� i�in bu sat�r yorum haline getirilebilir
	}
	for (int i = 0; i < 5; i++) {
		std::cout << "Dongu" << i << std::endl;
	}
stop:
	std::cout << "Durduruldu";
}
