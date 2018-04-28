#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // ask for the persons name
    cout << "Please enter your first name: ";

    // read the name
    string name;
    cin >> name;

    // build the message that we intend to write
    const string greeting = "Hello, " + name + "!";

    // the number of blanks surrounding the greeting
    const int pad = 1;

    // total number of rows to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    cout << endl;

    for(int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while(c != cols) {
            if(r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if(r == 0 || r == rows - 1 || c == 0 || c == cols -1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}
