#include <iostream>
#include <string>
using namespace std;

// Function
void greet(char name = 'D') {
    cout << "Hello, " << name << endl;
}
// Function overloading with type int parameter
void greet(int name = 5) {
    cout << "Hello, " << name << endl;
}

// Inline functions: Copies the function to the location ofthe function call in compile-time, make it run faster

int main() {
    // Declare var
    int a;
    a = 2;
    const double PI = 3.14;

    // Data type
    int myNum = 5;
    char myChar = 'A';
    bool isTrue = false;
    // Array
    int x[6];
    int y[] = {19, 10, 8, 17, 9, 15};  // Declare and initialize
    char string[] = "This is a string";

    // Type convert
    double myDouble = myNum;
    char charFormInt = myNum;

    // Output
    // count for output
    // endl for new line
    cout << "Value of a is: " << a << endl;
    cout << "Hello World" << endl;

    // Input
    cout << "Enter your name: ";
    char name;
    cin >> name;
    cout << "Hello, " << name << endl;

    // Flow control
    // if..else
    if (name != 'N') {
        cout << "Your name is not N" << endl;
    } else if (name == 'N') {
        cout << "Your name is N" << endl;
    } else {
        cout << "Your name is something else" << endl;
    }

    // short hand
    int n = 0;
    std::string result = (n > 0) ? ">0" : "<=0";

    // for loop
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }

    // for loop: Range Based
    int num_array[] = {1, 2, 3, 4, 5};

    for (int n : num_array) {
        cout << n << " " << endl;
    }

    // while, for: use when the n of iner is know, vs while: when n in unknown
    int i = 1;
    while (i <= 5) {
        cout << i << " " << endl;
        ++i;
    }

    // do..while differ from while that do while gaurantee run at least once
    do {
        cout << i << " " << endl;
        ++i;
    } while (i <= 5);

    // break: terminate loop and go to next step
    // continue: skip the current iteration and goes to the next iteration

    // switch..case run block of cases code depend on express
    char oper;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    switch (oper) {
        case '+':
            cout << 4 << " + " << 5 << " = " << 4 + 5 << endl;
            break;
        case '-':
            cout << 4 << " - " << 5 << " = " << 4 - 5 << endl;
            break;
        case '*':
            cout << 4 << " * " << 5 << " = " << 4 * 5 << endl;
            break;
        case '/':
            cout << 4 << " / " << 5 << " = " << 4 / 5 << endl;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    // Calling
    greet('E');

    // Address and Pointer
    // Address
    int var1 = 3;
    cout << "Address of var1: " << &var1 << endl;
    // Pointer
    int* point_var = &var1;
    // Get the value
    cout << *point_var << endl;

    // More detail
    int* ptr = &myNum;       // *ptr: Pointer variable, &myNum: address of myNum
    cout << &myNum << endl;  // Output the memory address of myNum
    cout << ptr << endl;     // Output the memory address of myNum with the pointer
    cout << *ptr << endl;    // Dereference: Output the value of myAge with the pointer
    // More detail
    int c, *pc;
    // pc = c;    // Error // pc is address but c is not
    // *pc = &c;  // Error // &c is address but *pc is not
    pc = &c;  // Not an error // both &c and pc are addresses
    *pc = c;  // Not an error // both c and *pc are values

    // Reference: alias for var, passing to fun prevent accidental modify of original obj.
    int& ref_myNum = myNum;

    return 0;
}
