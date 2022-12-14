// Question 1
#include <stdio.h>
#include <math.h>
struct circle {
    double radius;
    double x;
    double y;
};
int intersect(struct circle c1, struct circle c2);
int contain(struct circle *c1, struct circle *c2);

int main(){
    // initialising c1 & c2 of data structure circle
    struct circle c1, c2;
    // taking in information for two circles, c1 & c2
    printf("Enter radius, x & y coordinates of circle, c1: \n");scanf("%lf%lf%lf", &c1.radius, &c1.x, &c1.y);
    printf("Enter radius, x & y coordinates of circle, c2: \n");scanf("%lf%lf%lf", &c2.radius, &c2.x, &c2.y);
    // function intersect
    printf("Result of intersect(): %d\n", intersect(c1, c2));
    // function contain
    printf("Result of contain(): %d\n", contain(&c1, &c2));
}

int intersect(struct circle c1, struct circle c2){
    double radiussum, distance;
    distance = sqrt(pow((c1.x - c2.x), 2) + pow((c1.y - c2.y), 2));
    radiussum = c1.radius + c2.radius;
    return (distance <= radiussum);
}

int contain(struct circle *c1, struct circle *c2){
    float sum;
    sum = (*c2).radius + sqrt(pow(((*c1).x - (*c2).x), 2) + pow(((*c1).y - (*c2).y), 2));
    return (c1->radius >= sum);
}


-------------------------------------------------------------------------------------
// Question 2
#include <stdio.h>
typedef struct {
float operand1, operand2;
char op; /* operator ‘+’,‘‐’,‘*’ or ‘/’ */
} bexpression;
float compute1(bexpression expr);
float compute2(bexpression *expr);

int main(){
    // initialising bexpression variable, expr
    bexpression expr;
    // taking in user input for operands & operator
    printf("Choice of operator (‘+’,‘‐’,‘*’ or ‘/’): \n"); scanf("%c", &expr.op);
    printf("Enter float for operand1 & operand2: \n"); scanf("%f%f", &expr.operand1, &expr.operand2);
    // compute1 function
    printf("Result of compute1(): %f\n", compute1(expr));
    // compute2 function
    printf("Result of compute1(): %f\n", compute2(&expr));

}

float compute1(bexpression expr){
    switch (expr.op){
        case '+':
            return (expr.operand1 + expr.operand2);
        case '-':
            return (expr.operand1 - expr.operand2);
        case '*':
            return (expr.operand1 * expr.operand2);
        case '/':
            return (expr.operand1 / expr.operand2);
        default:
            return 1;
    }
}

float compute2(bexpression *expr){
    switch ((*expr).op){
        case '+':
            return ((*expr).operand1 + (*expr).operand2);
        case '-':
            return ((*expr).operand1 - (*expr).operand2);
        case '*':
            return ((*expr).operand1 * (*expr).operand2);
        case '/':
            return ((*expr).operand1 / (*expr).operand2);
        default:
            return 1;
    }
}
------------------------------------------------------------------------------------------------
// Question 3
#include <stdio.h>
typedef struct {
int id; /* staff identifier */
int totalLeave; /* the total number of days of leave allowed */
int leaveTaken; /* the number of days of leave taken so far */
} leaveRecord;
void getInput(leaveRecord list[ ], int *n);
int mayTakeLeave(leaveRecord list[ ], int id, int leave, int n);
void printList(leaveRecord list[ ], int n);

int main(){
    // initialising list[] of data structure leaveRecord
    leaveRecord list[100]; int records, id, leave, choice;
    // getInput function & testing
    while(1){
        printf("Key in '1' to getInput\n'2' to mayTakeLeave\n'3' to printList\n'4' to quit\n");
        scanf("%d", &choice);
        if (choice == 4) break;
        switch (choice){
            case 1:
                getInput(list, &records);
                printf("Number of records: %d\n", records); break;
            case 2:
                printf("Enter staff id, no. of leave applying for: \n"); scanf("%d%d", &id, &leave);
                printf("Result of mayTakeLeave function: %d\n", mayTakeLeave(list, id, leave, records));
                break;
            case 3:
                printList(list, records);
                break;
            default:
                printf("Key in numbers 1, 2, 3 or 4 only.\n");
        }
    }
}

void getInput(leaveRecord list[ ], int *n){
    printf("How many records do you want to key in: \n"); scanf("%d", n);
    for (int i = 0; i < (*n); i++){
        printf("Key in staff identifier, number of leave allowed, number of leave taken: \n");
        scanf("%d%d%d", &list[i].id, &list[i].totalLeave, &list[i].leaveTaken);
    }
}

int mayTakeLeave(leaveRecord list[ ], int id, int leave, int n){
    for (int i = 0; i < n; i ++){
        if (list[i].id == id) return ((list[i].leaveTaken + leave) <= list[i].totalLeave);
    }
    return -1;
}

void printList(leaveRecord list[ ], int n){
    for (int i = 0; i < n; i++){
        printf("%d %d %d\n", list[i].id, list[i].totalLeave, list[i].leaveTaken);
    }
}
