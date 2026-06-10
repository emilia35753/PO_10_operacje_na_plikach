# Operacje na plikach w C++ / File I/O in C++
 
> 🇵🇱 [Polski] | 🇬🇧 [English] (below)
 
---
 
## 🇵🇱 Opis
 
Projekt z przedmiotu **Programowanie obiektowe** poświęcony operacjom wejścia/wyjścia na plikach tekstowych w C++ z użyciem strumieni `ifstream`, `ofstream` i `fstream`. Projekt podzielony jest na trzy pliki.
 
### Struktura projektu
 
```
├── header_PO_10_emilia_lupa.h                     # deklaracje klas
├── source_PO_10_emilia_lupa.cpp                   # implementacja metod
└── main_PO_10_emilia_lupa.cpp                     # funkcja główna
```
 
### Co robi program
 
Program zawiera siedem niezależnych zadań:
 
- **Zadanie 1** – tworzenie i zapis do pliku tekstowego (`ofstream`)
- **Zadanie 2** – odczyt pliku linia po linii (`ifstream`, `getline`)
- **Zadania 3–4** – zapis danych wczytanych od użytkownika (imię, nazwisko, numer telefonu) do pliku w trybie dopisywania (`ios::app`)
- **Zadanie 5** – odczyt danych z pliku wizytówki i konwersja numeru telefonu ze `string` na `int` (`stoi`)
- **`Tablica`** – klasa generująca macierz jednostkową 10×10, zapisująca ją do pliku i odczytująca z powrotem
- **`tablice`** – klasa wczytująca macierz 10×10, obliczająca jej transpozycję i zapisująca wynik do pliku; odczyt z pliku realizowany przez `getline`
### Technologie
 
- C++, `<fstream>`, `<string>`
- Kompilacja: g++ / dowolny kompilator C++
### Uruchomienie
 
```bash
g++ main_PO_10_emilia_lupa.cpp source_PO_10_emilia_lupa.cpp -o program
./program
```
 
> Program tworzy pliki tekstowe (`nowy_plik.txt`, `wizytowka.txt`, `tablica.txt`, `tablica2.txt`) w katalogu roboczym.
 
---
 
## 🇬🇧 Description
 
A coursework project for **Object-Oriented Programming** focused on text file input/output in C++ using `ifstream`, `ofstream`, and `fstream` streams. The project is split across three files.
 
### Project structure
 
```
├── header_PO_10_emilia_lupa.h                     # class declarations
├── source_PO_10_emilia_lupa.cpp                   # method implementations
└── main_PO_10_emilia_lupa.cpp                     # main function
```
 
### What the program does
 
The program covers seven independent tasks:
 
- **Task 1** – creating and writing to a text file (`ofstream`)
- **Task 2** – reading a file line by line (`ifstream`, `getline`)
- **Tasks 3–4** – writing user-provided data (name, surname, phone number) to a file in append mode (`ios::app`)
- **Task 5** – reading data back from the business card file and converting the phone number from `string` to `int` (`stoi`)
- **`Tablica`** – a class that generates a 10×10 identity matrix, writes it to a file, and reads it back
- **`tablice`** – a class that loads a 10×10 matrix, computes its transpose, and saves the result to a file; file reading is done line by line using `getline`
### Technologies
 
- C++, `<fstream>`, `<string>`
- Build: g++ / any C++ compiler
### How to run
 
```bash
g++ main_PO_10_emilia_lupa.cpp source_PO_10_emilia_lupa.cpp -o program
./program
```
 
> The program creates text files (`nowy_plik.txt`, `wizytowka.txt`, `tablica.txt`, `tablica2.txt`) in the working directory.
 
---
 
*Projekt studencki / Student project*
 
