Discussion 1
first 6
third 7
third 9
third 10
fourth 10
fifth 10

Discussion 2
1. variable count has not been initialised
2. Wrong use of break
3. Condition update is missing, looping never end. Sentinel condition is missing
4. Wrong indentation of print(), output is a count of every string with 'a' rather than the result of
all 'a' in total

count = 0
word = input("Give me a string: ")
while (word != "####"):
    for letter in word:
        if letter == "a":
            count += 1
        word = input("Give me a string: ")
            break
print(f"{count} strings with letter 'a'")

Discussion 3
for i in range (1, 21):
    if i%15 == 0:
        print("FizzBuzz")
    elif i%3 == 0:
        print("Fizz")
    elif i%5 == 0:
        print("Buzz")
    else:
        print(i)
In the case of testing for dividing two numbers e.g. 3 & 5, only the lowest common multiple
needs to be considered, e.g if x % 15 == 0, by default if x < 15, it will not be able
to divide by 15 & every common multiple of 3 & 5 is a multiple of 15

Discussion 4
width = int(input("Width of shape: "))
for x in range (1, 2*width):
    if x > width:
        x = 2*width - x
    print(x*"*")
