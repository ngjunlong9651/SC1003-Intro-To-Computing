# ## Question 2 
# ## Password Checker 

# ## Password Checker

# while (True):
#     password = input("Please enter your password, To stop testing, enter #### to stop the program: ")
#     if password == "####":
#         break
#     password_strength_counter = 0
#     lowercase_checker = uppercase_checker = special_checker = number_checker = False
#     ## Checking the password for more than 8 in length and
#     if len(password) >= 8:
#         print("Password has at least 8 characters!")
#         password_strength_counter += 1
#     else:
#         print("The password needs at least 8 characters, please try again: ")
    
#     ## Checking the password for each character whether they are special, number, lower or higher 
#     for char in password:
#         if char.islower() == True:
#             lowercase_checker = True
#         elif char.isupper() == True:
#             uppercase_checker = True
#         elif char.isalnum() == True:
#             number_checker = True
#         elif char in "!@#$%^&*()-+?_=,<>/":
#             special_checker = True

#     ## Calculating the strength of the password
#     if lowercase_checker and uppercase_checker == True:
#         password_strength_counter += 2
#     else: 
#         print('Your password lacks either a lower or upper case letter')
#         continue

#     if number_checker == True:
#         password_strength_counter += 1
#     else:
#         print('Your password does not have any number')
#         continue

#     if special_checker == True:
#         password_strength_counter += 1
#     else: 
#         print("Your password does not have any special characters, try again")
#         continue

#     ## Returning strength of the password
#     if 0 < password_strength_counter < 2:
#         print("Password Strength is weak")
#         continue
#     if 2 < password_strength_counter <= 4:
#         print("Password Strength could be better")
#         print(password_strength_counter)
#         continue
#     else:
#         print("Password is strong, valid password! Congratulations!")
#         break


## Question 3
## The question is asking you to create a data structure that is able to have a key - group name
## That is able to retrieve a value. Essentially forming a key-value pair 
## Essentially you are supposed to create a data structure that has a class of students, which has a value of 1-40 and store their score 1-100

# ## Creating a dictionary of the name labdir
# ## Setting all students within each lab to be default zero until filled in
# class_dir = {
#     "FE1" : [0 for x in range(0,41)],
#     "FE2" : [0 for x in range(0,41)],
#     "FE3" : [0 for x in range(0,41)],
#     "FE4" : [0 for x in range(0, 41)]
# }

# ## If the user wants to terminate the program:
# while True:
#     print("To terminate the program, you will need to type ######")
#     lab_id = input("What is your class/lab: ")
#     if lab_id == "####":
#         break
#     ## Now we will need to check if the user has input the correct lab_id
#     while(lab_id!= "FE1" and lab_id!="FE2" and lab_id!="FE3" and lab_id!="FE4"):
#         ## If the user input anything besides the required lab_ids, get them to enter the lab_ids again
#         print("You have entered an invalid lab_id, please try again! ")
#         lab_id = input("What is your class/lab: ")
#     print("--------Lab_ID Saved Successfully--------")
#     ## Now we need to get the user_index number 
#     user_id = int(input("Enter your lab id here from 1 - 40: "))
#     while user_id <1 or user_id >40:
#         print("Please enter a valid user id from 1 - 40: ")
#         user_id = int(input("Enter your lab id here from 1 - 100: "))
#         ## Now we need to get the user score 
#     print("-----------User_ID Saved Successfully!----------")
#     user_score = int(input("Enter your score here (from 1 - 100: "))
#     while user_score < 1 or user_score > 100:
#         print("You have entered a user score that is out of the range, please try again! ")
#         user_score = int(input("Enter your score here (from 1 - 100: "))
# ## Saving the score for a later time
#     print("-------------User Score Saved Succesfully!------------")
#     class_dir[lab_id][user_id] = user_score
#     print("!__________Score has been saved successfully!_________!")
#     break






# ## Question 4
# list1 = []
# list2 = []

# ##Getting the input for the two lists
# while True:
#     list1_input = input("Enter the scores for list 1: (if you are done, just type ####) ")
#     if list1_input != "####":
#         list1.append(int(list1_input))
#     else:
#         break
# while True:
#     list2_input = input("Enter the scores for list 2: (if you are done, just type ####) ")
#     if list2_input != "####":
#         list2.append(int(list2_input))
#     else:
#         break

# ## Finding the highest scores
# highest_list1 =max(list1)
# highest_list2 = max(list2)
# if highest_list1 > highest_list2:
#     print("Class 1 has higher scores than Class 2")
# elif highest_list1 == highest_list2:
#     print("Class 1 and 2 has the same scores")
# else:
#     print("Class 2 has higher scores than Class 1")

# ## Finding the highest average 
# average_list1 = sum(list1) / len(list1)
# average_list2 = sum(list2) / len(list2)
# if average_list1 > average_list2:
#     print("Average Class 1 is higher than Average Class 2")
# elif average_list1 == average_list2:
#     print("Both classes have the same score")
# else:
#     print("Average Class 2 is higher than Average list 1")


## Question 5
# print(list(x**2 for x in range(3,100,3)))