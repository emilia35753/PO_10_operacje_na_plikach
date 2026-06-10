#include "header_PO_10_emilia_lupa.h"

//zadanie 6
void Tablica::czytaj_dane() {
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			if (i == j){
				tablica[i][j] = 1;
			}
			else {
				tablica[i][j] = 0;
			}
		}
	}
}

void Tablica::zapisz_dane_do_pliku() {
	fstream plik("tablica.txt", ios::out);

	if (plik.good()) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				plik << tablica[i][j] << " "; //spacja zeby przy odczycie z pliku nie bralo pierwszej linijki jako cala liczbe
			}
			plik << "\n";
		}
		plik.close();
	}
	else {
		cout << "\nError: plik nie istnieje albo sie go nie dalo otworzyc\n";
	}
}

void Tablica::czytaj_dane_z_pliku() {
	fstream plik("tablica.txt", ios::in);
	if (plik.good()) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				plik >> tablica[i][j];
			}
		}
		plik.close();
	}
	else {
		cout << "\nError: plik nie istnieje albo sie go nie dalo otworzyc\n";
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << tablica[i][j] << " ";
		}
		cout << endl;
	}

}

//Zadanie 7
void tablice::czytaj_dane() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 1) {
				tab1[i][j] = 1;
			}
			else {
				tab1[i][j] = 0;
			}
		}
	}
}

void tablice::przetworz_dane() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab2[i][j] = tab1[j][i];
		}
	}
}

void tablice::zapisz_dane_do_pliku() {
	fstream plik("tablica2.txt", ios::out);

	if (plik.good()) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				plik << tab2[i][j] << " "; //spacja zeby przy odczycie z pliku nie bralo pierwszej linijki jako cala liczbe
			}
			plik << "\n";
		}
		plik.close();
	}
	else {
		cout << "\nError: plik nie istnieje albo sie go nie dalo otworzyc\n";
	}
}

void tablice::czytaj_dane_z_pliku() {
	string linia;
	fstream plik("tablica2.txt", ios::in);
	if (plik.good()) {
		while (getline(plik, linia)) {
			cout << linia << endl;
		}
		plik.close();
	}
	else {
		cout << "\nError: plik nie istnieje albo sie go nie dalo otworzyc\n";
	}

}