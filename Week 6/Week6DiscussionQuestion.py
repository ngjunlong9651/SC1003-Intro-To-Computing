import random

computer_guess = random.randint(1000,9999)
computer_guess = str(computer_guess)
computer_guess = list(computer_guess)
print(computer_guess)
while True:
    user_guess = int(input("Please input 4 digits: "))
    if user_guess <1000:
        print("You have entered a value that is not 4 digits long")
        break
    user_guess = str(user_guess)
    user_guess = list(user_guess)
    print(user_guess)
    break

for i in user_guess:
    if user_guess[i] == computer_guess[i]:
        print("bingo")
    elif user_guess[i] in computer_guess:
        print("hello")
    else:
        continue