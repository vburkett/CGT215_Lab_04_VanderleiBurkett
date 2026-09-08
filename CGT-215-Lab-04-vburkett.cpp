#include <iostream>

using namespace std;

//Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}
void factorial() {
    //Code for the Factorial choice
}
void arithmetic() {
    //Code for the Arithmetic choice
}
void geometric() {
    //Code for the Geometric choice
}
int main(){
    int choice;
    char again;

    do {
        //Creates the menu on startup, and allows the user to input a chosen variable.
        printMenu();
        cin >> choice;

        //Quit if user chooses to exit or inserts any invalid choice.
        if (choice > 3 || choice < 1) {
            return 0;
        }

        //Runs factorial code when value 1 is put into the choice selector
        else if (choice == 1) {
            factorial();
        }
        //Runs arithmetic code when value 2 is put into the choice selector
        else if (choice == 2) {
            arithmetic();
        }
        //Runs geometric code when value 3 is put into the choice selector
        else if (choice == 3) {
            geometric();
        }
        
        //Asks the user whether they want to do another process, and allows them to choose to do so or exit.
        cout << "Go Again? [Y/N] ";
        cin >> again;

    } while (again == 'y' || again == 'Y');
}