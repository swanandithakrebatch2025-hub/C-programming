// Swanandi Thakre 25070521086

#include <stdio.h>
#include <string.h>

union Data {
    int integer;
    float floating;
    char str[20];
};

int main() {
    union Data data;

    data.integer = 10;
    printf("Integer: %d\n", data.integer);

    data.floating = 3.14;
    printf("Float: %.2f\n", data.floating);

    strcpy(data.str, "Hello");
    printf("String: %s\n", data.str);

    return 0;
}

