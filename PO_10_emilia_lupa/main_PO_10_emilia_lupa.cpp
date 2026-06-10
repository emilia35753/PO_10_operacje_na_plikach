#include "header_PO_10_emilia_lupa.h"



int main() {
	//Zadanie 1
	/*ofstream plik1; //output file stream
	plik1.open("nowy_plik.txt"); //jesli pliku nie ma w aktualnym katalogu, tam gdzie pliki cpp to utworzy sie plik o takiej nazwie w tym katalogu
	plik1 << "Emilia\nLupa\n1 rok";
	plik1.close(); //ZAMKNIECIE PLIKU!!!

	//Zadanie 2
	ifstream plik2; //input file stream
	string linia;
	plik2.open("nowy_plik.txt");
	if (plik2.is_open()) {//jesli udalo sie otwozyc plik
		while (getline(plik2, linia)) {
			cout << linia << endl;
		}
		cout << endl;
	}
	else {
		cout << "\nError: plik nie istnieje albo sie go nie dalo otworzyc\n";
	}
	plik2.close();
	*/

	//Zadanie 3 i 4
	/*string imie, nazwisko;
	fstream plik3;
	plik3.open("wizytowka.txt", ios::app); //ios::app zeby tekst byl dopisywany na koncu pliku
	int telefon;
	if (plik3.is_open()) {//jesli udalo sie otwozyc plik
		cout << "Program tworzy wizytowke. Prosze podac imie:\n";
		cin >> imie;
		plik3 << imie << endl;;
		cout << "nazwisko:\n";
		cin >> nazwisko;
		plik3 << nazwisko << endl;
		cout << "nr telefonu:\n";
		cin >> telefon;
		plik3 << telefon << endl;
	}
	else {
		cout << "\nError: plik nie istnieje albo sie go nie dalo otworzyc\n";
	}

	plik3.close();
	*/

	//Zadanie 5
	/*
	fstream plik4;
	string imiee, nazwiskoo;
	string stelefonn;
	int telefonn;
	plik4.open("wizytowka.txt", ios::in); //ios::in do czytania z pliku
	if (plik4.good()) {
		getline(plik4, imiee);
		getline(plik4, nazwiskoo);
		getline(plik4, stelefonn);
		telefonn = stoi(stelefonn);
	}
	else {
		cout << "\nError: plik nie istnieje albo sie go nie dalo otworzyc\n";
	}
	plik4.close();

	cout << "Dane z pliku:\n";
	cout << imiee << endl << nazwiskoo << endl << telefonn;
	*/

	//Zadanie 6
	/*
	Tablica a;
	a.czytaj_dane();
	a.zapisz_dane_do_pliku();
	a.czytaj_dane_z_pliku();
	*/

	//Zadanie 7
	/*
	tablice tab;
	tab.czytaj_dane();
	tab.przetworz_dane();
	tab.zapisz_dane_do_pliku();
	tab.czytaj_dane_z_pliku();
	*/

	return 0;
}