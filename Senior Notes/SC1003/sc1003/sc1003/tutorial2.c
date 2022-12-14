1.
i. number = 8, &number = 7700, p = 100, &p = 3478, *p = content of memory location 100
ii. number = 100, &number = 7700, p = 100, &p = 3478, *p = content of memory location 100
iii. number = 100, &number = 7700, p = 7700, &p = 3478, *p = 100
iv. number = 10, &number = 7700, p = 7700, &p = 3478, *p = 10
v. number = 3478, &number = 7700, p = 7700, &p = 3478, *p = 3478
vi. number = 3478, &number = 7700, p = 3478, &p = 3478, *p = 3478

2.
// a.
int product(int m, int n)
{
    int result;
    result =m * n;
    return result; // result needs to be returned
}
// b.
int sumofSquare(int n)  //* assume n is non‐negative
{
    int sum = 0;
    if (n == 0)
     return 0;
    else
         for (int j = 1; j <= n; j++) sum += j * j ; // sum needs to be returned, j not declared
         return sum;
}
// c.
void  ft(float a)
{
    printf("%f\n", a); // if intending to print parameter, don't need to declare again, already declared in                 parameter list
}                      // if intending to print new local variable, rename variable as parameter name is 'a'
// d.
void  height(float * h)
{
    scanf(“%f”, h); // h is already an float pointer variable storing memory address of location storing float, &h refers to the address of h itself
}                  // and will attempt to store float into h's memory location rather than memory location h points to
// e.
void height(float * h) // function if type void, no return value, thus remove return statement
{                      // if meant to returned, can change type to something else other than void
    scanf(“%f”, h);
}
// f.
int divideBy4(int n) // not allowed to define function within function
{                    // if function not declared yet, can declare within another function
    int divideBy2(int);
    return (divideBy2(divideBy2(n)));
}

int divideBy2(int m){
        return m/2;
    }

3.
//output
h = 5, k = 15 // take note that when argument passed, parameter holds local copy of value of argument
h = -100, k = -100 // when that parameter is changed, argument is not changed, only local parameter
h = 5, k = 15 // if argument outside function to be changed, either through call by function or
h = 5, k = 15 // call by reference
h = 100, k = 100
h = 5, k = 15
h = 5, k = 15
h = 200, k = 200
h = 200, k = 200

4.
// call by value
#include <stdio.h>
#include <math.h>
double diffsquared(double, double);
double diffsqrt(double, double);
void input(double *, double *,double *,double *);

int main(){
    // declare & initialise coordinates variables
    double x1, x2, y1, y2, resultx, resulty, distance;
    // take in x-y coordinates of 2 points
    input(&x1, &x2, &y1, &y2); // calling by reference, rest of f() is calling by passing
    // difference of 2 coordinates squared function
    resultx = diffsquared(x1, x2);
    resulty = diffsquared(y1, y2);
    // diff in x, diff in y, summed and sqrt function
    distance = diffsqrt(resultx, resulty);
    printf("%lf", distance);
}

void input(double *x1, double *x2,double *y1,double *y2){
    printf("Key in x-y coordinates of point 1, separated by comma: \n");
    scanf("%lf,%lf", x1, y1);
    printf("Key in x-y coordinates of point 2, separated by comma: \n");
    scanf("%lf,%lf", x2, y2);
}

double diffsquared(double first, double second){
    double result = 0;
    result = pow((first - second), 2);
    return result;
}

double diffsqrt(double x, double y){
    double result = 0;
    result = sqrt(x + y);
    return result;
}

// call by reference
// call by reference
#include <stdio.h>
#include <math.h>
void input(double *, double *,double *,double *);
void result(double *, double *, double *, double *, double*);

int main(){
    // declare & initialise coordinates variables
    double x1, x2, y1, y2, distance;
    // take in x-y coordinates of 2 points
    input(&x1, &x2, &y1, &y2);
    // difference of 2 coordinates squared function
    result(&x1, &x2, &y1, &y2, &distance);
    // diff in x, diff in y, summed and sqrt function
    printf("%lf", distance);
}

void input(double *x1, double *x2,double *y1,double *y2){
    printf("Key in x1,y2, x2, y2 coordinates of point 1 & 2, separated by comma: \n");
    scanf("%lf,%lf, %lf, %lf", x1, y1, x2, y2);
}

void result(double *x1, double *x2, double *y1, double *y2, double*distance){
    *distance = sqrt(pow(*x2 - *x1, 2) + pow(*y2 - *y1, 2));
}


