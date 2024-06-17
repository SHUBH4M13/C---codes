#include<iostream>
#include<string>
#include<stack>
using namespace std;

stack<string> s1; // Back stack
stack<string> s2; // Forward stack
string currentPage = "google.com";

void visitNewPages( stack<string>& backStack, stack<string>& forwardStack, string& currentPage ){
    string newpage;
    cin>>newpage;
    s1.push(newpage);
}


void visitNewPage(stack<string>& backStack, stack<string>& forwardStack, string& currentPage) {
    cout << "Enter new page URL: ";
    string newPage;
    cin >> newPage;
    
    backStack.push(newPage);
    currentPage = newPage;

    // Clear forward stack as we're visiting a new page
    while (!forwardStack.empty()) {
        forwardStack.pop();
    }
    
    cout << "Current page: " << currentPage << endl;
}


void goBack(stack<string>& backStack, stack<string>& forwardStack, string& currentPage) {
    if (backStack.empty()) {
        cout << "No pages in back history." << endl;
        return;
    }
    forwardStack.push(currentPage);
    backStack.pop();
    cout << "Current page: " << backStack.top() << endl;

}


void go(stack<string>& backStack, stack<string>& forwardStack, string& currentPage) {
    if (forwardStack.empty()) {
        cout << "No pages in forward page." << endl;
        return;
    }
    
    cout << "Current page: " << forwardStack.top() << endl;

}


void displayMenu() {
    cout << "\nBrowser Navigation Menu:\n";
    cout << "1. Visit new page\n";
    cout << "2. Go back\n";
    cout << "3. go forward\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

void handleChoice(int choice, stack<string>& backStack, stack<string>& forwardStack, string& currentPage) {
    switch (choice) {
        case 1:
            visitNewPage(backStack, forwardStack, currentPage);
            break;
        case 2:
            goBack(backStack, forwardStack, currentPage);
            break;
        case 3:
            go(backStack, forwardStack, currentPage);
        case 0:
            cout << "Exiting browser navigation.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
    }
}

int main(){
    int choice;
     do {
        displayMenu();
        cin>>choice;
        handleChoice(choice, s1, s2, currentPage);
    } while (choice != 0);

}
