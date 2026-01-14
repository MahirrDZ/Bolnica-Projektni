#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "deklaracije.h"
using namespace std;

class Osoba{
private:

    string Jmbg;
    string Ime;
    string Prezime;
    string Adresa;
    string Telefon;
    int GodinaRodjenja;

public:
    //Konstruktor
    Osoba(string jmbg, string ime, string prezime, string adresa, string telefon, int godinaRodjenja){
    
        Jmbg = jmbg;
        Ime = ime;
        Prezime = prezime;
        Adresa = adresa;
        Telefon = telefon;
        GodinaRodjenja = godinaRodjenja;
    }
    //Getteri
    const string& getJmbg()const  {
        return Jmbg;
    }
    const string& getIme()const  {
        return Ime;
    }
    const string& getPrezime()const  {
        return Prezime;
    }
    const string& getAdresa()const {
        return Adresa;
    }
    const string& getTelefon()const  {
        return Telefon;
    }
    const int getGodinaRodjenja()const  {
        return GodinaRodjenja;
    }
    //Setteri
    void setJmbg( string jmbg) {
        Jmbg = jmbg;
    }
    void setIme(string ime) {
        Ime = ime;
    }
    void setPrezime(string prezime) {
        Prezime = prezime;
    }
    void setAdresa(string adresa) {
        Adresa = adresa;
    }
    void setTelefon(string telefon) {
        Telefon = telefon;
    }
    void setGodinaRodjenja(int godinaRodjenja) {
        GodinaRodjenja = godinaRodjenja;
    }
    //Metode
    void IspisiPodatke() {
        cout << "JMBG: " << Jmbg << endl;
        cout << "Ime: " << Ime << endl;
        cout << "Prezime: " << Prezime << endl;
        cout << "Adresa: " << Adresa << endl;
        cout << "Telefon: " << Telefon << endl;
        cout << "Godina rodjenja: " << GodinaRodjenja << endl;
    }
    
};

class Pacijent : public Osoba {
private:
    string BrojKartona;
    string KrvnaGrupa;
    bool Osiguran;
    vector<string> Alergije;
    string Dijagnoza;
    vector<string> TerminPregleda;
    vector<string> TerminPregledaDatumVrijeme;
    string DodjeljeniDoktor;
public:
    //Konstruktor
    Pacijent( string jmbg,string ime,string prezime,string adresa,string telefon, int godinaRodjenja,string brojKartona, string krvnaGrupa, 
    bool osiguran,vector<string> terminPregleda,vector <string> terminPregledaVrijeme,vector<string> alergije, string dijagnoza, string dodjeljeniDoktor)
    : Osoba(jmbg, ime, prezime, adresa, telefon, godinaRodjenja) {
        BrojKartona = brojKartona;
        KrvnaGrupa = krvnaGrupa;
        Osiguran = osiguran;
        Alergije = alergije;
        Dijagnoza = dijagnoza;
        TerminPregleda = terminPregleda;
        TerminPregledaDatumVrijeme = terminPregledaVrijeme;
        DodjeljeniDoktor = dodjeljeniDoktor;
    }
    //Getteri
    const vector<string>& getTerminPregleda()const {
        return TerminPregleda;
    }
    const vector<string>& getTerminPregledaDatumVrijeme()const {
        return TerminPregledaDatumVrijeme;
    }
    const string& getBrojKartona()const {
        return BrojKartona;
    }
    const string& getKrvnaGrupa()const {
        return KrvnaGrupa;
    }
    const bool getOsiguran()const {
        return Osiguran;
    }
    const vector<string>& getAlergije()const {
        return Alergije;
    }
    const string& getDijagnoza()const {
        return Dijagnoza;
    }
    const string& getDodjeljeniDoktor()const {
        return DodjeljeniDoktor;
    }
    //Setteri
    void setTerminPregleda(vector<string> terminPregleda) {
        TerminPregleda = terminPregleda;
    }
    void setTerminPregledaDatumVrijeme(vector<string> terminPregledaDatumVrijeme) {
        TerminPregledaDatumVrijeme = terminPregledaDatumVrijeme;
    }

