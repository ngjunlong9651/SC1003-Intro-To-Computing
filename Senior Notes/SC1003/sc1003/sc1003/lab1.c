// Qn 1
#include <stdio.h>
#include <string.h>

int main(){
    // initialise variables
    int id = 0, mark = 0; char dummy[80];
    while(1){
        printf("Enter Student ID:\n"); scanf("%d", &id); fgets(dummy, 80, stdin);
        if (id == -1) break;
        printf("Enter Mark:\n"); scanf("%d", &mark); fgets(dummy, 80, stdin);
        switch((mark+5)/10){
            case 10:
            case 9:
            case 8:
                printf("Grade = A\n"); break;
            case 7:
                printf("Grade = B\n"); break;
            case 6:
                printf("Grade = C\n"); break;
            case 5:
                printf("Grade = D\n"); break;
            default:
                printf("Grade = F\n"); continue;
        }
    }
}

// Qn 2
#include <stdio.h>

int main(){
    int lines = 0, value = 0;
    printf("Enter number of lines:\n"); scanf("%d", &lines);
    for (int i = 0; i < lines; i++){
        float sum = 0; int count = 0;
        printf("Enter line %d (end with -1):\n", i + 1);
        while(1){
            scanf("%d", &value); if (value == -1) break;
            sum += value; count++;
        }
        printf("Average = %.2lf\n", sum/count);
    }
}

// Qn 3
#include <stdio.h>

int main(){
    // initialise variables
    int height = 0, number = 1;
    printf("Enter the height:\n"); scanf("%d", &height);
    printf("Pattern:\n");
    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= i; j++){
            if (number%4 == 0) number++;
            printf("%d", number%4);
        }
        number++; printf("\n");
    }
}

// Qn 4
#include <stdio.h>

int main(){
    double x = 0, result = 1, added = 1;
    printf("Enter x:\n"); scanf("%lf", &x);
    for (int i = 1; i <= 10; i++){
        added *= x/i;
        result += added;
    }
    printf("Result = %.2lf\n", result);
}

