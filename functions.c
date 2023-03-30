// Here's an example of how to make a function in C
#include <stdio.h>
#include <stdbool.h>

int totalAttempts = 5;
bool loggedIn = false;
int inputU;
int username = 12345;

bool login(int uinput) {
    if (totalAttempts != 0) {
        if (uinput = username) {
            loggedIn = true;
            return loggedIn;
        } else {
            totalAttempts = -- totalAttempts;
            printf("Try Again");
            return loggedIn;
        }
    }
}

int main() {
    if (!loggedIn) {
        printf("Username(5 digits): ");
        if (login(scanf("%i", &inputU))){
            printf("\nWelcome\n");
            return 0;
        }
    } else {
        printf("Welcome Back\n");
        return 0;
    }
}