    void setBrojKartona(string brojKartona) {
        BrojKartona = brojKartona;
    }
    void setKrvnaGrupa(string krvnaGrupa) {
        KrvnaGrupa = krvnaGrupa;
    }
    void setOsiguran(bool osiguran) {
        Osiguran = osiguran;
    }
    void setAlergije(vector<string> alergije) {
        Alergije = alergije;
    }
    void setDodjeljeniDoktor(string dodjeljeniDoktor) {
        DodjeljeniDoktor = dodjeljeniDoktor;
    }
    void setDijagnoza(string dijagnoza) {
        Dijagnoza = dijagnoza;
    }
    //Metode
    void IspisiPodatkePacijenta() {
       
        IspisiPodatke();
        cout << "Broj kartona: " <<"T-"<< BrojKartona << endl;
        cout << "Krvna grupa: " << KrvnaGrupa << endl;
        cout << "Osiguran: " << (Osiguran ? "Da" : "Ne") << endl;
        cout<< "Dodjeljeni doktor: " << DodjeljeniDoktor << endl;
        cout << "Alergije: ";
        for ( auto alergija : Alergije) {
            cout << alergija << " ";
        }
        cout << endl;
        cout << "Dijagnoza: " << Dijagnoza << endl;
        cout << "Termini pregleda: ";
        for (int i = 0; i < TerminPregleda.size(); i++) {
            cout << TerminPregleda[i] << " " << TerminPregledaDatumVrijeme[i] << "; ";
        }
        cout << endl;
    }
};

class Administrator {
private:
    string Lozinka;
public:
    //Konstruktor
    Administrator(string lozinka)
    {
     
        Lozinka = lozinka;
    }
    //Getteri
   
    const string& getLozinka()const {
        return Lozinka;
    }
    //Setteri

    void setLozinka(string lozinka) {
        Lozinka = lozinka;
    }
    
};

class Doktor : public Osoba {
private:
    string Specijalizacija;
    string RadnoVrijeme;
    string Plata;
    vector<string> DodjeljeniPacijenti;
    string Odjeljenje;
public:
    //Konstruktor
    Doktor(string jmbg,string ime,string prezime,string adresa,string telefon, int godinaRodjenja,string specijalizacija, 
    string radnoVrijeme, string plata,vector<string> dodjeljeniPacijenti, string odjeljenje)
    : Osoba(jmbg, ime, prezime, adresa, telefon, godinaRodjenja) {
        Specijalizacija = specijalizacija;
        RadnoVrijeme = radnoVrijeme;
        Plata = plata;
        DodjeljeniPacijenti = dodjeljeniPacijenti;
        Odjeljenje = odjeljenje;
    }
    //Getteri
    const vector<string>& getDodjeljeniPacijenti()const  {
        return DodjeljeniPacijenti;
    }
    const string& getOdjeljenje()const  {
        return Odjeljenje;
    }
    const string& getSpecijalizacija()const  {
        return Specijalizacija;
    }
    const string& getRadnoVrijeme()const  {
        return RadnoVrijeme;
    }
    const string& getPlata() const {
        return Plata;
    }
    //Setteri
    void setDodjeljeniPacijenti(vector<string> dodjeljeniPacijenti) {
        DodjeljeniPacijenti = dodjeljeniPacijenti;
    }
    void setOdjeljenje(string odjeljenje) {
        Odjeljenje = odjeljenje;
    }
    void setSpecijalizacija(string specijalizacija) {
        Specijalizacija = specijalizacija;
    }
    void setRadnoVrijeme(string radnoVrijeme) {
        RadnoVrijeme = radnoVrijeme;
    }
    void setPlata(string plata) {
        Plata = plata;
    }
    //Metode
    void IspisiPodatke() {
        Osoba::IspisiPodatke();
        cout << "Specijalizacija: " << Specijalizacija << endl;
        cout << "Radno vrijeme: " << RadnoVrijeme << endl;
        cout << "Plata: " << Plata << endl;
        cout << "Odjeljenje: " << Odjeljenje << endl;
        cout << "Dodjeljeni pacijenti: ";
        for ( auto pacijent : DodjeljeniPacijenti) {
            cout << pacijent << " ";
        }
        cout<<endl;
    }
};

void loginMeni() {
    cout << "1. Prijava kao doktor" << endl;
    cout << "2. Prijava kao administrator" << endl;
    cout << "3. Prijava kao pacijent"<< endl;
    cout << "4. Izlaz" << endl;
    cout << "Izaberite opciju: ";    
}
void doktorMeni() {
    cout << "1. Pregled pacijenata" << endl;
    cout << "2. Dodavanje pacijenta" << endl;
    cout << "3. Izmjena podataka pacijenta" << endl;
    cout << "4. Dodaj termin pregleda" << endl;
    cout << "5. Brisanje pacijenta" << endl;
    cout << "6. Pretraga pacijenta" << endl;
    cout << "7. Izlaz" << endl;
    cout << "Izaberite opciju: ";
    
}
void administatorMeni(){
        cout << "1. Dodaj doktora" << endl;
        cout << "2. Ukloni doktora" << endl;
        cout << "3. Pregled doktora" << endl;
        cout << "4. Izmjena doktora" << endl;
        cout << "5. Dodjeljivanje doktora pacijentu" << endl;
        cout << "6. Izlaz" << endl;
        cout << "Izaberite opciju: ";
    }
