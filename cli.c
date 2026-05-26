#include <stdio.h>
#include <stdlib.h> 

int main() {
    char command[100];

    while (1) {
        printf("myshell> ");
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = 0; // Remove newline char
    if (strcmp(command, "exit") == 0) {
        break; //Exit the shell
        }
    system(command);
    }
    return 0;

}