#include <iostream>
using namespace std;

void badWelcomeProgram() {
    string name, response;
    int age;

    cout << "What's your name? "; 
    cin >> name;
    //getline(cin, name);

    cout << "What's your age? ";
    cin >> age;
  //  age = getInteger("What's your age? ");
    
    cout << "Hello " << name << " (age " << age << ")" << "\n";

    cout << "Do you want to try again? ";
    cin >> response;
    //getline(cin, response);

    cout << "You said: " << response << endl;
}

int main() {
    
    badWelcomeProgram();

    return 0;
}