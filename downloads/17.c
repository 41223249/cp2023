#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    int tmp;   // Declare a variable to store temperature.

    printf("Input days temperature : ");   // Prompt user for input.
    scanf("%d", &tmp);   // Read and store temperature.

    if (tmp < 0)   // Check if temperature is less than 0.
        printf("Freezing weather.\n");   // Print message for freezing weather.
    else if (tmp < 10)   // Check if temperature is between 0 and 10.
        printf("Very cold weather.\n");   // Print message for very cold weather.
    else if (tmp < 20)   // Check if temperature is between 10 and 20.
        printf("Cold weather.\n");   // Print message for cold weather.
    else if (tmp < 30)   // Check if temperature is between 20 and 30.
        printf("Normal in temp.\n");   // Print message for normal temperature.
    else if (tmp < 40)   // Check if temperature is between 30 and 40.
        printf("Its Hot.\n");   // Print message for hot weather.
    else   // If none of the above conditions are met.
        printf("Its very hot.\n");   // Print message for very hot weather.
}
