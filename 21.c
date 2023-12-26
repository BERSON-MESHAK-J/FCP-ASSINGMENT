#include <stdio.h>

void main() 
{
    int a[] = {10, 20, 30, 40, 50};
    int *p1, *p2, *p3, *p4, *p5;
    int n, m, o;

    p1 = a;
    p2 = &a[1]; 
    p3 = p1 + 2; 
    p4 = p1 - 1; 
    p5 = p1 + n; 

    printf("Address of p1: %u\n", p1);
    printf("Address of p2: %u\n", p2);
    printf("Address of p3: %u\n", p3);
    printf("Address of p4: %u\n", p4);
    printf("Address of p5: %u\n", p5);

    n = 3; //let n = 3
    m = 5; //let m = 5
    o = 2; //let o = 2

    printf("Value of *(p1 + %d): %d\n", n, *(p1 + n)); 
    printf("Value of *(p2 - %d): %d\n", m, *(p2 - m)); 
    printf("Value of *(p3 + %d): %d\n", o, *(p3 + o)); 
    printf("Value of *(p4 - %d): %d\n", n, *(p4 - n)); 
    printf("Value of *(p5 + %d): %d\n", o, *(p5 + o)); 
    printf("Value of *(p1 - %d): %d\n", m, *(p1 - m)); 
    printf("Value of *(p2 + %d): %d\n", n, *(p2 + n)); 

    printf("Value of p1: %d\n", *p1);
    printf("Value of p2: %d\n", *p2);
    printf("Value of p3: %d\n", *p3);
    printf("Value of p4: %d\n", *p4);
    printf("Value of p5: %d\n", *p5);

    printf("Size of integer: %lu byte(s)\n", sizeof(int));

    printf("Difference between p2 and p1: %d\n", p2 - p1); 
    printf("Difference between p5 and p1: %d\n", p5 - p1);
}