#include <stdbool.h>
#include <stdio.h>

// Function
void myFunction() {
    printf("I just got executed!");
}

// Array and function
// Opt 1 : safest method is for the caller to define the array, and pass its address and size to the function that's supposed to write to it:
void returnArray(char *srcArray, size_t srcSize) {
    for (size_t i = 0; i < srcSize; ++i) {
        srcArray[i] = i;
    }
}

void printArray(char *srcArray) {
    size_t srcSize = sizeof srcArray;

    printf("{");
    for (int i = 0; i < srcSize; ++i) {
        if (i < srcSize - 1) {
            printf("%d,", srcArray[i]);
        } else if (i == srcSize - 1) {
            printf("%d", srcArray[i]);
        }
    }
    printf("}\n");
}

// Opt 2 : Another method is for the function to allocate the array dynamically and return the pointer and size:

int main() {
    // Variable
    int x = 5, y = 6, z;  // x,y: Declare and assign, z: Assign
    z = 7;                // Assign
    // Constant
    const float pi = 3.14;

    // Native Data Types
    int myNum = 5;            // Integer (whole number)
    float myFloatNum = 5.99;  // Floating point number
    char myLetter = 'D';      // Character
    bool isFun = true;        // Boolean
    // Array
    char greetings[] = "Hello World!\n";
    int myNumbers[] = {1, 2, 3, 4};
    // Type conversion
    float myFloat = (float)myNum;

    // Memory address
    int *ptr = &myNum;       // *ptr: Pointer variable, &myNum: address of myNum
    printf("%p\n", &myNum);  // Output the memory address of myNum
    printf("%p\n", ptr);     // Output the memory address of myNum with the pointer
    printf("%d\n", *ptr);    // Dereference: Output the value of myAge with the pointer
    // More detail
    int c, *pc;
    // pc = c;    // Error // pc is address but c is not
    // *pc = &c;  // Error // &c is address but *pc is not
    pc = &c;  // Not an error // both &c and pc are addresses
    *pc = c;  // Not an error // both c and *pc are values

    struct MyStructure {  // Structure declaration
        int myNum;        // Member (int variable)
        char myLetter;    // Member (char variable)
    };  // End the structure with a semicolon

    // Enum
    enum Level {
        LOW,
        MEDIUM,
        HIGH
    };

    // Pass array to function
    char arr[10] = {0};
    returnArray(arr, sizeof arr);
    printArray(arr);

    return 0;  // End the main function
}