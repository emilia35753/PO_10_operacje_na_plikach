#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//zadanie 6
class Tablica {
private:
	int tablica[10][10];
public:
	void czytaj_dane();
	void zapisz_dane_do_pliku();
	void czytaj_dane_z_pliku();
};

//Zadanie 7
class tablice {
private:
	int tab1[10][10];
	int tab2[10][10];
public:
	void czytaj_dane();
	void przetworz_dane();
	void zapisz_dane_do_pliku();
	void czytaj_dane_z_pliku();
};