void pacijentMeni(){
        cout<<"1. Prikazi moje termine"<<endl;
        cout<<"2. Prikazi moje podatke"<<endl;
        cout << "3. Izlaz" << endl;
        cout << "Izaberite opciju: ";
}

void dodajAdminastratora(vector<Administrator> &administratori){
        string  lozinka;
        cout << "Unesite lozinku: ";
        cin >> lozinka;

        Administrator noviAdministrator(lozinka);
        administratori.push_back(noviAdministrator);
        cout << "Administrator uspesno dodat." << endl;
        system("pause");
        system("cls");
}
bool provjeraAdminastratora(vector<Administrator> &administratori,string lozinka){
        for (auto &a : administratori) {
            if (a.getLozinka() == lozinka) {
                cout << "Uspesna prijava." << endl;
                return true;
            }
        }
        cout << "Neuspjesna prijava. Pogresna lozinka." << endl;
        return false;
}

void izmjenapodatakaDoktora(vector<Doktor> &doktori){
        
        if(doktori.empty()){
            cout << "Nema registrovanih doktora." << endl;
            return;
        }
        cout<< "Lista doktora:" << endl;
        for (auto d: doktori) {
            cout << "------------------------" << endl;
            d.IspisiPodatke();
            cout << "------------------------" << endl;
        }
        string jmbg;
        cout << "Unesite JMBG doktora cije podatke zelite izmijeniti: ";
        cin >> jmbg;

        bool pronadjen = false;

        for (Doktor &d : doktori) {  
            if (d.getJmbg() == jmbg) {
                pronadjen = true;

                cout << "Doktor pronadjen. Unesite nove podatke." << endl;
                cout << "Sta zelite izmijeniti?" << endl;
                cout << "1. Specijalizacija" << endl;
                cout << "2. Radno vrijeme" << endl;
                cout << "3. Plata" << endl;

                int izbor;
                cin >> izbor;

                switch (izbor) {
                    case 1: {
                        string specijalizacija;
                        cin.ignore();
                        cout << "Unesite novu specijalizaciju: ";
                        getline(cin, specijalizacija);
                        d.setSpecijalizacija(specijalizacija);
                        break;
                    }
                    case 2: {
                        string radnoVrijeme;
                        cin.ignore();
                        cout << "Unesite novo radno vrijeme: ";
                        getline(cin, radnoVrijeme);
                        d.setRadnoVrijeme(radnoVrijeme);
                        break;
                    }
                    case 3: {
                        string plata;
                        cin.ignore();
                        cout << "Unesite novu platu: ";
                        getline(cin, plata);
                        d.setPlata(plata);
                        break;
                    }
                    default:
                        cout << "Pogresan unos." << endl;
                }

                break; 
            }
        }

        if (!pronadjen) {
            cout << "Doktor sa unesenim JMBG nije pronadjen." << endl;
        }
        if (pronadjen) {
            cout << "Podaci uspesno izmijenjeni." << endl;
        }
        system("pause");
        system("cls");
}
void dodajDoktora(vector<Doktor> &doktori,vector<Pacijent> &pacijenti){
      
        string jmbg, ime, prezime, adresa, telefon, specijalizacija, radnoVrijeme, plata;
        int godinaRodjenja;
        int odabir;
        string odjeljenje;
        vector<string> dodijeljeniPacijenti;
        
        cout << "Unesite JMBG: ";
        cin >> jmbg;
        while(!provjeraJMBG(jmbg)){
            cout << "JMBG mora imati 13 cifara i ne smije sadrzavati karaktere! Unesite ponovo JMBG: ";
            cin >> jmbg;
        }
        while(true){
            bool postoji = false;
            for (auto &d : doktori) {
                if (d.getJmbg() == jmbg) {
                    postoji = true;
                    break;
                }
            }
            for (auto &p : pacijenti) {
                if (p.getJmbg() == jmbg) {
                    postoji = true;
                    break;
                }
            }
            if (postoji) {
                cout << "Doktor ili pacijent sa unesenim JMBG vec postoji. Unesite drugi JMBG: ";
                cin >> jmbg;
                 while(!provjeraJMBG(jmbg)){
                cout << "JMBG mora imati 13 cifara i ne smije sadrzavati karaktere! Unesite ponovo JMBG: ";
                cin >> jmbg;
                }   

            }  
            else {
                break;
            }
        }
        cin.ignore();
        cout << "Unesite ime: ";
        getline(cin, ime);

        cout << "Unesite prezime: ";
        getline(cin, prezime);

        cout << "Unesite adresu: ";
        getline(cin, adresa);

        cout << "Unesite telefon: ";
        getline(cin, telefon);

        cout << "Unesite godinu rodjenja: ";
        cin >> godinaRodjenja;
        cin.ignore(); 

        cout << "Unesite specijalizaciju: ";
        getline(cin, specijalizacija);

        cout << "Unesite radno vrijeme: ";
        getline(cin, radnoVrijeme);

        cout << "Unesite platu: ";
        getline(cin, plata);
        cout<<"Odjeljenja dostupna za doktore: "<<endl;
        cout<<"1. Odjel internih bolesti"<<endl;
        cout<<"2. Pedijatrijski odjel"<<endl;
        cout<<"3. Odjel za hirurgiju"<<endl;
        cout << "Unesite odjeljenje: ";
        cin >> odabir;
        switch(odabir){
            case 1:
                {
                    odjeljenje = "Odjel internih bolesti";
                    break;
                }
            case 2:
                {
                    odjeljenje = "Pedijatrijski odjel";
                    break;
                }
            case 3:
                {
                    odjeljenje = "Odjel za hirurgiju";
                   
                    break;
                }
            default:
                cout << "Pogresan unos odjeljenja. Doktor nije dodat." << endl;
                system("pause");
                system("cls");
                return;
        }
        

        Doktor noviDoktor(jmbg, ime, prezime, adresa, telefon, godinaRodjenja, specijalizacija, radnoVrijeme, plata, dodijeljeniPacijenti, odjeljenje);
        doktori.push_back(noviDoktor);
        cout << "Doktor uspesno dodat." << endl;
        system("pause");
        system("cls");
}
void pregledDoktora(vector<Doktor> &doktori){
       
        if(doktori.empty()){
            cout << "Nema registrovanih doktora." << endl;
            return;
        }  
        cout << "Lista doktora:" << endl;
        for (auto d: doktori) {
            cout << "------------------------" << endl;
            d.IspisiPodatke();
            cout << "------------------------" << endl;
        }
        system("pause");
        system("cls");
    }
