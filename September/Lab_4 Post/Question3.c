#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100];

    printf("Enter Name:");
    
    fgets(fullName, sizeof(fullName), stdin);
    printf("Successfully registered: ");
    puts(fullName);

    return 0;
}
