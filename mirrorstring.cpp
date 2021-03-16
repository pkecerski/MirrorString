#include <iostream>
#include <string>

using namespace std;

string mirrorstring(string &sIn);
string sInput;

int main(){
    printf("Please insert your string: ");
    getline(cin, sInput);
    printf("You entered: %s\n", sInput.c_str());
    cout << "The reverse of that is: " << mirrorstring(sInput) << endl;
}

string mirrorstring(string &sIn){
    char sResult[sIn.length()];
    string sOut;

    for(int i=0; i<=sIn.length(); i++){
        sOut += sIn[sIn.length()-i];
    }
    return sOut;
}