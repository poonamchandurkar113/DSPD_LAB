//Poonam_Chandurkar IT-B-113  3rd sem    Reg no: 24070120

/*AIM: 1 A.	Write a program to accept ‘n’ numbers into an array and then calculate the sum of numbers present in odd positions and even positions respectively.	 
*/
#include <stdio.h>
int main() {
    printf("\n  Code by - Poonam_Chandurkar  IT-B-113   3rd sem    Reg no: 24070120");
    int n, i, arr[100];
    int oddSum = 0, evenSum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if((i + 1) % 2 == 0)
            evenSum += arr[i]; // Even position
        else
            oddSum += arr[i]; // Odd position
    }
    printf("Sum of numbers at odd positions = %d\n", oddSum);
    printf("Sum of numbers at even positions = %d\n", evenSum);
    printf("\n  Code by - Poonam_Chandurkar  IT-B-113   3rd sem    Reg no: 24070120");
    return 0;
}
