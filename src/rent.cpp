#include <iostream>
#include <fstream>
#include "../header/funkcije.h"
#include "../header/strukture.h"
using namespace std;

int main(){
    int opcija;
    cout << "---------------------------------------\n"<<"Dobrodosli u nasu Rent-A-Car agenciju !\n"<<"---------------------------------------\n";
    cout << "Odaberite opciju :\n 1.Registracija\n 2.Login\n";
    cin >> opcija;
    if(opcija == 1){registracija();cout <<"\n";login();}
    if(opcija == 2){login();}
    system("pause");
    return 0;
}