void ukloniDoktora(vector<Doktor> &doktori){
        
        if(doktori.empty()){
            cout << "Nema registrovanih doktora." << endl;
            return;
        }
        cout<< "Lista doktora:" << endl;
        for (auto d: doktori) {
            cout << "------------------------" << endl;
            d.IspisiPodatke();
            cout << "------------------------" << endl;
        }
        string jmbg;
        cout << "Unesite JMBG doktora kojeg zelite ukloniti: ";
        cin >> jmbg;

        auto it = find_if(doktori.begin(), doktori.end(), [&jmbg](Doktor &d) {
            return d.getJmbg() == jmbg;
        });

        if (it != doktori.end()) {
            doktori.erase(it);
            cout << "Doktor uspesno uklonjen." << endl;
        } else {
            cout << "Doktor sa unesenim JMBG nije pronadjen." << endl;
        }
        system("pause");
        system("cls");
    }
void dodajDoktoraPacijentu(vector<Pacijent> &pacijenti,vector<Doktor> &doktori){
    cout << "Lista pacijenata:" << endl;
    for (auto &p : pacijenti) {
        cout << "---------------------------------------------------------------" << endl;
        cout << "JMBG: " << p.getJmbg() << ", Ime: " << p.getIme() << " " << p.getPrezime() << endl;
        cout << "---------------------------------------------------------------" << endl;
    }
    cout<<"Unesi jmbg pacijenta kojem zelis dodijeliti doktora: ";
    string jmbg;
    cin.ignore();
    getline(cin, jmbg);
    for(auto &p : pacijenti){
        if(p.getJmbg()==jmbg){
            cout << "Lista doktora: "<<endl;
            for(auto &d : doktori) {
                cout << "------------------------" << endl;
                d.IspisiPodatke();
                cout << "------------------------" << endl;
            }
            cout << "Unesite jmbg doktora kojeg zelite dodijeliti pacijentu: ";
            string jmbgDoktora;
            getline(cin, jmbgDoktora);
            for(auto &d : doktori){
                if(d.getJmbg()==jmbgDoktora){
                    p.setDodjeljeniDoktor(d.getIme() + " " + d.getPrezime());
                    vector<string> dodijeljeniPacijenti= d.getDodjeljeniPacijenti();;
                    dodijeljeniPacijenti.push_back(p.getIme() + " " + p.getPrezime());
                    d.setDodjeljeniPacijenti(dodijeljeniPacijenti);
                    cout << "Doktor uspesno dodijeljen pacijentu." << endl;
                    system("pause");
                    system("cls");
                    return;
                }
            }
            cout << "Doktor sa unesenim JMBG nije pronadjen." << endl;
            return;
        }
    }
    system("pause");
    system("cls");
}

