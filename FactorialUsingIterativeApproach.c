// Finding Factorial using iterative approach
// Date: 15-11-20(with help)

#include <stdio.h>
    
int main()
{
    int num, fact=1;
    printf("Enter the number");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d", num, fact);

    
    
    return 0;
}