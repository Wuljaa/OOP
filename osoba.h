#ifndef OSOBA_H
#define OSOBA_H

using namespace std;
#include <string>
#include <iostream>

class Osoba {
    protected:
        string ime;
        string prezime;
        int godine;
    public:
        Osoba(string ime, string prezime, int godine);
        string getIme() const;
        string getPrezime() const;
        int getGodine() const;
        

        void setIme(string ime);
        void setPrezime(string prezime);
        void setGodine(int godine);
        

        string toString() const;
};

#endif
