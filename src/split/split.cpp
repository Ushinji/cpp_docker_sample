#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(const string& str, const char& delim) {
    vector<string> elements;
    stringstream ss(str);
    string item;
    while (getline(ss, item, delim)) {
        if(!item.empty()) {
            elements.push_back(item);
        }
    }
    return elements;
}
