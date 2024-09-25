#include <iostream>
#include <string>

//password tester
using namespace std;
int main() { 
string kode; 

cout << "lad os se om din kode er ok\n";
cin >> kode;
cout << "\n";

if (kode < 8){
cout << "din kode er ikke lang nok\n"
 }
else if( kode > 16){
cout << " din kode er lang nok\n";
}

else if (kode == 8 || 16){
cout << "din kode er lang nok"; 
}







return 0;
}
