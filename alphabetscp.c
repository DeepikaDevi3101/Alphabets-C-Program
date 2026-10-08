#include <stdio.h>

int main() {
    int layout, style;

    printf("Choose layout:\n1. Horizontal\n2. Vertical\nEnter choice: ");
    scanf("%d", &layout);

    printf("Choose case:\n1. Uppercase\n2. Lowercase\nEnter choice: ");
    scanf("%d", &style);

    if ((layout != 1 && layout != 2) || (style != 1 && style != 2)) {
        printf("Invalid choice\n");
        return 1;
    }

    char start = (style == 1) ? 'A' : 'a';
    char end   = (style == 1) ? 'Z' : 'z';

    printf("\n");
    for (char c = start; c <= end; c++) {
        if (layout == 1)
            printf("%c ", c);    // same line
        else
            printf("%c\n", c);   // new line each time
    }
    printf("\n");

    return 0;
}