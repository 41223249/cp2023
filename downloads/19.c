#include<stdio.h>     // Include the standard input/output header file.
#include<stdlib.h>    // Include the standard library header file.
#include<time.h>      // Include the time header file for generating random numbers.

int main ()           // Start of the main function.
{
int number, input;   // Declare two integer variables 'number' and 'input'.

srand ( time(NULL) );   // Initialize the random seed using the current time.

number = rand() % 10 + 1;   // Generate a random number between 1 and 10 and store it in 'number'.

do {   // Start of a do-while loop.
printf ("\nGuess the number (1 to 10): ");   // Print a message prompting the user to guess the number.
scanf ("%d",&input);    // Read the user's input and store it in 'input'.

if (number > input)   // If the random number is greater than the user's input.
printf ("The number is higher\n");   // Print a message indicating that the number is higher.

    } while (number!=input);   // Continue looping as long as the user's input is not equal to the random number.

printf ("That is correct!\n\n");   // Print a message indicating that the user guessed correctly.

return 0;   // Return 0 to indicate successful execution of the program.
}   // End of the main function.
