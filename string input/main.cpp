/* George Strauch
 * input string, outputs the number of chars in it
 * 2-6-2018
 */

#include <iostream>
#include <string>
using namespace std;



int main() {
    string usr_input = "";


    cout << "Enter a string" << endl;
    //cin.clear();
    //cin.ignore(100, '\n');
    getline(cin, usr_input);
    cout << "your sting is " << usr_input << " the length of that sting is "
        << usr_input.length() << " characters" << endl;

    return 0;
}