#include <stdexcept>
#include "osoba.h"


Osoba::Osoba(string ime, string prezime, int godine) {
    this->ime = ime;
    this->prezime = prezime;
    this->godine = godine;
}

string Osoba::getIme() const {
    return ime;
}

string Osoba::getPrezime() const {
    return prezime;
}

int Osoba::getGodine() const {
    return godine;
}



void Osoba::setIme(string ime) {
    this->ime = ime;
}

void Osoba::setPrezime(string prezime) {
    this->prezime = prezime;
}


void Osoba::setGodine(int godine){
    if (godine > 0) {
        this->godine = godine;
    }
    else {
        throw invalid_argument("Beba makni se z volana!");
    }
}

string Osoba::toString() const {
    return "Ime: " + ime + ", Prezime: " + prezime + ", Godine: " + to_string(godine);
}
