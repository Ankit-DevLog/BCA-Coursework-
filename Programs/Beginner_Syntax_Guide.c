/*
 * Multi-line comment:
 * This program demonstrates core C language syntax,
 * basic data types, user input/output, and arithmetic.
 */

// Preprocessor directive: Links the Standard Input Output library (needed for printf & scanf)
#include <stdio.h>

// Preprocessor macro: Defines a constant value replaced before compilation
#define PI 3.14159

// Entry point function: Every C program must start execution from main()
int main() {

    // --- 1. Variable Declarations & Initializations ---
    
    // 'int' stores whole numbers (integers)
    int age = 20;

    // 'float' stores numbers with decimal points (single-precision)
    float radius = 5.0;

    // 'char' stores a single character inside single quotes
    char grade = 'A';

    // Declaring a variable without assigning a value immediately
    float area;


    // --- 2. Performing Arithmetic Operations ---
    
    // Calculates area of a circle using our defined constant and variable
    area = PI * radius * radius;


    // --- 3. Output to Console using printf() ---
    
    // printf() displays formatted text on the screen.
    // '\n' is an escape sequence that moves the cursor to a new line.
    printf("--- C Basics Overview ---\n");

    // %d is the format specifier for integers
    printf("Age: %d\n", age);

    // %.2f prints a float rounded to 2 decimal places
    printf("Calculated Area: %.2f\n", area);

    // %c is the format specifier for a single character
    printf("Grade: %c\n", grade);


    // --- 4. Taking Input from the User using scanf() ---

    int userNumber;

    // Prompt message for user
    printf("\nEnter a whole number: ");

    // scanf() reads formatted input from the keyboard.
    // The '&' (address-of operator) passes the memory address of the variable.
    scanf("%d", &userNumber);

    // Displaying the input received from the user
    printf("You entered: %d\n", userNumber);


    // --- 5. Conditional Statement ---

    // if-else decides which code block to run based on a condition
    if (userNumber > 0) {
        printf("The number is positive.\n");
    } else if (userNumber < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }


    // --- 6. Program Termination ---
    
    // return 0 signals to the Operating System that the program finished successfully
    return 0;
}
