#include <stdio.h>
#include <stdlib.h>
int addnumbers(int a, int b, int c, int d, int e);

int main()
{
    int sub1, sub2, sub3, sub4, sub5, sum, c;

    printf("Enter the Grades: ");
    scanf("%d %d %d %d %d" ,&sub1, &sub2, &sub3, &sub4, &sub5);

    sum = addnumbers(sub1, sub2, sub3, sub4, sub5);
    printf("sum = %d", sum);

    c = sum / 5;
    printf("\nThe Average is= %d", c);

    return 0;
}

int addnumbers(int a, int b,int c, int d, int e)
{
    int result;
    result = a+b+c+d+e;
    return result;
}
