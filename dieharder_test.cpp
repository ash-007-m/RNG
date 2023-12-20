#include <cstdlib>  
#include<iostream>
using namespace std;

int main() {

    const char* command = "dieharder -a -f random_numbers > dieharder_results.txt";
    int result = system(command);
    if (result == 0) {
        std::cout << "dieharder executed successfully." << std::endl;
    } else {
        std::cerr << "dieharder execution failed." << std::endl;
    }
    return 0;
}
