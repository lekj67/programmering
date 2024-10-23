#include <iostream>
#include <string>

using namespace std;
#include<chrono>
#include<thread>
int main() { 


    for (int n=0; n<100; n++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        
        std::cout << n << ", ";
      

    }

std::cout << "tillykke du nåede 100! "; 

return 0;
}