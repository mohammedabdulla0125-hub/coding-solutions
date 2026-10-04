#include <stdio.h>

int main()
 {
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    // Array to map numbers 1-9 to their English word representations
    char* words[] = {
        "", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"
    };

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            printf("%s\n", words[i]);
        } else if (i % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}
