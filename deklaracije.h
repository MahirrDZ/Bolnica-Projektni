#pragma once
#include <string>
#include <vector>
using namespace std;
class Osoba;
class Pacijent;
class Doktor;
class Administrator;

enum MeniOpcije {
    PRIJAVA_DOKTOR = 1,
    PRIJAVA_ADMINISTRATOR = 2,
    PRIJAVA_PACIJENT=3,
    IZLAZ = 4
};
enum DoktorOpcije {
    DOKTOR_PREGLED_PACIJENATA = 1,
    DOKTOR_DODAVANJE_PACIJENTA = 2,
    DOKTOR_IZMJENA_PODATAKA_PACIJENTA = 3,
    DOKTOR_DODAJ_TERMIN_PREGLEDA = 4,
    DOKTOR_BRISANJE_PACIJENTA = 5,
    DOKTOR_PRETRAGA_PACIJENTA = 6,
    DOKTOR_IZLAZ = 7
};

enum AdministratorOpcije {
    ADMIN_DODAJ_DOKTORA = 1,
    ADMIN_UKLONI_DOKTORA = 2,
    ADMIN_PREGLED_DOKTORA = 3,
    ADMIN_IZMJENA_DOKTORA = 4,
    ADMIN_DODJELJIVANJE_DOKTORA_PACIJENTU = 5,
    ADMIN_IZLAZ = 6
};
enum PacijentOpcije {
    PACIJENT_PRIKAZ_TERMINA=1,
    PACIJENT_PRIKAZ_PODATAKA=2,
    PACIJENT_IZLAZ=3
};

void loginMeni();
void doktorMeni();
void pacijentMeni();
void administatorMeni();
void dodajAdminastratora(vector<Administrator> &administratori);
bool provjeraAdminastratora(vector<Administrator> &administratori,string lozinka);

void izmjenapodatakaDoktora(vector<Doktor> &doktori);
void dodajDoktora(vector<Doktor> &doktori,vector<Pacijent> &pacijenti);
void pregledDoktora(vector<Doktor> &doktori);
void ukloniDoktora(vector<Doktor> &doktori);
void dodajDoktoraPacijentu(vector<Pacijent> &pacijenti,vector<Doktor> &doktori);

void pregledPacijenata(vector<Pacijent>& pacijenti);
void dodavanjePacijenta(vector<Pacijent>& pacijenti,vector<Doktor>& doktori);
void izmjenaPodatakaPacijenta(vector<Pacijent>& pacijenti);
void brisanjePacijenta(vector<Pacijent>& pacijenti);
void dodajTerminPregleda(vector<Pacijent> &pacijent);

bool provjeraJMBG(const string jmbg);

void pretragaPacijentaMenu(const vector<Pacijent>& pacijenti);
void pacijentPrikazTermina(vector<Pacijent>& pacijenti);
void prikaziPacijenta(vector<Pacijent>& pacijenti);