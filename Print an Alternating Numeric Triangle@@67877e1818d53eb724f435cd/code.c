#include <stdio.h>  

int main() {  
    int N, num = 1; // Initialize N and a counter num  

    // Prompt user for input  
    printf("Enter the number of rows: ");  
    scanf("%d", &N); // Read the number of rows  
    
    // Loop through each row  
    for (int i = 1; i <= N; i++) {  
        // Print leading spaces for pyramid shape  
        for (int j = i; j < N; j++) {  
            printf(" "); // Add space before numbers  
        }  

        // Print numbers in each row  
        for (int j = 1; j <= i; j++) {  
            printf("%d ", num++); // Print number and increment  
        }  

        printf("\n"); // Move to the next row  
    }  

    return 0;  
}