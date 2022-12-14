    /*edit*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 5
typedef struct{
 int nameCardID;
 char personName[20];
 char companyName[20];
} NameCard;
NameCard ntu[MAX], empty;
void listNameCard(NameCard*, int*);
void addNameCard(NameCard*, int*);
int checkNameCard(NameCard*, int*, int);
void ascending(NameCard*, int*);
void removeNameCard(NameCard*, int*);
void nametolower(char*, char*);
void getNameCard(NameCard*, int*);
              
int main(){
int choice = 0, size = 0;
printf("NTU NAME CARD HOLDER MANAGEMENT PROGRAM:\n");
printf("1: listNameCards()\n2: addNameCard()\n3: removeNameCard()\n4: getNameCard()\n5: quit\n");
while(1){
    printf("Enter your choice:\n"); scanf("%d", &choice);
    if (choice == 5) break;
    switch(choice){
        case 1:
            getchar();
            listNameCard(ntu, &size); break;
        case 2:
            getchar();
            addNameCard(ntu, &size); break;
        case 3:
            getchar();
            removeNameCard(ntu, &size); break;
        case 4:
            getchar();
            getNameCard(ntu, &size); break;
        case 5:
            break;
        default:
            printf("Key in only numbers 1 to 5.\n"); break;
    }
} return 0;
}


/*end_edit*/
/*edit*/

void listNameCard(NameCard *ntu, int* size){
    printf("listNameCards():\n");
    if (*size == 0){ // if name card empty
        printf("The name card holder is empty\n"); return;
    }
    for (int i = 0; i < *size; i++){ // if not empty, print name card
        printf("nameCardID: %d\npersonName: %s\ncompanyName: %s\n", ntu[i].nameCardID, ntu[i].personName, ntu[i].companyName);
    }
}

void addNameCard(NameCard* ntu, int* size){
    NameCard buffer; char *p;
    printf("addNameCard():\n");
    // getting details of name card want to be added
    printf("Enter nameCardID:\n"); scanf("\n%d", &buffer.nameCardID); getchar();
    printf("Enter personName:\n"); fgets(buffer.personName, 20, stdin);
    if ((p = strchr(buffer.personName, '\n'))) *p = '\0';
    printf("Enter companyName:\n"); fgets(buffer.companyName, 20, stdin);
    if ((p = strchr(buffer.companyName, '\n'))) *p = '\0';
    // check for existing namecard or full namecard, if condition true, return
    if (checkNameCard(ntu, size, buffer.nameCardID)) return;
    // if pass checking, namecard is addedd
    ntu[*size] = buffer; (*size)++; // size of array is now increased
    printf("The name card has been added successfully\n");
    // arrange in ascending order
    ascending(ntu, size);
}

int checkNameCard(NameCard* ntu, int* size, int target){
    if (*size == MAX){ // check if name card is full
        printf("The name card holder is full\n"); return 1;
    }
    for (int i = 0; i < *size; i++){
        if (ntu[i].nameCardID == target){ // check if name card already exists
            printf("The nameCardID has already existed\n"); return 2;
        }
    }  return 0; // if neither full not have existing name card
}

void ascending(NameCard* ntu, int* size){
    NameCard buffer;
    for (int i = 0; i < *size; i++){
        for (int j = 0; j < *size - 1; j++){
            if (ntu[j].nameCardID > ntu[j + 1].nameCardID){
                buffer = ntu[j]; ntu[j] = ntu[j+1]; ntu[j+1] = buffer; // swap in ascending order
            }
        }
    }
}

void removeNameCard(NameCard* ntu, int* size){
    char target[20], lowertarget[20], *p; int i = 0;
    printf("removeNameCard():\nEnter personName:\n"); fgets(target, 20, stdin);
    if ((p = strchr(target, '\n'))) *p = '\0';
    if (*size == 0){ // if name card holder is empty
        printf("The name card holder is empty\n"); return;
    }
    nametolower(target, lowertarget); // convert target to lower char
    for (; i < *size; i++){
        char lowerexisting[20]; nametolower(ntu[i].personName, lowerexisting); // convert existing to lower char
        if (strcmp(lowerexisting, lowertarget) == 0){ // if target found in name card, remove
            printf("The name card is removed\n");
            printf("nameCardID: %d\npersonName: %s\ncompanyName: %s\n", ntu[i].nameCardID, ntu[i].personName, ntu[i].companyName);
            ntu[i] = empty; (*size)--; // name card removed by replacing with empty NameCard, size decrease
            for (; i < *size; i++) ntu[i] = ntu[i + 1]; // pushing all cards behind removed-card forward
            return;
            }
        }
    // if name card not found
        if (i == *size){
            printf("The target person name is not in the name card holder\n"); return;
        }
}

void nametolower(char* existing, char* converted){
    for (int i = 0; i < strlen(existing); i++) converted[i] = tolower(existing[i]);
    converted[strlen(existing)] = '\0'; // ensuring null char
}

void getNameCard(NameCard* ntu, int* size){
    printf("getNameCard():\n");
    char target[20], lowertarget[20], *p; int i = 0;
    printf("Enter personName:\n"); fgets(target, 20, stdin);
    if ((p = strchr(target, '\n'))) *p = '\0';
    nametolower(target, lowertarget); // convert target to lower char
    for (; i < *size; i++){
        char lowerexisting[20]; nametolower(ntu[i].personName, lowerexisting); //convert existing to lower char
        if (strcmp(lowerexisting, lowertarget) == 0){
            printf("The target person name is found\n");
            printf("nameCardID: %d\npersonName: %s\ncompanyName: %s\n", ntu[i].nameCardID, ntu[i].personName, ntu[i].companyName); return; // return after found
        }
    }
    // if person is not found
    if (i == *size) printf("The target person name is not found\n");
}


