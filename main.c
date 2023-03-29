// This is the main file I will be using to make all the other files in. This code may not work.
#include <stdio.h>
#include <stdbool.h>

int totalAttempts = 5;
bool loggedIn = false;
int inputU;
int username = 12345 ; //I'm purposfully adding more space to make this prompt impossible to show how this works

int main() {
    if (!loggedIn){
        while () {
            printf("Username(5 digits): ");
            scanf("%i", &inputU);
            if (inputU = username) {
                loggedIn = true;
                main();
            } else {
                totalAttempts = -- totalAttempts;
            }
        }
    } else {
        printf("Welcome\n");
        return 0;
    }
}

bool login() {

    return loggedIn;
}