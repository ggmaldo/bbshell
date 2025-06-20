#include "commands.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int help();

void handleCommand(const string& input, string& username) {
    std::istringstream iss(input);
    std::string command;
    double a, b;
    string c;
    char cc;
    bool exitvar = false;

    iss >> command;

    if (command == "add") {
        if (iss >> a >> b) {
            cout << a + b << endl;
        } else {
            cout << "Invalid argue for: ADD" << endl;
        }
    }else if (command == "mul") {
        if (iss >> a >> b) {
            cout << a * b << endl;
        } else {
            cout << "Invalid argue for: MUL" << endl;
        }
    } else if (command == "div") {
        if (iss >> a >> b) {
            if (b != 0)
                cout << a / b << endl;
            else
                cout << "Error: Division by Zero" << endl;
        } else {
            cout << "Invalid argue for: DIV" << endl;
        }
    } else if (command == "res") {
        if (iss >> a >> b) {
            cout << a - b << endl;
        } else {
            cout << "Invalid argue for: RES" << endl;
        }
    } else if (command == "echo") {
        getline(iss, c);
        cout << c << endl;
    } else if (command == "exit") {
        cout << "Exiting...." << endl;
        exitvar = true;
        exit(EXIT_SUCCESS);
    } else if (command == "pow") {
        if (iss >> a >> b) {
            cout << pow(a,b) << endl;
        } else {
            cout << "Invalid argue for: POW" << endl;
        }
    } else if (command == "sqrt") {
        if (iss >> a) {
            cout << sqrt(a) << endl;
        } else {
            cout << "Invalid argue for: SQRT" << endl;
        }
    } else if (command == "fact") {
        if (iss >> a) {
            int vC, vI, vF;
            vF = a;
            vC = vF - 1;
            vI = vC;
            for (int i = 0; i < vC;++i) {
                vF *= vI;
                --vI;
            }
            cout << vF << endl;
        } else {
            cout << "Invalid argue for: FACT" << endl;
        }
    } else if (command == "avg") {
        double total = 0;
        int cont = 0;

        double num;
        while (iss >> num) {
            total += num;
            cont++;
        }

        if (cont > 0) {
            double prom = total / cont;
            cout << prom << endl;
        } else {
            cout << "Invalid argue for: AVG" << endl;
        }
    } else if (command == "help") {
        help();
    } else if (command == "clear") {
        system("clear");
    } else if (command == "whoami") {
        cout << "Username: " << username << endl;
    } else if (command == "Swhoami") {
        if (iss >> c) {
            username = c;
        }
    } else if (command == "time") {
        auto t = time(nullptr);
        auto tm = *localtime(&t);
        cout << put_time(&tm, "DATE: %d-%m-%Y TIME: %H-%M-%S") << endl;
    } else if (command == "even?") {
        if (iss >> a) {
            int ab = a;
            ab = ab % 2;
            if (ab == 0) {
                cout << "Even" << endl;
            } else {
                cout << "Odd" << endl;
            }
        } else {
            cout << "Invalid argue for: EVEN?" << endl;
        }
    } else if (command == "max?") {
        double may;
        if (iss >> a >> b) {
            may = a;
            if (b > a) {
                may = b;
            }
            cout << may << endl;
        } else {
            cout << "Invalid argue for: MAX?" << endl;
        }
    } else if (command == "rand") {
        if (iss >> a >> b) {
            int x = a;
            int y = b;
            int varand = (rand() % y) + x;
            cout << varand << endl;
        } else {
            cout << "Invalid argue for: RAND" << endl;
        }
    } else if (command == "rpt") {
        if (iss >> a >> c) {
            for (int i = 0;i < a;i++) {
                cout << c << " ";

            } cout << " " << endl;
        }
    } else if (command == "info") {
        cout << " Name: " << username << " \n Version: 1.0 \n Author: Gabriel G.M." << endl;
    } else if (command == "fib") {
        if (iss >> a) {
            if (a <= 0) {
                cout << "error: invalid number" << endl;
            } else {
                int mf = 0;
                int ms = 1;
                int sigmf;

                for (int i = 0; i < a; i++) {
                    if (i == 0) {
                        cout << mf << " ";
                    } else if (i == 1) {
                        cout << ms << " ";
                    } else {
                        sigmf = mf + ms;
                        cout << sigmf << " ";
                        mf = ms;
                        ms = sigmf;
                    }
                }
                cout << endl;
            }
        } else {
            cout << "Invalid argue for: FIB" << endl;
        }
    } else if (command == "ascii") {
        if (iss >> cc) {
            cout << static_cast<int>(cc) << endl;
        }
    } else if (command == "count") {
        if (iss >> a >> b) {
            while (a <= b) {
                cout << a << ",";
                ++a;
            } cout << " " << endl;
        }
    } else if (command == "comadd") {
        double total = 0;

        double num;
        int count = 0;
        while (iss >> num) {
            total += num;
            count++;
        }

        if (count > 0) {
            cout << total << endl;
        } else {
            cout << "Invalid argue for: COMADD" << endl;
        }
    } else if (command == "comres") {
        double total = 0;

        double num;
        int count = 0;
        while (iss >> num) {
            total -= num;
            count++;
        }

        if (count > 0) {
            cout << total << endl;
        } else {
            cout << "Invalid argue for: COMRES" << endl;
        }
    } else if (command == "commul") {
        double total = 0;

        double num;
        int count = 0;
        while (iss >> num) {
            total *= num;
            count++;
        }

        if (count > 0) {
            cout << total << endl;
        } else {
            cout << "Invalid argue for: COMMUL" << endl;
        }
    } else if (command == "comdiv") {
        double total = 0;

        double num;
        int count = 0;
        while (iss >> num) {
            total /= num;
            count++;
        }

        if (count > 0) {
            cout << total << endl;
        } else {
            cout << "Invalid argue for: COMDIV" << endl;
        }
    } else if (command == "commax") {
        double total = 0;

        double num, may;
        int count = 0;
        may = -1e9;
        while (iss >> num) {
            if (num > may) {
                may = num;
            }
            count++;
        }

        if (count > 0) {
            cout << may << endl;
        } else {
            cout << "Invalid argue for: COMMAX " << endl;
        }
    } else if (command == "commin") {

        double num, min;
        int count = 0;
        min = 1e9;
        while (iss >> num) {
            if (num < min) {
                min = num;
            }
            count++;
        }

        if (count > 0) {
            cout << min << endl;
        } else {
            cout << "Invalid argue for: COMMIN " << endl;
        }
    } else if (command == "isprime") {
        if (iss >> a) {
            int ap = a;
            bool isPrime = true;

            if (ap <= 1) {
                isPrime = false;
            } else {
                for (int i = 2; i <= sqrt(ap); ++i) {
                    if (ap % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }

            if (isPrime) {
                cout << "True" << endl;
            } else {
                cout << "False" << endl;
            }
        }
    }

    else {
        cout << "Command not recognized: " << command << endl;
    }


}


int help(){
    cout << "\n======= BBSHELL COMMANDS (v1.0) =======\n";

    cout << "\n[ BASIC ]\n";
    cout << "  whoami           - Shows your username (default: bbshell)\n";
    cout << "  Swhoami <name>   - Sets a new username\n";
    cout << "  add x y          - Adds two numbers\n";
    cout << "  res x y          - Subtracts y from x\n";
    cout << "  mul x y          - Multiplies two numbers\n";
    cout << "  div x y          - Divides x by y\n";
    cout << "  echo <text>      - Prints the text\n";
    cout << "  clear            - Clears the screen\n";
    cout << "  exit             - Exits the shell\n";

    cout << "\n[ COMPLEX ]\n";
    cout << "  pow x y          - x raised to the power y\n";
    cout << "  sqrt x           - Square root of x\n";
    cout << "  fact x           - Factorial of x\n";
    cout << "  avg x y ...      - Average of multiple numbers\n";
    cout << "  fib n            - Fibonacci sequence up to n terms\n";
    cout << "  time             - Shows current system time\n";
    cout << "  rand a b         - Random integer between a and b\n";
    cout << "  rpt n <text>     - Repeats the text n times\n";
    cout << "  ascii <char>     - Shows ASCII value of a character\n";
    cout << "  count a b        - Counts from a to b\n";

    cout << "\n[ COM (Multi-Argument Operations) ]\n";
    cout << "  comadd x y z ... - Adds multiple numbers\n";
    cout << "  comres x y z ... - Subtracts all from total\n";
    cout << "  commul x y z ... - Multiplies multiple numbers\n";
    cout << "  comdiv x y z ... - Divides one by all\n";
    cout << "  commax x y z ... - Finds max among inputs\n";
    cout << "  commin x y z ... - Finds min among inputs\n";

    cout << "\n[ LOGIC ]\n";
    cout << "  even? x          - Checks if number is even or odd\n";
    cout << "  max? x y         - Returns greater of two numbers\n";
    cout << "  isprime x        - Checks if x is prime\n";

    cout << "\n[ META ]\n";
    cout << "  info             - Shows system information\n";
    cout << "  help             - Displays this help menu\n";

    cout << "========================================\n\n";
    return 0;
}
