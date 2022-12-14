#include <stdio.h>
#include <string.h>
char *sweepSpace1(char *str); char *sweepSpace2(char *str);

int main(){
char str[80],str2[80], *p;
printf("Enter the string: \n");
fgets(str, 80, stdin);
if (p=strchr(str,'\n')) *p = '\0';
strcpy(str2,str);
printf("sweepSpace1(): %s\n", sweepSpace1(str));
printf("sweepSpace2(): %s\n", sweepSpace2(str2));
return 0;
}

char *sweepSpace1(char *str) {// array notation
    int space = 0, count = 0;
    for (int i = 0; i < strlen(str); i++){
        if (str[i] != ' '){
            str[space] = str[i];
            space++;
        }
    }
    str[space] = '\0';
    return str;
}
char *sweepSpace2(char *str) { // pointer notation
    int space = 0, count = 0;
    for (int i = 0; i < strlen(str); i++){
        if (*(str + i) != ' '){
            *(str + space)= *(str + i);
            space++;
        }
    }
    *(str + space) = '\0';
    return str;
}


------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define INIT_VALUE 999
void printNames(char nameptr[][80], int size);
void readNames(char nameptr[][80], int *size);
int findTarget(char *target, char nameptr[][80], int size);
int main(){
    char nameptr[SIZE][80], t[40], *p;
    int size, result = INIT_VALUE; int choice;
    printf("Select one of the following options: \n"); printf("1: readNames()\n");
    printf("2: findTarget()\n"); printf("3: printNames()\n"); printf("4: exit()\n");
    do {
        printf("Enter your choice: \n"); scanf("%d", &choice);
        switch (choice) {
            case 1:
                readNames(nameptr, &size); break;
            case 2:
                printf("Enter target name: \n"); scanf("\n");
                fgets(t, 80, stdin);
                if (p=strchr(t,'\n')) *p = '\0';
                result = findTarget(t, nameptr, size); printf("findTarget(): %d\n", result); break;
            case 3: printNames(nameptr, size); break;
        }
    } while (choice < 4);
    return 0;
}
void printNames(char nameptr[][80], int size) {
int i;
for (i=0; i<size; i++) printf("%s ", nameptr[i]);
printf("\n"); }

void readNames(char nameptr[][80], int *size) {
    printf("Enter size: \n"); scanf("%d",  size);
    printf("Enter %d names: \n", *size);
    for (int namecount = 0; namecount < *size; namecount++){
        scanf("%s", nameptr[namecount]);
    }
}

int findTarget(char *target, char nameptr[][80], int size) {
    for (int index = 0; index < size; index++){
        if (strcmp(nameptr[index], target) == 0){
            return index;
        }
    }
    return -1;
}
