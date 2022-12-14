## Lab 5a 

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

red_int = get_color("red")
blue_int = get_color("blue")
green_int = get_color("green")
msg_color = (red_int, blue_int, green_int)
print(msg_color)