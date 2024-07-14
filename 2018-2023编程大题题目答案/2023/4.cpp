#include <stdio.h>
#include <string.h>

void simplifyString(char* str) {
    int len = strlen(str);
    int count = 1;
    char prev = str[0];
    
    for (int i = 1; i < len; i++) {
        if (str[i] == prev) {
            count++;
        } else {
            if (count > 1) {
                printf("%d(%c)", count, prev);
            } else {
                printf("%c", prev);
            }
            count = 1;
            prev = str[i];
        }
    }
    
    if (count > 1) {
        printf("%d(%c)", count, prev);
    } else {
        printf("%c", prev);
    }
}

int main() {
    char str[] = "CCCCCCCCCCCCADCADCADAAAC";
    simplifyString(str);
    return 0;
}
