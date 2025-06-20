#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "commands.h"
using namespace std;

int main(){
    string input;
    string username = "Bbshell";

    system("clear");

    while (true) {
        cout << ">> ";
        getline(cin,input);
        handleCommand(input, username);
    }
}
