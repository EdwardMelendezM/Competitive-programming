#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputStr, outputStr,outputStrf;
    cin >> inputStr;

    for (int i = 0; i < inputStr.size(); i++) {
        char c = tolower(inputStr[i]);
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
            outputStr += c;
        }
    }
    for (int i = 0; i < outputStr.size(); i++)
    {
        outputStrf += ".";
        outputStrf+= outputStr[i];
    }
    

    cout << outputStrf << endl;

    return 0;
}