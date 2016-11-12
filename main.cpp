#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

int main()
{
    char rasp, varianta;
    double x;
    rasp = 'd';
    while (tolower(rasp) == 'd')
    {
        cout << "Unghiul: "; cin >> x;
        cout << "Ce doriti sa calculati : (s - sin, c - cos, t - tan) : ";
        cin >> varianta;
        switch (varianta) {
        case 's' :
            cout << "sin = " << sin(3.14159 * x / 180.) << endl;
            break;
        case 'c' :
            cout << "cos = " << cos(3.14159 * x / 180.) << endl;
            break;
        case 't' :
            cout << "tan = " << sin(3.14159 * x / 180.)/
                                cos(3.14159 * x / 180.) << endl;
            break;
        default:
            cout << "Caracter incorect!";
        }
        cout << "Mai continuati? (d/n) : ";
        cin >> rasp;
        cin.ignore(15,'\n');
    }
    return 0;
}
