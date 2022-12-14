1.
#include <stdio.h>
void add1(int ar[], int size);
int main()
{
int array[3][4]; int h,k; //2D array named 'array' created
for (h = 0; h < 3; h++)
    for (k = 0; k < 4; k++)
        scanf(“%d”, &array[h][k]); //user inputs int values of array
for (h = 0; h < 3; h++)
    add1(array[h], 4); //add1() function called, array[0], array[1], array[2] passed, int 4 passed each time
for (h = 0; h < 3; h++) {
    for (k = 0; k < 4; k++)
        printf(“%10d”, array[h][k]); // 2d array printed out, taking space of 10 char each time
    putchar(‘\n’);
}
return 0; }

void add1(int ar[], int size) { //parameter ar[] takes address of array[0][0], array[1][0], array[2][0]
int k;
for (k = 0; k < size; k++)
    ar[k]++; //ar[k] == array[0][k], array[1][k], array[2][k]
}            // Thus, 1 is added to all elements of array

// if add1(array[0], 3 * 4); add1(array[h], 4) replaced by add1(array[0], 3 * 4), same output occurs
// as all elements of array increased by 1
// ar takes address of array[0][0] such that ar[0] = ar[0][0]
// In memory space, the 3 rows of 2d array are sequential, thus ar[4] = ar[1][0] etc.
// The same process of increasing all elements of array by 1 occurs

2.
#include <stdio.h>
#include <stdlib.h>
void frequency(int ar[], int cnt[], int);
void print(int cnt[]);

int main(){
    // initialise variables
    int n = 0, counter[10]; // 10 ranges in histo, counter record frequency in each range
    // ask for n = user input
    printf("Enter value for n: \n");
    scanf("%d", &n);
    int array[n]; // array to store values, size determined by user input
    // generate n random integers
    for (int i = 0; i < n; i++){
        array[i] = rand()%100; // n random numbers generated
    }
    // function to collect frequency distribution
    frequency(array, counter, n);
    // function to print histogram
    print(counter);
    
}

void frequency(int ar[], int cnt[], int size){
    int range1 = 0, range2 = 9;
    for (int range = 0; range< 10; range++){
        for (int i = 0; i < size; i++){
            if ((range1 <= ar[i]) && (ar[i] <= range2)){
                cnt[range] += 1;
            }
        }
        range1 += 10; range2 += 10;
    }
}

void print(int cnt[]){
    int range1 = 0, range2 = 9;
    for (int range = 0; range < 10; range++){
        if (range == 0) printf("%d - %d       |", range1, range2);
        else
            printf("%d - %d     |", range1, range2);
        for (int pattern = 1; pattern <= cnt[range]; pattern++){
            printf("*");
        }
        range1 += 10; range2 += 10;
        printf("\n");
    }
}

3.
#include <stdio.h>
#define SIZE 4
void transpose2D(int ar[][SIZE], int rowSize, int colSize);

int main(){
    // declaring variables
    int matrix[SIZE][SIZE];
    // user input to fill up matrix elements
    printf("Type in elements of matrix, 1 at a time, left to right, row by row: \n");
    for (int i = 0; i < (SIZE*SIZE); i++){
        scanf("%d", (matrix[0] + i));
    }
    // function to tranpose matrix
    transpose2D(matrix, SIZE, SIZE);
    // print matrix to test function
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose2D(int ar[][SIZE], int row, int col){
    int temp = 0, copy = 0;
    for (int swaps = 0; swaps < SIZE; swaps++){
        for (int copy = swaps; copy < SIZE; copy++){
            temp = ar[swaps][copy];
            ar[swaps][copy] = ar[copy][swaps];
            ar[copy][swaps] = temp;
        }
    }
}

4.
#include <stdio.h>
#define SIZE 4
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);

int main(){
    // declaring variables
    int matrix[SIZE][SIZE];
    // user input to fill up matrix elements
    printf("Type in elements of matrix, 1 at a time, left to right, row by row: \n");
    for (int i = 0; i < (SIZE*SIZE); i++){
        scanf("%d", (matrix[0] + i));
    }
    // function to tranpose matrix
    reduceMatrix2D(matrix, SIZE, SIZE);    // print matrix to test function
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize){
    for (int column = 0; column < SIZE; column++){
        int sum = 0; //sum of column
        for (int row = column; row < SIZE; row++){
            sum += ar[row][column];
            ar[row][column] = 0;
        }
        ar[column][column] = sum;
    }
}

