#include <stdio.h>
int main(void) 
{
    float h1,h2,h3,avg,missing_h;

    printf("Enter height 1:");
    scanf("%f", &h1);
    printf("Enter height 2:");
    scanf("%f", &h2);
    printf("Enter height 3:");
    scanf("%f", &h3);
    printf("Enter calculated average height:");
    scanf("%f", &avg);

    missing_h = ((avg * 5.0)-(h1 + h2+ h3)) / 2.0;

    printf("The two missing heights are: %.2f and %.2f\n", missing_h, missing_h);

    return 0;
}
