#include <string>
using namespace std;

string oddEven(unsigned int a, unsigned int b) {
    const unsigned long num = a * b;
    if (num % 2 == 0) {
        return "Even";
    }
    return "Odd";
}

