// Here's an example of how to make a function in C
/*Note this does not work as intended atm*/
#include <stdio.h>
#include <stdbool.h>

int totalAttempts = 5;
bool loggedIn = false;
int inputU;
int username = 12345;

bool login(int uinput) {
    if (totalAttempts != 1) {
        if (uinput == username) {
            loggedIn = true;
            return true;
        } else {
            printf("Try Again\n");
            return false;
        }
    }
}

int main() {
    while(!loggedIn) {
        switch (totalAttempts)
        {
        case 1:
            printf("Restart to Try Again\n");
            loggedIn = true;
            break;
        default:
            printf("Username(5 digits): ");
            scanf("%d", &inputU);
            login(inputU);
            break;
        }
    }
    return 0;
}