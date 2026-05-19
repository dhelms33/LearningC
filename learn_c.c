#include <stdio.h>

// 1. Define the Class as a struct

struct Ratchet {
    char name [50];
    int age;
    float salary
};

// 2. define argument 

int main(int argc, char *argv[]) {
    printf("Program Name: %s\n", argv[0]);
    printf("Number of arguments passed: %d\n", argc -1);

    printf("Arguments list:\n");
    for (int i = 1; i < argc; i++) {
        printf("Argument [%d]: %s\n", i, argv[i]);
    }
    return 0;
}