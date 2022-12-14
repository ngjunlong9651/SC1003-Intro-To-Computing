// Qn1
#include <stdio.h>

int main(){
    float fah = 0; // initialise variables
    while (1){     // loop
    // ask user for input
        printf("Enter the temperature in degree F:\n"); scanf("%f", &fah);
        if (fah == -1) break; // sentinel value
    // print
        printf("Converted degree in C: %.2f\n", (5.0/9)*(fah - 32));
    }
}

// Qn2
#include <stdio.h>

int main(){
    // initialise variables
    int times = 0; float cur = 0, res = 0;
    // ask for no. of times
    printf("Enter the number of times:\n"); scanf("%d", &times);
    // for loop
    for(int i = 0; i < times; i++){
        // user input current & resistance
        printf("Enter the current:\n"); scanf("%f", &cur);
        printf("Enter the resistance:\n"); scanf("%f", &res);
        // display power loss
        printf("The power loss: %.2f\n", cur*cur*res);
    }
}

// Qn3

#include <stdio.h>
#define PI 3.1416
int main(){
    // initialise variables
    int times = 0; float radius = 0, height = 0;
    // no. of times
    printf("Enter the number of times:\n"); scanf("%d", &times);
    for(int i = 0; i < times; i++){
        // enter radius & height
        printf("Enter the radius:\n"); scanf("%f", &radius);
        printf("Enter the height:\n"); scanf("%f", &height);
        // print volume & surface area
        printf("The volume is: %.2f\n", PI*radius*radius*height);
        printf("The surface area is: %.2f\n", 2*PI*radius*height + 2*PI*radius*radius);
    }
    return 0;
}

// Qn4
#include <stdio.h>

int main(){
    // initialise variables
    int times = 0; float distance = 0, time = 0;
    // user input - no. of times
    printf("Enter the number of times:\n"); scanf("%d", &times);
    for(int i = 0; i < times; i++){
        // user input - distance, time
        printf("Enter distance (in km):\n"); scanf("%f", &distance);
        printf("Enter time (in sec):\n"); scanf("%f", &time);
        // print speed
        printf("The speed is %.2f km/sec\n", distance/time);
    }
    return 0;
}

// Qn5
#include <stdio.h>
#include <math.h>

int main(){
    // initialise variables;
    int times = 0; float x1,x2,y1,y2; x1=x2=y1=y2=0;
    // user input - no. of times
    printf("Enter the number of times:\n");scanf("%d", &times);
    for(int i = 0; i < times; i ++){
        // user input - y1,y2,x1,x2
        printf("Enter first point x1 y1:\n");scanf("%f%f", &x1, &y1);
        printf("Enter second point x2 y2:\n");scanf("%f%f", &x2, &y2);
        // print distance
        printf("The distance is %.2f\n", sqrt(pow(x1 - x2, 2)+ pow(y1 - y2, 2)));
    }
    return 0;
}

// Qn6
#include <stdio.h>
#include <math.h>

int main(){
    // initialise variables
    float a1, a2, b1, b2, c1, c2, den; a1=a2=b1=b2=c1=c2=den= 0;
    // user input for variables
    printf("Enter a1,b1,c1,a2,b2,c2:\n"); scanf("%f%f%f%f%f%f", &a1, &b1, &c1, &a2, &b2, &c2);
    // check if any denominator = 0
    if ((den = a1*b2 - a2*b1) == 0){
        printf("Denominator is zero!\n"); return 0;
    }
    // print x & y
    else{
        printf("x=%.2f,y=%.2f\n", (b2*c1 - b1*c2)/den, (a1*c2 - a2*c1)/den);
        }
    return 0;
}

// Qn7
#include <stdio.h>

int main(){
    // initialise variables
    int digits = 0, letters = 0; char store;
    // user input
    printf("Enter your characters (# to end):\n");
    while (1){
        scanf("%c", &store);
        if (store == '#') break; // sentinel value
        // calculate no. of digits & letters
        if ((65 <= store && store <= 90)|| (97 <= store && store <= 122)){
            letters++;
        }
        if (48 <= store && store <= 57){
            digits++;
        }
    }
    // print no. of digits & letters
    printf("The number of digits: %d\n", digits);
    printf("The number of letters: %d\n", letters);
}

// Qn 8
#include <stdio.h>

int main(){
    // initialise variables
    char store;
    // user input for character
    printf("Enter a character:\n"); scanf("%c", &store);
    // test
    if (65 <= store && store <= 90) printf("Upper case letter\n");
    else if (97 <= store && store <= 122) printf("Lower case letter\n");
    else if (48 <= store && store <= 57) printf("Digit\n");
    else printf("Other character\n");
    // print result
    return 0;
}


