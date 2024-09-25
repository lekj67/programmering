#include <iostream>
#include <string>

//password tester
using namespace std;
int main() { 
while(true) { 
string kode; 


cout << "lad os se om din kode er ok\n";
cin >> kode;
cout << "\n";

 int pss = kode.size();
// her tjekker du begge samtidig, både om den er over 8 og under 16
if ((pss > 8) & (pss < 16 )) {
cout << "din kode er  lang nok\n";

 }

else if( pss > 16){
cout << " din kode er for lang\n";
}

else if (pss == 8 || 16){
cout << "din kode er lang nok\n"; 

}

else if (pss > 8) {

cout << " din kode er for kort\n";

}

 }
}
