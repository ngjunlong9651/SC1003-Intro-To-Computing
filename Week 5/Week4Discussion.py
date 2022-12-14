##Question 1
## Seems like the question is asking you to create to record entries into a database
## Data structure will be that of a dictionary with
## {(group_name, student_id): student_score}
## Have to create at least an instance of the datastructure
grades = {
    ("Seminar 1", "21") : 85, ## (Class name, Student ID) : Score
    ("Seminar 1", "24") : 55,
    ("Seminar 2", "12") : 25,
    ("Seminar 2", "21") : 85
}
## Creating a function that helps you to get input
def get_data():
    database = input("Enter the name of the dictionary that you want to add to: ")
    group = (input("What is the class ID that you want to add into: "))
    id = int(input("What is the ID of the student? "))
    score = int(input("What is the score of the student ?"))
    return {("Database") : database,
            ("Group") : group,
            ("ID") : id,
            ("Score") : score
           }

## Above was commented to test out something for question 2

get_data() ## Checks that the function works as intended

## Fomat : datastructure, key (group, id), value (score)
def inputRecord(dataBase, group, id, score):
    dataKey = (group, id)
    ## This creates the key for the dataBase
    dataBase[dataKey] = score
    ## This created the value of the key-value pair 
    # return{("Database") : dataBase,
    #         ("Group") : group,
    #         ("Id") : id,
    #         ("Score") : score
    # }
    ## Returning the dataBase plus all attributes

inputRecord(grades, "Seminar 70", 70, 70)
## Above is to store the new key-value pairs into the existing database

print(grades)
## Can check that the data is stored
## Question 2
## To access a dictionary:
## Dict[key]
grades[("Seminar 1", "21")] ## Returns the value of the key -> Seminar 1's student 21

def query(database,group,id): 
    ## Basically checking if you are able to successfully access a dictionary and return value
    try:
        key = (group,id)
    ## Automatically creates a key based on the user's input
        student_score = database[key]
        return student_score
    except KeyError:
        print("Entered Wrong Key!")
        return None

query(grades,"Seminar 69", "24") #Checking that the function works


## Question 3
