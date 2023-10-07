#include <iostream>
#include <iomanip>
#include <ios>
#include <limits>
using namespace std;

int main(){

    int a;
    float b;
    char ch;
    string str;

    // cout << "DEVTOWN!"<< endl;

    // cout << "Enter numbers: ";
    // cin >> b >> a;
    // cout << "You entered: " << a << " and " << b << endl;

    // cout << "Enter a number: " << endl;
    // cin >> a;
    // cout << "You entered: " << a << endl;
     
    // cout << "Enter a decimal number: " << endl;
    // cin >> b;
    // cout << "You entered: " << b << endl;

    // cout << "Enter a character: ";
    // cin >> ch;
    // cout << "You entered: " << ch << endl;

    // cout << "Enter a word: " << endl;
    // cin >> str;
    // cout << "You entered: " << str << endl;

    // cout << "Enter a sentence: " << endl;
    // getline(cin, str, '$'); // till dollar symbol it will take as input
    // getline(cin,str); // till enter it will take it as input
    // cout << "You entered: " << str << endl;
 
  // when we take number and input sentence at the same time then buffer creates
  /*
  Input buffer/stream:1 2<\n>
  cin >> a >> b;
  Input buffer/stream:<\n>
  str: ""
  getline(cin, str)
  Input buffer/stream:
  */

 // we can use ws; to remove the whitespace character in buffer(only one white space character)
    // cin >> ws;
    // getline(cin, str); 

// FOR MORE THAN ONE SENTENCE IN THE INPUT AFTER NUMBER THEN
    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    //cin.ignore(100,'\n');
    //cin.ignore(); // it will ignore the first character in the buffer
    //cin.ignore(100); // it will ignore the first 100 character in the buffer
    //cin.ignore(numeric_limits<streamsize>::max()); // it will ignore all the character in the buffer

  // Maniplators
    string s = "Devtown!";
    cout << s << endl;
    cout << setw(20) << s << endl; // setw() is used to set the width of the output
    cout << left << s << endl;
    cout << right << s << endl;     
    cout << setfill('*') << setw(20) << s << endl; // setfill() is used to fill the space with the given character
    cout << setfill('*') << setw(20) << left << s << endl;

    return 0;
    
}