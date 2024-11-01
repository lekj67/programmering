#include <iostream>
#include <math.h>
#include <ctime>

using namespace std; 
class Kunde {
    private: 
    int cpr; 
    public:
        double formue = 0;
        double rentet = 0;
        double rente = 0; 
        double rente_indtægt = 0; 
        int abonnement;
        void indsæt_penge (double);
        void beregn_abonnement ();
        void rente_indtægter ();
};


void Kunde::indsæt_penge (double beløb) {
    formue = formue + beløb;
     }
     


void Kunde::rente_indtægter() { 
    if (formue < 100000) {
        rente = 0.025;
    } else if (formue >= 100000 && formue <= 250000) {
        rente = 0.0375;
    } else if (formue > 250000) {
        rente = 0.05;
    }
    rente_indtægt = formue * rente;
}



    

void Kunde::beregn_abonnement () {
    if (formue < 100000.0) {
        abonnement = 0;
    }
     else if (100000.0 > formue < 250000.0) {
        abonnement = 50;
    }
     else if (formue >= 250000.0) {
        abonnement = 100;
    };
}

int main () {
time_t now = time(0);
char* dt = ctime(&now);

cout << "klokken er "  << dt << "\n"; 

    Kunde ucl;
    
    std::cout << ucl.formue << std::endl;
    ucl.formue = 778877.0;
    ucl.beregn_abonnement();
    std::cout << ucl.formue << std::endl; 
    std::cout << ucl.abonnement << std::endl;
    ucl.indsæt_penge(4000.0);
    ucl.beregn_abonnement();
    std::cout << ucl.formue << std::endl;
    std::cout << ucl.abonnement << std::endl;
         ucl.rente_indtægter(); 
    std::cout << "u have made many renter " << ucl.rente_indtægt << "\n"; 
   
}