void pregledPacijenata(vector<Pacijent> &pacijenti) {
    if (pacijenti.empty()) {
        cout << "Nema registrovanih pacijenata." << endl;
        return;
    }
    cout << "Lista pacijenata:" << endl;

    for (auto p: pacijenti) {
        cout << "------------------------" << endl;
        p.IspisiPodatkePacijenta();
        cout << "------------------------" << endl;
    }
    system("pause");
    system("cls");
}
void dodavanjePacijenta(vector<Pacijent> &pacijenti, vector<Doktor> &doktori) {
    string jmbg, ime, prezime, adresa, telefon, brojKartona, krvnaGrupa, dijagnoza;
    int godinaRodjenja;
    string dodjeljenidoktor;
    bool osiguran;
    vector<string> alergije;
    vector<string> terminiPregleda;
    vector<string> terminiPregledaVrijeme;
    int brojAlergija;

    cout << "Unesite JMBG: ";
    cin >> jmbg;
    while(!provjeraJMBG(jmbg)){
            cout << "JMBG mora imati 13 cifara i ne smije sadrzavati karaktere! Unesite ponovo JMBG: ";
            cin >> jmbg;
        }
    while(true){
        bool postoji = false;
        for (auto &p : pacijenti) {
            if (p.getJmbg() == jmbg) {
                postoji = true;
                break;
            }
        }
        for(auto &d : doktori){
            if(d.getJmbg() == jmbg){
                postoji = true;
                break;
            }
        }
        if (postoji) {   
            cin.ignore();
            cout << "Pacijent ili doktor sa unesenim JMBG vec postoji. Unesite drugi JMBG: ";
            getline(cin,jmbg);
            while(!provjeraJMBG(jmbg)){
            cout << "JMBG mora imati 13 cifara i ne smije sadrzavati karaktere! Unesite ponovo JMBG: ";
            getline(cin,jmbg);
        }

        } else {
            break;
        }
    }
    cin.ignore();
    cout << "Unesite ime: ";
    getline(cin, ime);

    cout << "Unesite prezime: ";
    getline(cin, prezime);

    cout << "Unesite adresu: ";
    getline(cin, adresa);

    cout << "Unesite telefon: ";
    getline(cin, telefon);

    cout << "Unesite godinu rodjenja: ";
    cin >> godinaRodjenja;
    cin.ignore(); 

    cout << "Unesite broj kartona: ";
    getline(cin, brojKartona);

    cout << "Unesite krvnu grupu: ";
    getline(cin, krvnaGrupa);

    cout << "Da li je pacijent osiguran (1 - da, 0 - ne): ";
    cin >> osiguran;

    cout << "Unesite broj alergija: ";
    cin >> brojAlergija;
    cin.ignore();
    for (int i = 0; i < brojAlergija; i++) {
        string alergija;
        cout << "Unesite alergiju " << i + 1 << ": ";

        getline(cin,alergija);
       
        alergije.push_back(alergija);
       
    }

    cout << "Unesite dijagnozu: ";
    getline(cin,dijagnoza);

    cout << "Unesite broj termina koje zelite dodati: ";
    int brojTermina;
    cin >> brojTermina;
    cin.ignore();
    for (int i = 0; i < brojTermina; i++) {
        string termin;
        string terminVrijeme;
        cout << "Unesite datum termina " << i + 1 << ": ";
        getline(cin, termin);
        cout << "Unesite vrijeme termina " << i + 1 << ": ";
        getline(cin, terminVrijeme);
        terminiPregleda.push_back(termin);
        terminiPregledaVrijeme.push_back(terminVrijeme);    
    }
    

    Pacijent noviPacijent(jmbg, ime, prezime, adresa, telefon, godinaRodjenja, brojKartona, krvnaGrupa, osiguran,terminiPregleda,terminiPregledaVrijeme, alergije, dijagnoza,dodjeljenidoktor);
    pacijenti.push_back(noviPacijent);
    cout << "Pacijent uspesno dodat." << endl;
    system("pause");
    system("cls");
}
void izmjenaPodatakaPacijenta(vector<Pacijent> &pacijenti) {
    cout << "Lista pacijenata:" << endl;
    for (auto &p : pacijenti) {
        cout << "---------------------------------------------------------------" << endl;
        cout << "JMBG: " << p.getJmbg() << ", Ime: " << p.getIme() << " " << p.getPrezime() << endl;
        cout << "---------------------------------------------------------------" << endl;
    }
    string jmbg;
    cout << "Unesite JMBG pacijenta cije podatke zelite izmijeniti: ";
    cin >> jmbg;

    bool pronadjen = false;

    for (Pacijent &p : pacijenti) {  
        if (p.getJmbg() == jmbg) {
            pronadjen = true;

            cout << "Pacijent pronadjen. Unesite nove podatke." << endl;
            cout << "Sta zelite izmijeniti?" << endl;
            cout << "1. Adresa" << endl;
            cout << "2. Telefon" << endl;
            cout << "3. Dijagnoza" << endl;
            cout << "4. Stanje osiguranja" << endl;
            cout << "5. Alergije" << endl;
            cout << "6. Termini pregleda" << endl;

            int izbor;
            cin >> izbor;

            switch (izbor) {
                case 1: {
                    string adresa;
                    cin.ignore();
                    cout << "Unesite novu adresu: ";
                    getline(cin, adresa);
                    p.setAdresa(adresa);
                    break;
                }
                case 2: {
                    string telefon;
                    cin.ignore();
                    cout << "Unesite novi telefon: ";
                    getline(cin, telefon);
                    p.setTelefon(telefon);
                    break;
                }
                case 3: {
                    string dijagnoza;
                    cin.ignore();
                    cout << "Unesite novu dijagnozu: ";
                    getline(cin, dijagnoza);
                    p.setDijagnoza(dijagnoza);
                    break;
                }
                case 4: {
                    bool osiguran;
                    cout << "Da li je pacijent osiguran (1 - da, 0 - ne): ";
                    cin >> osiguran;
                    p.setOsiguran(osiguran);
                    break;
                }
                case 5: {
                    int brojAlergija;
                    vector<string> alergije;

                    cout << "Unesite broj alergija: ";
                    cin >> brojAlergija;
                    cin.ignore();

                    for (int i = 0; i < brojAlergija; i++) {
                        string alergija;
                        cout << "Unesite alergiju " << i + 1 << ": ";
                        getline(cin, alergija);
                        alergije.push_back(alergija);
                    }

                    p.setAlergije(alergije);
                    break;
                }
                case 6:
                    {
                    int brojTermina;
                    vector<string> terminiPregleda;
                    vector<string> terminiPregledaVrijeme;

                    cout << "Unesite broj termina u danu: ";
                    cin >> brojTermina;
                    cin.ignore();

                    for (int i = 0; i < brojTermina; i++) {
                        string termin;
                        string terminVrijeme;
                        cout << "Unesite datum termina " << i + 1 << ": ";
                        getline(cin, termin);
                        cout << "Unesite vrijeme termina " << i + 1 << ": ";
                        getline(cin, terminVrijeme);
                        terminiPregleda.push_back(termin);
                        terminiPregledaVrijeme.push_back(terminVrijeme);

                    }

                    p.setTerminPregleda(terminiPregleda);
                    p.setTerminPregledaDatumVrijeme(terminiPregledaVrijeme);
                    break;
                }
                default:
                    cout << "Pogresan unos." << endl;
            }

            break; 
        }
    }

    if (!pronadjen) {
        cout << "Pacijent sa unesenim JMBG nije pronadjen." << endl;
    }
    if (pronadjen) {
        cout << "Podaci uspesno izmijenjeni." << endl;
    }
    system("pause");
    system("cls");
}
void brisanjePacijenta(vector<Pacijent> &pacijenti) {
    
    cout << "Lista pacijenata:" << endl;
    for (auto &p : pacijenti) {
        cout << "---------------------------------------------------------------" << endl;
        cout << "JMBG: " << p.getJmbg() << ", Ime: " << p.getIme() << " " << p.getPrezime() << endl;
        cout << "---------------------------------------------------------------" << endl;
    }
    string jmbg;
    cout << "Unesite JMBG pacijenta kojeg zelite obrisati: ";
    cin >> jmbg;

    auto it = find_if(pacijenti.begin(), pacijenti.end(), [&jmbg](Pacijent &p) {
        return p.getJmbg() == jmbg;
    });

    if (it != pacijenti.end()) {
        pacijenti.erase(it);
        cout << "Pacijent uspesno obrisan." << endl;
    } else {
        cout << "Pacijent sa unesenim JMBG nije pronadjen." << endl;
    }
    system("pause");
    system("cls");
}
void dodajTerminPregleda(vector<Pacijent> &pacijent){
    string terminDatum, terminVrijeme;
    string jmbg;
    cout << "Lista pacijenata:" << endl;
        for (auto &p : pacijent) {
        cout << "---------------------------------------------------------------" << endl;
        cout << "JMBG: " << p.getJmbg() << ", Ime: " << p.getIme() << " " << p.getPrezime() << endl;
        cout << "---------------------------------------------------------------" << endl;
        }
    cout<<"Unesi jmbg pacijenta za kojeg zelis dodati termin: ";
    cin.ignore();
    getline(cin, jmbg);

    for(auto &p : pacijent){
        if(p.getJmbg()==jmbg){
            cout << "Unesite datum termina (DD.MM.GGGG): ";
            getline(cin, terminDatum);
            cout << "Unesite vrijeme termina (HH:MM): ";
            getline(cin, terminVrijeme);
            auto terminiPregleda = p.getTerminPregleda();
            auto terminiPregledaVrijeme = p.getTerminPregledaDatumVrijeme();
            terminiPregleda.push_back(terminDatum);
            terminiPregledaVrijeme.push_back(terminVrijeme);
            p.setTerminPregleda(terminiPregleda);
            p.setTerminPregledaDatumVrijeme(terminiPregledaVrijeme);
            cout << "Termin uspesno dodat." << endl;
            system("pause");
            system("cls");
            return;
        }
    }
}

