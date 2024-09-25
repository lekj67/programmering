#include <iostream>


int main(){

int amount;

std::cout << "hvor meget vil du be om\n"; 

std::cin >> amount; 

if(amount < 1000 ) {
std::cout << "du skal mininum be om 1000kr\n"; 
 }
else if (amount > 1000) {

std::cout << "wehe"; 

}
return 0;
 }

