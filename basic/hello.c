#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   char name;
   char input_string[105]; // Declare a variable named 'input_string' to hold our input.
     
   scanf("%[^\n]", input_string); // Read a full line of input from stdin and save it to our variable, input_string.
     
   //Your first line of output goes here 
     printf("Enter your name \n");
     scanf("%c" &name);
     printf("hello %c", name);
     printf("%s\n",input_string);
    
    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    
    return 0;
}
