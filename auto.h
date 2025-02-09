#ifndef AUTO_H
#define AUTO_H

#include "osoba.h"
#include "motor.h"
#include <string>
using namespace std;

class Auto : public Osoba {
public:
    Auto(string ime, string prezime, int godine, string Marka, string tipMotora, int snagaMotora);
    string getMarka() const;
    int getSnagaMotora() const;
    void setMarka(string Marka);
    void setSnagaMotora(int snagaMotora);
    string toString() const;

private:
    string Marka;
    Motor motor;
};

#endif