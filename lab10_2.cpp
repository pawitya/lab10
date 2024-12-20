#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream source;
    ofstream dest;

    source.open("cheerbook.txt"); 
    dest.open("cheerbook_copy.txt"); 

    if (!source) {
        cerr << "Error: Cannot open cheerbook.txt" << endl;
        return 1;
    }

    if (!dest) { 
        cerr << "Error: Cannot create cheerbook_copy.txt" << endl;
        return 1;
    }

    dest << "-------------------- BOOM ---------------------" << endl;

    string line;
    while (getline(source, line)) {
        dest << line << endl;
    }

    dest << "-------------------- HA!! ---------------------" << endl;

    source.close();
    dest.close();

    return 0;
}