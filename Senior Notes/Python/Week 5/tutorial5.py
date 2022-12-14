# def f1(): Choose 4 random digits (target number) and order them in a sequence, return target number
# def f2(target number): check if input characters have same value as target number character values, add count to cows, return cows
# def f3(target number): check if input character has same value & position as target number characters, add count to bulls, return bulls
# def mainf(): continue game if user has not won, quit if user has won
import random
def diffdigit(digit1, digit2, digit3): # function to ensure new digit different from previous digits
    newdigit = str(random.randint(0,9))
    while newdigit == digit1 or newdigit == digit2 or newdigit == digit3: 
        newdigit = str(random.randint(0,9))
    return newdigit
def f1(): # function to create target number with 4 random different digits
	digit1 = digit2 = digit3 = digit4 = "novaluesyet"
	digit1 = str(random.randint(0,9))
	digit2 = diffdigit(digit1, digit2, digit3)
	digit3 = diffdigit(digit1, digit2, digit3)
	digit4 = diffdigit(digit1, digit2, digit3)
	targetnumber = digit1 + digit2 + digit3 + digit4
	return targetnumber

def cow(targetnumber, usernumber): # function to determine how many cows user scores
    cows = 0
    for x in usernumber:
        if x in targetnumber:
            cows += 1
    return cows
def bull(targetnumber, usernumber): # function to determine how many bulls user scores
	bulls = 0
	for x in range(0, 4):
		if usernumber[x] == targetnumber[x]:
			bulls += 1
	return bulls
def mainf(targetnumber, attempts): # main function that runs game
# Ask for user's guess
	usernumber = input("Please input 4 digits:")
# check for cows
	cows = cow(targetnumber, usernumber)
# check for bulls
	bulls = bull(targetnumber, usernumber)
# if won
	if bulls == 4:
		print(f"You win!!\nAttempts: {attempts}")
		return bulls
	else:
		print(f"{bulls} A (Bulls) {cows} B (Cows)") # print score if haven't win
		mainf(targetnumber, attempts + 1) # continue game
targetnumber = "7598"
attempts = 1
mainf(targetnumber, attempts)
