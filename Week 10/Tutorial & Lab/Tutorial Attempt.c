// // Question 1 //

// #include <stdio.h>
// void add1(int ar[], int size); 
// int main()
// {
//     int array[3][4]; 
//     int h,k;
//     for (h = 0; h < 3; h++)
//         for (k = 0; k < 4; k++)
//             scanf(“%d”, &array[h][k]);
//     for (h = 0; h < 3; h++) 
//         add1(array[h], 4);
//     for (h = 0; h < 3; h++) {
//         for (k = 0; k < 4; k++)
//             printf(“%10d”, array[h][k]); 
//         putchar(‘\n’);
// }
// return 0; 
// }
// void add1(int ar[], int size) 
// {
// int k;
// for (k = 0; k < size; k++) ar[k]++;
// }

// Question 2 // 
#include <stdio.h>
   #include <stdlib.h>
   #include <time.h>
   void getFrequency(int histogram[10], int n);
   void printFrequency(int histogram[10]);
int main()
   {
      int frequencies[10];
      int total;
      printf("Please input the number of random numbers: ");
      scanf("%d", &total);
      srand(time(NULL));
      getFrequency(frequencies, total);
      printFrequency(frequencies);
return 0; }
   void getFrequency(int histogram[10], int n)
{
int count;
      // int category;
      for (count = 0; count < 10; count++)
         histogram[count] = 0;
      for (count = 0; count < n; count++)
         histogram[(rand() % 100)/10]++;
}

// Creating the printfrequency function
 void printFrequency(int histogram[10])
   {
      int count, index;
      for (count = 0; count < 10; count++) {
         printf("%2d--%2d  |", count*10, count*10+9);
         for (index = 0; index < histogram[count]; index++ )
            putchar('*');
         putchar('\n');
}
}

// Question 3
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


// Creating the prototypes function
void transpose2D(int ar[][SIZE],int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);

int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i, j;

    printf("Enter the row size of the 2D array");
    scanf("%d", &rowSize);
    printf("Enter the column size of the 2D array");
    scanf("%d", &colSize);


}

// Question 4