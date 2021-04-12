#include <stdio.h>

int main()
{
    int arr[3][2] = {{1100, 5555},{22112, 0000},{222112, 00110}};
    int i, j;

    printf("Enter I.D Number: ");
    scanf("%d", &i);
    printf("\nEnter Password: ");
    scanf("%d", &j);

    if(i = arr[0][0])
    {
        printf("You are Logged In!");
    }
    else if(i = arr[1][1])
    {
        printf("You are Logged In");
    }

    return 0;
}
