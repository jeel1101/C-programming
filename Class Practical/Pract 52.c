#include <stdio.h>
float aor(float l, float w) {
    return l * w;
}
float aos(float s) {
    return s * s;
}
float aoc(float r) {
    return 3.14 * r * r;
}

int main() {
    char ch;
    float l, w, s, r;


    printf("Enter r,s or c: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'r':
            printf("\nEnter length and width: ");
            scanf("%f %f", &l, &w);
            printf("\nArea of the rectangle: %.2f\n", aor(l,w));
            break;

        case 's':
            printf("\nEnter the side: ");
            scanf("%f", &s);
            printf("\nArea of the square: %.2f\n", aos(s));
            break;

        case 'c':
            printf("\nEnter the radius: ");
            scanf("%f", &r);
            printf("\nArea of the circle: %.2f\n", aoc(r));
            break;
    }

    return 0;
}
