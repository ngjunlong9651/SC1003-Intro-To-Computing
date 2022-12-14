#include <stdio.h>
#include <stdlib.h>

// Creating a constant named max with size of 100
#define MAX 100

// Creating a struct named Room with three elements, Room_ID, Room_status and customer named
typedef struct Room
{
    int Room_ID;
    int Room_status;
    char customerName[20];
};

struct Room hotel[MAX];



// Creating the function to check for hotel rooms
int checkHotel(){
    int empty=1;
    int full=1;
    // Creating a for loop to check for rooms 1 - 5 if they are empty or full
    for (int i=0;i<5;i++){
        if (hotel[i].Room_status == 1) // if room is filled, change value of empty variable to be 0
            empty = 0;
        if (hotel[i].Room_status == 0) // if room is empty, change value of full var to be 0
            full = 0;
        
    }
    if(empty==1) // if room empty: return 0
        return 0;
    if(full==1) // if room full, return 1
        return 1;
    return 2; 
}
    
    
// Creating a function to check for a list of occupied rooms
void listOccupiedRooms(){
    printf("listOccupiedRooms():\n");
    if(checkHotel==0){
            puts("The hotel is empty");
            return;}
    for (int i=0;i<5;i++){
        if (hotel[i].Room_status == 1){
            printf("RoomID: %d\n",hotel[i].Room_ID);
            printf("customer name: %s\n",hotel[i].customerName);}}
    return;
};

// Creating a function to assign rooms that the user enters
void assignRoom(){
    int select_room=0;
    // Creating a constant name that has space 20 and hold characters
    char name[20];
    puts("assignRoom():");
    if(checkHotel()==1){
        puts("The hotel is full");
        return;}
    do{
    puts("Enter a RoomID between 1 and 5:");
    scanf("%d", &select_room);
    if(select_room>=1 && select_room<=5){
        if(hotel[select_room-1].Room_status == 1){ // Need to create an if loop to check if user has entered a room with someone already inside
            puts("Occupied! Enter another RoomID");}
        else{break;}}
        
    }while(1); // Do the above while true
    puts("Enter customer name:");
    scanf(" %19[^\n]", &name);
    hotel[select_room-1].Room_status = 1;
    strcpy(hotel[select_room-1].customerName,name);
    puts("The Room has been assigned successfully");
    return;
};

// Creating a function to remove room
void removeRoom(){
    int select = 0;
    int valid = 0;
    puts("removeRoom():");
    if(checkHotel()==0){
        puts("All the Rooms are empty");
        return;}
    do{
    puts("Enter a RoomID between 1 and 5:");
    scanf("%d", &select );
    if(select>=1&&select<=5){
        if(hotel[select-1].Room_status == 1){
            break;}
        else{puts("Empty! Enter another RoomID for removal");}}
    }while(1);
    hotel[select-1].Room_status = 0;
    puts("Removal is successful");
    return;
};

// Creating a function to find customers
void findCustomer(){
    char name[20];
    int match = -1;
    int j = 0;
    puts("findCustomer():");
    puts("Enter customer name:");
    scanf(" %19[^\n]",&name);
    for(int i=0; i<MAX;i++){
        if(match==-1){
        if(hotel[i].Room_status==1){
            for(j=0;hotel[i].customerName[j]!=0;j++){
                if(name[j]-hotel[i].customerName[j]!=32&&hotel[i].customerName[j]-name[j]!=32&&name[j]!=hotel[i].customerName[j]
                   ||(name[j]==0&&hotel[i].customerName[j]!=0)){
                       break;}
        if(hotel[i].customerName[j+1]==0 && name[j+1]==0 ){
            match = i;break;}}}}}
    if(match!=-1){
        puts("The target customer name is found");
        printf("RoomID: %d\n",match+1);
        printf("customer name: %s\n",hotel[match].customerName);}
    else{puts("The target customer name is not found");}
    return;
};



int main(){
    for (int i=0;i<MAX;i++){
    hotel[i].Room_ID = i+1;}
    int choice;
    puts("NTU HOTEL ROOM RESERVATION PROGRAM: ");
    puts("1: listOccupiedRooms()");
    puts("2: assignRoom()");
    puts("3: removeRoom()");
    puts("4: findCustomer()");
    puts("5: quit");
    do{
    puts("Enter your choice:");
    scanf("%d",&choice);
    switch (choice){
    case 1:listOccupiedRooms();break;
    case 2:assignRoom();break;
    case 3:removeRoom();break;
    case 4:findCustomer();break;
    default: break;}
    }while (choice!=5);
    return 0;
}



