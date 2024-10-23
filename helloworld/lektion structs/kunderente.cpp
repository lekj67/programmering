#include <iostream>
#include <string>
using namespace std; 



struct kunde {

string navn; 
int tlfnr; 
string vejnavn;
int husnr; 
double formue;

}; 


kunde et{"daniel", 3445642, "lagade", 33, 50000};



int main() {
double loan = et.formue; // deklaration
float rente = 0; // initiliasion

//cout << "hvor mange penge vil du låne\n"; // cout = print kommando

//cin >> loan; // cin for at tage bruger input

 if ( loan < 100000) {

 rente = 2.5;

cout << "din renter på et år bliver " << ( loan / 100.0 ) * rente;
}

else if (( loan >=250000) && (loan <= 100000)) {

 rente = 3.75;

    cout << "din renter på et år bliver " << ( loan / 100.0 ) * rente;
}
else if ((loan > 250000) && ( loan < 500000)) {
rente = 5.0;

cout << "din renter på et år bliver " << ( loan / 100.0 ) * rente - 600;
} 

else if ( loan > 500000)

cout << "din renter på et år bliver " << ( loan / 100.0 ) * rente - 1200;

return 0;
system("pause");
}
