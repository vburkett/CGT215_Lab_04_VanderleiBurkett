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
void factorial(float& N) {
    cout << "Factorial:" << endl;

    //Prompts value entry for n
    cout << "Please enter the value for 'n': ";
    cin >> N;

    unsigned long long factorial = 1; //allows more memory for long results

    //Loop for when N is a negative number, requesting the input be positive
    while (N < 0) {
        cout << "Please enter a positive value for 'n': ";
        cin >> N;
    }
    if (N >= 0){
        cout << N << "! = ";
        //Loop to multiply numbers 1 to n
        for (int i = 1; i <= N; ++i){
            cout << i;
            factorial *= i;
            if (i < N) {
                cout << " * ";
            }
        }
        cout << " = " << factorial << endl;
    }
}
void arithmetic(float& a, float& b, float& c) {
    cout << "Arithmetic Series: " << endl;

    //setup for placeholder variables
    int arithmetictotal;
    int previousb;


    //data entry prompts
    cout << "Please enter the difference for the series: ";
    cin >> a;
    cout << "Please enter the starting number for the series: ";
    cin >> b;
    cout << "How many elements would you like in the series? Please enter here: ";
    cin >> c;

    //loop that ensures the number of elements is not negative
    while (c < 0) {
        cout << "Please enter a positive value for the number of elements: ";
        cin >> c;
    }
    if (c >= 0){
        //loops the addition and prints it alongside a +
        while (c > 1) {
            cout << b << " + ";
            arithmetictotal = (arithmetictotal + b);
            previousb = arithmetictotal;
            b = (a + b);
            c = (c - 1);
        }
        //removes the + when printing the last value
        if (c == 1) {
            cout << b;
            arithmetictotal = (arithmetictotal + b);
            previousb = arithmetictotal;
            b = (a + b);
            c = (c - 1);
        }
        //prints the total when the process is finished
        if (c == 0) {
            cout << " = " << arithmetictotal << endl;
        }
    }
}

void geometric() {}
    //Code for the Geometric choice

int main(){
    int choice;
    char again;
    float N;
    float i;
    float a;
    float b;
    float c;

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
            factorial(N);
        }
        //Runs arithmetic code when value 2 is put into the choice selector
        else if (choice == 2) {
            arithmetic(a ,b ,c);
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