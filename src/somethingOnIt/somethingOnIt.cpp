#include <string>
using namespace std;

int somethingOnIt(const string& input) {
    int counter = 0;
    if(input[0] == 'o') counter++;
    if(input[1] == 'o') counter++;
    if(input[2] == 'o') counter++;
    return 700 + counter*100;
}
