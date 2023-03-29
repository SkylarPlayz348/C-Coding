/*
    This file is how to do if else statements
*/
#include <stdio.h>
#include <stdbool.h>

bool helpmenow = true;

int main() {
    (helpmenow) ? printf("Here's a hug\n") : printf("Need another run again if so\n"); // Shorthand
    // more traditional
    if (!helpmenow) {
        return 0;
    } else {
        helpmenow = false;
        main();
    }
}