## Lab 5a 

## from sense_hat import SenseHat
## sense = SenseHat()
## sense.set_rotation(180)
## from textcolor import get_color

def get_color(color):
    mistake_counter = 0
    while True:
        col = int(input("Enter the value of the " + color + " color for message (0 to 255):"))
        if col <0 or col >255:
            mistake_counter += 1
            print(mistake_counter)
        else:
            print("The value you have entered for " + color + " is " + str(col))
            return col
            break
        if mistake_counter >3:
            print("You have exceeded the number of tries")
            return 0
            break


