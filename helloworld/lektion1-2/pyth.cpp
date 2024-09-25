#include <iostream>
#include <math.h>


int main(){

int side1;
int side2;

std::cout << "hvad er side 1?\n";

std::cin >> side1; 

std::cout << "\n";

std::cout << "hvad er side 2 \n";

std::cin >> side2;

std::cout << "\n";


double svar = (side1 * side1) + (side2 * side2);

std::cout << svar; 







return 0;


}