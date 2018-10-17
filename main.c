/*
 * This program allows the user to enter a string.
 * The it will return the same string but in inverse order.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date: October 17th, 2018
 * Mail: A01411995@itesm.mx
 *
 */
#include <stdio.h>
#include <string.h>

int main() {
    // Here I declare my variables.
    char string[200];
    int length;
    int i;
    int noLength = 0;
    // Here I ask the user to enter his string.
    printf("Write a string:");
    fgets(string, sizeof(string), stdin);
    // This part is for getting the length of the entered string, which is now stored at length.
    length = strlen(string);

    printf("\n\nYour input was: %s", string);
    printf("The reverse is: ");
    // This is for giving the result to the user, in order to write it inside the previous written printf function.
    for(i = length - 1; i >= 0; i--){
        if (noLength == 1) {
            printf("%c", string[i]);
        } else {
            if (string[i] == '\n') {
                noLength = 1;
            }
        }
    }
    return 0;
}