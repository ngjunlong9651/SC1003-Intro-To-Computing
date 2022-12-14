1.
a. character, b. decimal integer (base 10), c. floating-point, d. (ACSII code in octal for space char ' '),
e. hexadecimal integer (0x prefix means hexadecimal (base 16)), f. character (alarm escape sequence), g. decimal long integer,
h. floating-point, i. negative decimal integer, j. octal integer (0 prefix for octal numbers, base 8),
k. hexadecimal integer (hexadecimal non-case sensitive), l. hexadecimal long integer (0x or 0X are both prefixes for hexadecimal)

Note:
\xdd escape sequence (ACSII code in hexadecimal for certain character, d is hexadecimal)
2.
a. //Output
AAAA
b. integer 65 will be printed instead
c. char ')' will be printed instead
d. char 'e' will be printed instead

3.
a. The program will wait for the input of two integers separated by one space (or one
   white space, i.e. the space, tab or newline character), e.g. 23 45.
b. This is an errorous statement by omitting the ‘&’, i.e. the address operator. The program
   will terminate abnormally.
c. The program will wait for input of 2 integers separated by one '/', e.g 23/45
d. B is assigned a value which is mathematically zero. But on most machines, this value will not
   be zero, showing that even the double precision is not sufficient.
   When a very large number (A * A * A) is added to a very small number (0.37/A), the result is an approximation of the
   real sum.    In this case the approximation is the very large number that we started with.
   Thus the subtraction gets the result down to zero, and the final value assigned to B is just –
   0.37/A.  This effect is called roundoff error.
   Beware, after thousands of successive operations, the total roundoff error can be
   ridiculously high if care is not taken.  This limitation is present in all programming languages,
   not just C.

4.
Operations involving floating point numbers can be inexact.

5.
a. 5
b. 4 (m/j = 2)
c. 224.0
d. 10
e. 10
f. -26.4
g. m == 1, n == 1, j == 1
h. 30 (float g == 3.20000 converted to int g == 3)
i. 34 (float result == 32.000000 converted to int result == 32)
j. 3 (float result == 3.200000 converted to int result == 3)

6.
a. valid, b. invalid (number is variable), c. valid (SVALUE is not variable, is an integer constant), d. invalid (80.1 is float, not integer)

7.
a. count = 0
b. for (count = -DLENGTH*1000; count <= DLENGTH*1000; count++); or add an outer loop with 1000 repetitions
c. count = scanf("%d", &count) or don't use DLENGTH, use user-definer input //user can choose how adjust length by adjusting count value

8.
No, if x = 0, for (a) it will evaluate to false but for (b) illegal division by 0 occurs
This is called short circuit behavior of logical operators that skips evaluating
parts of a (if/while/...) condition when able. In case of a logical operation on two operands,
the first operand is evaluated (to true or false) and if there is a verdict (i.e. first operand is
false when using &&, first operand is true when using ||), the second operand is not
evaluated.

9.
#include <stdio.h>

int main(){
   int x,y;
   x = 1; y = 3;
   x = x + y;
   y = x - y; // y = x
   x = x - y;
   printf("%d%d", x, y);
}
