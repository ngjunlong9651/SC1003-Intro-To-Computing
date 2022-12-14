# Qn 1
How are ya, sweetie?How are ya, sweetie?
Beat the clock.
eat the clock.
win a toy. // input
win a toy.
snoopy. // input
win a snoopy.
win
chat
hat
at
t
t
at
How are ya, sweetie?

# Qn2
// The function takes in a string argument and a character argument
// It compares each character in the string to the character argument passed
// If there is any character in the string identical to the character argument passed,
// the character is removed from the string, the final result is the original string less all the characters
// identical to the character argument
// The no. of characters in the string identical to the character argument is then returned as int z

int main(){
    char str[] = "acbcdccefc"; // string passed has 5 'c' idential to character argument
    char c = 'c';
    printf("%d\n", unknown(str, c));
    printf("%s\n", str);
}

// Output
5 // no. of character 'c' found in string argument
abdef // string modified, character 'c' idential to character argument removed

# Qn3
#include <stdio.h>
#include <string.h>
char *stringcpy(char * s1, char * s2, int n);

int main(){
    // initialise string1 & string2, int n
    char s1[50], s2[50], *p; int n;
    // ask for string2
    printf("Enter the string: \n");
    fgets(s2, 50, stdin); if (p = strchr(s2, '\n')) *p = '\0';
    // ask for n letters to be copied
    printf("Enter the number of characters: \n");
    scanf("%d", &n);
    // function
    printf("%s", stringcpy(s1, s2, n));
}

char *stringcpy(char * s1, char * s2, int n){
    int i = 0;
    while (i < n){
        if (*(s2 + i) == '\0') break;
        *(s1 + i) = *(s2 + i);
        i++;
    }
    while (i < n){
        *(s1 + i) = '\0';
        i++;
    }
    return s1;
}

# Qn4
#include <stdio.h>
int stringcmp(char *s1, char *s2);

int main(){
    // initialise strings s1 & s2
    char s1[50], s2[50];
    // ask for source string & target string
    printf("Enter a source string: \n");
    scanf("%s", s1);
    printf("Enter a target string: \n");
    scanf("%s", s2);
    // function
    int result = stringcmp(s1, s2);
    //print result
    if (result == -1) printf("stringcmp(): less than\n");
    else if (result == 0) printf("stringcmp(): equal\n");
    else if printf("stringcmp(): greater than\n");
    else printf("Error\n");
}

int stringcmp(char *s1, char *s2){
    int count = 0;
    while ((s1[count] != '\0') || (s2[count] != '\0')){
        if (s1[count] < s2[count]) return -1;
        if (s1[count] > s2[count]) return 1;
        count++;
    }
    return 0;
}

