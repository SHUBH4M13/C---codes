#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseName(string name) {
    stack<char> charStack;
    string reversedName;

    for (int i = 0; i < name.length(); i++) {
        charStack.push(name[i]);
    }
    
    while (!charStack.empty()) {
        reversedName += charStack.top();
        charStack.pop();
    }

    return reversedName;
}

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    string reversedName = reverseName(name);

    cout << "Reversed name: " << reversedName << endl;

    return 0;
}
