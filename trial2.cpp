#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputStr, appendStr, insertStr;
    int insertPos, eraseStart, eraseCount;

    // Input the initial string
    getline(cin, inputStr);

    // Input the characters to append
    getline(cin, appendStr);

    // Input the characters to insert
    getline(cin, insertStr);

    // Input the position to insert
    cin >> insertPos;

    // Input the starting position to erase
    cin >> eraseStart;

    // Input the number of characters to erase
    cin >> eraseCount;

    // Append characters to the string
    inputStr += appendStr;
    cout << "Modified string after append: " << inputStr << endl;

    // Insert characters into the string
    inputStr.insert(insertPos, insertStr);
    cout << "Modified string after insert: " << inputStr << endl;

    // Erase characters from the string
    inputStr.erase(eraseStart, eraseCount);
    cout << "Modified string after erase: " << inputStr << endl;

    return 0;
}
