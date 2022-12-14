# Discussion 1
# Abstraction is the representation of an entity that only includes the most significant
# atttributes. Generally, abstraction allows the collection of entities into groups in which
# their common attributes need not be considered.
# For e.g if we define a bird to have 2 legs, 2 wings. A description of a crow need not include
# those attributes. Same for ravens & eagles. These common attributes in description of species
# of birds can be abstracted away, because all species have them. Within particular species,
# only attributes that distinguish the species need to be considered. For e.g., the attributes of
# a crow considered might be black and noisy, but not the other ones common to other birds. A
# less abstract view may be considered when it is necessary to see a higher level of detail,
# rather than just the special attributes.
# Abstraction is a mechanism to hide irrelevant details & represnet only the most essential
# features so that one can focus on important things at a time; it allows managing complex
# systems by concentrating on the essential features only.
# The two aspects of abstraction are: data abstraction & control abstraction.
# Data abstraction menas hiding details about the data & control abstraction means hiding
# the implementation details.




# Discussion 2
#Instructions
print("Key in password to test for strength. To stop testing, key in 'stop'.")
# Get password
while(True):
    password = input("Provide your password: ")
    if password == "stop":
        break
# Check password strength
    strengthpoints = 0
    lowercaseletter = uppercaseletter = number = specialcharacter = False
# At least 8 characters test
    if len(password) >= 8:
        strengthpoints += 1
    else:
        print("Password does not have 8 or more characters")
# Composition of password: Uppercase, Lowercase, Numbers, Special character
    for i in password:
        if 'a' <= i <= 'z':
            lowercaseletter = True
        elif 'A' <= i <= 'Z':
            uppercaseletter = True
        elif '0' <= i <= '9':
            number = True
        elif ' ' <= i <= '/' or ':' <= i <= '@' or '[' <= i <= '`' or '{' <= i <= '~':
            specialcharacter = True
# Testing combinations: Uppercase & Lowercase, Letters & Numbers, Special character
    if lowercaseletter == True and uppercaseletter == True:
        strengthpoints += 1
    else:
        print("Password does not have a mixture of uppercase & lowercase letter")
    if number == True:
        strengthpoints += 1
    else:
        print("password does not have numbers")
    if specialcharacter == True:
        strengthpoints += 1
    else:
        print("Password does not have special characters")
# Print password strength
    if 0 <= strengthpoints < 2:
        print("Password strength: Weak")
        continue
    elif 2 <= strengthpoints <= 3:
        print("Password strength: Medium")
        continue
    else:
        print("Password strength: Strong")
        break

