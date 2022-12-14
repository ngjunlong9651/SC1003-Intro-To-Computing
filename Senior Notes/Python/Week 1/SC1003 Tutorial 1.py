Discussion 1
1. No statement to modify counter-control variable, while loop is infinite
2. Initialise total = 0
3. Condition allows for input of 11 student's score, condition should be set to
   student_counter < 10

Discussion 2
check if score is within range of possible scores
if score greater than or equal to passing score:
    add one to passes
else:
    add one to failures

print no. of passes
print no. of failures

Discussion 3
# Generate 1 to 20 using range function
# Print 1 to 20 using for loop with variable taking values in range
for x in range(1, 21): # multiple of 15 condition placed before other conditions to prevent repeated printing of certain values
    if x%15 == 0:
        print("Fizzbuzz")
    elif x%3 == 0:
        print("Fizz")
    elif x%5 == 0:
        print("Buzz")
    else:
        print(x)
        
Discussion 4:
c = 10
7 = a (cannot assign variable to literal)
a = d (works if d is defined)
a = c + 1
a + c = c (cannot assign variable to operation)
3 + a (if a is defined, nothing wrong but value of operation is not assigned to any variable & irretrievable)
7up = 10 (variable name cannot start with digit)
import = 1003 (variable name cannot be keyword)
b = math.pi * c (if math has been imported, works)

int = 500 (int is not reserved word, this works but is not good practise)

a ** 3 (works if a defined but value of operation not assigned to any variable & irretrievable)
a,b,c = c,1,a (works)
b,c,a = a,b (expecting 3 arguments to be assigned to 3 variable, but only 2)
c = b = a = 7 (works)
print( A ) (if A is defined variable, works)
print( "b*b + a*a = c*c" ) (printing string within "")
print( ‘A’ ) (printing string "A")
print( "c" = 1 ) (does not work, assignment within print() function)

Discussion 5:
# Ask for no. of boys & girls
boysno = int(input("Enter the number of boys: "))
girlsno = int(input("Enter the number of girls: "))
# Calculate percentages
totalno = boysno + girlsno
boyspercent = boysno/totalno
girlspercent = girlsno/totalno
# Print percentage
print("Boys:{0:.0%}".format(boyspercent))
print("Girls:{0:.0%}".format(girlspercent))  
 


