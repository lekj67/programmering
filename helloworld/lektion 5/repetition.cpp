#include<iostream> 

using namespace std; 



int main() {
    string kode;
    int pss;

    do {
        cout << "Hvad er din kode?\n"; 
        cin >> kode; 
        pss = kode.length(); // Update the length after user input

        if (pss < 8 || pss > 16) {
            cout << "Din kode er ikke lang nok.\n";
        } 
        else if (pss >= 8 && pss <= 16) {
            cout << "Din kode er lang nok.\n";
        }
    } while (pss < 8 || pss > 16); // Loop until valid length

    // Once the loop exits, we know the length is correct
    cout << "Din kode er god.\n";

    return 0; 
}


    