bool provjeraJMBG(const string jmbg) {
    if (jmbg.length() != 13)
        return false;

    for (char c : jmbg) {
        if (!isdigit(c))
            return false;
    }
    return true;
}

void pretragaPacijentaMenu(const vector<Pacijent>& pacijenti) {
    if (pacijenti.empty()) {
        cout << "Nema registrovanih pacijenata." << endl;
        system("pause");
        system("cls");
        return;
    }

    int izbor;

    do {
        cout << "1. Pretraga po JMBG" << endl;
        cout << "2. Pretraga po imenu i prezimenu" << endl;
        cout << "3. Pretraga po dijagnozi" << endl;
        cout << "4. Povratak na prethodni meni" << endl;
        cout << "Izaberite opciju: ";
        cin >> izbor;

        system("cls");

        switch (izbor) {

        case 1: {
            string jmbg;
            cout << "Unesite JMBG pacijenta: ";
            cin >> jmbg;

            bool pronadjen = false;

            for ( auto p : pacijenti) {
                if (p.getJmbg() == jmbg) {
                    cout << "\nPacijent pronadjen:\n";
                    cout << "------------------------" << endl;
                    p.IspisiPodatkePacijenta();
                    cout << "------------------------" << endl;
                    pronadjen = true;
                    break;
                }
            }

            if (!pronadjen) {
                cout << "Pacijent sa unesenim JMBG nije pronadjen." << endl;
            }

            system("pause");
            system("cls");
            break;
        }

        
        case 2: {
            string ime, prezime;
            cin.ignore();
            cout << "Unesite ime: ";
            getline(cin, ime);
            cout << "Unesite prezime: ";
            getline(cin, prezime);

            bool pronadjen = false;

            for (auto p : pacijenti) {
                if (p.getIme() == ime && p.getPrezime() == prezime) {
                    cout << "------------------------" << endl;
                    p.IspisiPodatkePacijenta();
                    cout << "------------------------" << endl;
                    pronadjen = true;
                }
            }

            if (!pronadjen) {
                cout << "Nema pacijenata sa unesenim imenom i prezimenom." << endl;
            }

            system("pause");
            system("cls");
            break;
        }

        case 3: {
            string dijagnoza;
            cin.ignore();
            cout << "Unesite dijagnozu: ";
            getline(cin, dijagnoza);

            bool pronadjen = false;

            for ( auto p : pacijenti) {
                if (p.getDijagnoza() == dijagnoza) {
                    cout << "------------------------" << endl;
                    p.IspisiPodatkePacijenta();
                    cout << "------------------------" << endl;
                    pronadjen = true;
                }
            }

            if (!pronadjen) {
                cout << "Nema pacijenata sa unesenom dijagnozom." << endl;
            }

            system("pause");
            system("cls");
            break;
        }

        case 4:
            return;

        default:
            cout << "Pogresan unos." << endl;
            system("pause");
            system("cls");
        }

    } while (true);
}
void pacijentPrikazTermina(vector<Pacijent>& pacijenti){
    string jmbg;
    bool pronadjen=false;
    cin.ignore();
    cout << "Unesite vas JMBG: ";
    getline(cin,jmbg);
    for (auto p : pacijenti) {
        if (p.getJmbg() == jmbg) {
            pronadjen=true;
            cout << "Vasi termini pregleda:\n";
                    for (int i = 0; i < p.getTerminPregleda().size(); i++) {
                        cout << p.getTerminPregleda()[i]<< " " << p.getTerminPregledaDatumVrijeme()[i] << endl;
                    }  
            }
    }
    if(pronadjen==false){
        cout<<"Pacijent nije pronadjen"<<endl;
    }
    system("pause");
    system("cls");
}
void prikaziPacijenta(vector<Pacijent>& pacijenti){
    string jmbg;
    bool pronadjen=false;
    cin.ignore();
    cout << "Unesite vas JMBG: ";
    getline(cin,jmbg);
    for (auto& p : pacijenti) {
        if (p.getJmbg() == jmbg) {
            p.IspisiPodatkePacijenta();
            pronadjen=true;
        }
    }
    if(pronadjen==false){
        cout<<"Pacijent nije pronadjen"<<endl;
    }
    system("pause");
    system("cls");

}

