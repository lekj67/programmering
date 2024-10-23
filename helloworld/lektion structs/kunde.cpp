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


kunde et{"daniel", 3445642, "lagade", 33, 45000};

int main(){


    cout << et.navn << "\n"; 
    cout << et.tlfnr << "\n";
    cout << et.vejnavn << "\n";
    cout << et.husnr <<  "\n";
     cout << et.formue << "\n";
 return 0;
}
  

