#include <stdio.h>     // Include the standard input/output header file.

int hrs;          /* given number of hours */
int mins;         /* given number of minutes */
int tot_mins;     /* total number of minutes (to be computed) */

const int MINaHOUR = 60;      /* number of minutes in an hour */

char line_text[50];      /* line of input from keyboard */

int main() {
printf("Input hours: ");   // Prompt the user to input hours.
fgets(line_text, sizeof(line_text), stdin);   // Read a line of input from the user and store it in 'line_text'.
sscanf(line_text, "%d", &hrs);   // Convert the input to an integer and store it in 'hrs'.

printf("Input minutes: ");   // Prompt the user to input minutes.
fgets(line_text, sizeof(line_text), stdin);   // Read a line of input from the user and store it in 'line_text'.
sscanf(line_text, "%d", &mins);   // Convert the input to an integer and store it in 'mins'.

tot_mins = mins + (hrs * MINaHOUR);   // Calculate the total number of minutes.

printf("Total: %d minutes.\n", tot_mins);   // Print the total number of minutes.

return(0);   // Return 0 to indicate successful execution of the program.
}