int main() {
    system("cls");
    vector<Doktor> doktori;
    vector<Pacijent> pacijenti;
    vector<Administrator> administrator;
    string  lozinka;
    cout << "Dobrodosli u bolnicki informativni sistem!" << endl;
    cout << R"(

                              +------------------------+
                              | ODJEL INTERNIH BOLESTI |
                              +-----------+------------+
                                          |
                   +----------------------+--------------------+
                   |                      |                    |
        +----------+----------+      +----+----+       +-------+---------+
        | PEDIJATRIJSKI ODJEL |      |    H+   |       | ODJEL HIRURGIJE |
        +---------------------+      +----+----+       +-----------------+
                                          |
                                   +------+------+
                                   |   PRIJEM    |
                                   +-------------+

    )"<<endl; 
    cout<< "Sifra za glavnog administratora " << endl;
    dodajAdminastratora(administrator); 
    int odabir=0;
    bool programRadi=true;

    while(programRadi){  
        loginMeni();
        cin >> odabir;

        switch(odabir)
        {
            case PRIJAVA_DOKTOR: {
                system("pause");
                system("cls");
                
                cout << "Prijava kao doktor" << endl;
                int izbor=0;
                do{
                doktorMeni();
                cin >> izbor;
                system("cls");

                    switch(izbor)
                    {
                    case DOKTOR_PREGLED_PACIJENATA:
                        pregledPacijenata(pacijenti);
                        break;
                    case DOKTOR_DODAVANJE_PACIJENTA:
                        dodavanjePacijenta(pacijenti,doktori);
                        break;
                    case DOKTOR_IZMJENA_PODATAKA_PACIJENTA:
                        izmjenaPodatakaPacijenta(pacijenti);
                        break;
                     case DOKTOR_DODAJ_TERMIN_PREGLEDA:
                        dodajTerminPregleda(pacijenti);
                        break;
                    case DOKTOR_BRISANJE_PACIJENTA:
                        brisanjePacijenta(pacijenti);
                        break;
                    case DOKTOR_PRETRAGA_PACIJENTA:
                        pretragaPacijentaMenu(pacijenti);
                        break;
                    case DOKTOR_IZLAZ:
                        cout << "Izlaz iz doktorskog menija" << endl;
                        break;
                    default: 
                        cout << "Pogresan unos, pokusajte ponovo." << endl;
                
                    }
                }while(izbor!=7);
                break;
            }
            case PRIJAVA_ADMINISTRATOR:{
                system("pause");
                system("cls");
                cout << "Prijava kao administrator" << endl;
                int izbor=0;
                cin.ignore();
              
                cout << "Unesite lozinku: ";
                getline(cin, lozinka);
                if(!provjeraAdminastratora(administrator,lozinka)){
                    system("pause");
                    system("cls");
                    break;
                }
                else{
                do{
                administatorMeni();
                cin >> izbor;
                system("cls");
                    switch(izbor)
                    {
                    case ADMIN_DODAJ_DOKTORA:
                        dodajDoktora(doktori,pacijenti);
                        break;
                    case ADMIN_UKLONI_DOKTORA:
                        ukloniDoktora(doktori);
                        break;
                    case ADMIN_PREGLED_DOKTORA:
                        pregledDoktora(doktori);
                        break;
                    case ADMIN_IZMJENA_DOKTORA:
                        izmjenapodatakaDoktora(doktori);
                        break;
                    case ADMIN_DODJELJIVANJE_DOKTORA_PACIJENTU:
                        dodajDoktoraPacijentu(pacijenti,doktori);
                        break;
                    case ADMIN_IZLAZ:
                        cout << "Izlaz iz admin menija" << endl;
                        break;
                    default: 
                        cout << "Pogresan unos, pokusajte ponovo." << endl;
                
                    }
                }while(izbor!=6);
                break;
                }

            }
            case PRIJAVA_PACIJENT:{
                system("pause");
                system("cls");
                
                cout << "Prijava kao pacijent" << endl;
                int izbor=0;
                do{
                pacijentMeni();
                cin >> izbor;
                system("cls");
                switch (izbor){
                    case PACIJENT_PRIKAZ_TERMINA:
                    pacijentPrikazTermina(pacijenti);
                    break;
                    case PACIJENT_PRIKAZ_PODATAKA:
                    prikaziPacijenta(pacijenti);
                    break;
                    case PACIJENT_IZLAZ:
                    cout << "Izlaz iz pacijent menija" << endl;
                    break;
                }
                }while(izbor!=3);
                break;
            }
        case IZLAZ:
            cout << "Izlaz iz programa" << endl;
            programRadi=false;
            break;
        default:
             cout << "Pogresan unos, pokusajte ponovo." << endl;
        }
    }

    return 0;
}
