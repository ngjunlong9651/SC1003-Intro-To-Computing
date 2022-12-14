z



// Lab Question 2

#include <stdio.h>
#define SIZE 3  ß
void swap2Rows(int ar[][SIZE], int r1, int r2); 
void swap2Cols(int ar[][SIZE], int c1, int c2);

void display(int ar[][SIZE]); 
int main()
{
    int array[SIZE][SIZE];
    int row1, row2, col1, col2; int i,j;
    int choice;
    printf("Select one of the following options: \n"); printf("1: getInput()\n");
    printf("2: swap2Rows()\n");
    printf("3: swap2Cols()\n");
    printf("4: display()\n"); printf("5: exit()\n");
    do {
        printf("Enter your choice: \n"); scanf("%d", &choice);
        switch (choice) {
        case 1:
        printf("Enter the matrix (3x3): \n"); 
        for (i=0; i<SIZE; i++)
            for (j=0; j<SIZE; j++) 
                scanf("%d", &array[i][j]);
        break; 
        case 2:
            printf("Enter two rows for swapping: \n"); 
            scanf("%d %d", &row1, &row2); 
            swap2Rows(array, row1, row2); 
            printf("The new array is: \n"); 
            display(array);
            break; 
        case 3:
            printf("Enter two columns for swapping: \n"); 
            scanf("%d %d", &col1, &col2); 
            swap2Cols(array, col1, col2);
            printf("The new array is: \n");
            display(array);
            break; 
        case 4:
            display(array);
            break; 
        }
        } while (choice < 5);
        return 0; 
    
}

void display(int ar[][SIZE]) 
{
    int l,m;
    for (l = 0; l < SIZE; l++) 
    {
        for (m = 0; m < SIZE; m++) 
        printf("%d ", ar[l][m]);
        printf("\n"); 
        
    }
}
void swap2Rows(int M[SIZE][SIZE], int r1, int r2) {
/* Write your code here */
    int temp_swap;
    int n;
    
    for (n=0; n<SIZE; n++){
        temp_swap = M[r1][n];
        M[r1][n] = M[r2][n];
        M[r2][n] = temp_swap;
    }
}
void swap2Cols(int M[SIZE][SIZE], int c1, int c2) {
/* Write your code here */
    int temp_swap;
    int n;
    for(n=0; n<SIZE; n++){
        temp_swap = M[n][c1];
        M[n][c1] = M[n][c2];
        M[n][c2] = temp_swap;
    }
}

// Lab Question 3
#include <stdio.h>
int readArray(int ar[]);
void printReverse1(int ar[], int size); 
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size); 

int main()
{
    int ar[80]; 
    int size, i;
    printf("Enter array size: \n"); 
    scanf("%d", &size); 
    printf("Enter %d data: \n", size); 
    for (i=0; i <= size-1; i++)
        scanf("%d", &ar[i]); 
    printReverse1(ar, size); 
    printReverse2(ar, size); 
    reverseAr1D(ar, size); 
    printf("reverseAr1D(): "); 
    if (size > 0) 
    {
        for (i=0; i<size; i++) 
            printf("%d ", ar[i]);
    }
        return 0; 
}


void printReverse1(int ar[], int size) 
{
/* Write your code here – using index */
    int i;
    printf("Reverse1 using index: ");
    if (size > 0)
    {
        for (i = size-1; i >=0; i--)
        printf("%d", ar[i]);
    }
    printf("\n");
}
void printReverse2(int ar[], int size) 
{
/* Write your code here – using pointer */
    int i;
    printf("Reverse2 using pointers: ");
    if (size > 0)
    {
        for (i = size-1; i >=0; i --)
        printf("%d", *(ar+i));
        
    }
    printf("\n");
}
void reverseAr1D(int ar[ ], int size) 
{
/* Write your code here */
    int i, temp;
    if (size >0)
    {
        for (i =0; i < size/2; i++)
        {
            temp = ar[i];
            ar[i] = ar[size-i-1];
            ar[size-1-i] = temp;
        }
    }
}




        
    
