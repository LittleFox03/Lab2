//
//  Lab2.c
//  
//
//  Created by วิรมณ ตามรักษา on 20/7/2566 BE.
//

#include <studio.h>

int main(){
    int input;
    int sum = 0;
    int count = 0;
    
    do{
        printf("Plese enter a number :");
        scanf("%d", &input);
        if(input > 0)
        {
            sum += input;
            count++;
        }
    }while (input > 0);
    printf("summation = %d\n", sum);
    printf("Average = %d\n", (sum / count));
    return (0); 
}
