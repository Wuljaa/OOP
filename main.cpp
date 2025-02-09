#include <iostream>
#include <string>
#include <vector>
#include "osoba.h"
#include "auto.h"
using namespace std;
 
vector<Osoba> osobe;
vector<Auto> auti;

template <typename T>
void ispisiVrijednost(T vrijednost)
{
    cout << "Vrijednost: " << vrijednost << endl;
}

int main()
{
    Osoba o1("Pero", "Peric", 25);
    Auto a1("Ivo", "Ivic", 69, "Audi", "V8", 420);

    cout << "Ime: " << o1.getIme() << endl;
    cout << "Prezime: " << o1.getPrezime() << endl;
    cout << "Godine: " << o1.getGodine() << endl;
    cout << "Marka: " << a1.getMarka() << endl;
    cout << "KS: " << a1.getSnagaMotora() << endl;

    o1.setIme("Ivo");
    o1.setPrezime("Ivic");
    o1.setGodine(69);

    a1.setMarka("Volkswagen");
    a1.setSnagaMotora(69);
    
    ispisiVrijednost("Test");
    ispisiVrijednost(3.14);

    ispisiVrijednost(o1.getGodine());
    ispisiVrijednost(a1.getSnagaMotora());
    
    cout << o1.toString() << endl;
    cout << a1.toString() << endl;

    try{
        o1.setGodine(-5);
    }
    catch(const invalid_argument& e){
        cerr << "njet gud!: " << e.what() << endl;
    
    try{
        a1.setSnagaMotora(-5);
    }
    catch(const invalid_argument& e){
        cerr << "engine kaput!: " << e.what() << endl;
    }}
    
    return 0;
}

