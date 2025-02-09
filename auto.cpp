#include "auto.h"
#include <iostream>
using namespace std;

Auto::Auto(string ime, string prezime, int godine, string Marka, string tipMotora, int snagaMotora)
: Osoba(ime, prezime, godine), motor(tipMotora, snagaMotora)  
{
    this->Marka = Marka;
}

string Auto::getMarka() const {
    return Marka;
}

int Auto::getSnagaMotora() const {
    return motor.getSnaga();
}

void Auto::setMarka(string Marka) {
    this->Marka = Marka;
}

void Auto::setSnagaMotora(int snagaMotora) {
    if (snagaMotora > 0) {
        motor.setSnaga(snagaMotora);
    } else {
        throw invalid_argument("Konji nejdu.");
    }
}

string Auto::toString() const {
    return "Marka: " + Marka + ", KS: " + to_string(motor.getSnaga()) + ", " + motor.getTip();
}