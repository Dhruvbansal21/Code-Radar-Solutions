#include <stdio.h>  

int main() {  
    int N;  
    
    // Input: side length of the square      
    scanf("%d", &N);  
    
    for (int i = 0; i < N; i++) {  
        for (int j = 0; j < N; j++) {  
            // Print '*' for the first and last row or first and last column  
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {  
                printf("*");  
            } else {  
                printf(" "); // Print space for hollow part  
            }  
        }  
        printf("\n"); // Move to the next line after each row  
    }  
    
    return 0;  
}  