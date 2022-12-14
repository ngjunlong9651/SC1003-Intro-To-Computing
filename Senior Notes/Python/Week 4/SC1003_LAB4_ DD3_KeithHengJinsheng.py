# Coding Exercise 5A
from sense_hat import SenseHat
sense = SenseHat()
import random
import time
red, green, blue, white = (255,0,0), (0,255,0), (0,0,255), (255,255,255)
choices = [0,1,2,3,4,5,6,7] # Possible choices for positions
while True:
    sense.clear()
    redxy = [random.choice(choices), random.choice(choices)]
    greenxy = [random.choice(choices), random.choice(choices)]
    while greenxy == redxy:
        greenxy = [random.choice(choices), random.choice(choices)]
    bluexy = [random.choice(choices), random.choice(choices)]
    while bluexy == greenxy or bluexy == redxy:
        bluexy = [random.choice(choices), random.choice(choices)]
    whitexy = [random.choice(choices), random.choice(choices)]
    while whitexy == bluexy or whitexy == redxy or whitexy == greenxy:
        white = [random.choice(choices), random.choice(choices)]
    sense.set_pixel(redxy[0], redxy[1], red)
    sense.set_pixel(greenxy[0], greenxy[1], green)
    sense.set_pixel(bluexy[0], bluexy[1], blue)
    sense.set_pixel(whitexy[0], whitexy[1], white)
    time.sleep(1)

# Coding Exercise 5B
from sense_hat import SenseHat
sense = SenseHat()
import random
import time
sense.clear()
anglelist = [0,90,180,270] # possible angles for set_rotation()
def image():
    image_pixels = [b,r,r,g,g,r,r,b,
                    r,b,r,g,g,r,b,r,
                    r,r,r,w,w,r,r,r,
                    w,b,w,w,w,w,b,w,
                    b,w,b,w,w,b,w,b,
                    r,r,r,w,w,r,r,r,
                    r,g,r,g,g,r,g,r,
                    g,r,r,g,g,r,r,g,]
    return image_pixels
while True:
    r,g,b,w = (255,0,0), (0,255,0),(0,0,255),(255,255,255)
    sense.set_rotation(random.choice(anglelist))
    sense.set_pixels(image())
    time.sleep(1)
    r,g,b,w = (0,255,0),(255,0,0),(255,255,255), (0,0,255)
    sense.set_rotation(random.choice(anglelist))
    sense.set_pixels(image())
    time.sleep(1)

# Coding Exercise 5C
from sense_hat import SenseHat
sense = SenseHat()
import random
import time
sense.clear()
def image():
    image_pixels = [b,r,r,g,g,r,r,b,
                    r,b,r,g,g,r,b,r,
                    r,r,r,w,w,r,r,r,
                    w,b,w,w,w,w,b,w,
                    b,w,b,w,w,b,w,b,
                    r,r,r,w,w,r,r,r,
                    r,g,r,g,g,r,g,r,
                    g,r,r,g,g,r,r,g,]
    return image_pixels
def randomcolour():
    randomcolour = (random.randint(0, 255), random.randint(0, 255), random.randint(0,255))
    return randomcolour
while True:
    r,g,b,w = randomcolour(), randomcolour(), randomcolour(), randomcolour()
    sense.set_pixels(image())
    time.sleep(1)

# Coding Exercise 5D
from sense_hat import SenseHat
sense = SenseHat()
import random
import time
anglelist = [0, 90, 180, 270]
angle = 0
time = 1.0
w, g = (255,255,255), (0, 255, 0)
def image():
    image_pixels = [w,w,w,w,w,w,w,w,
                    w,w,w,g,w,w,w,w,
                    w,w,g,g,g,w,w,w,
                    w,g,w,g,w,g,w,w,
                    w,w,w,g,w,w,w,w,
                    w,w,w,g,w,w,w,w,
                    w,w,w,g,w,w,w,w,
                    w,w,w,w,w,w,w,w]
    return image_pixels
def gameover():
    global g
    g = [255, 0, 0] # set green to red
    sense.set_pixel(image())
    time.sleep(1)
    break
while True:
    sense.set_rotation(angle)
    print(sense.set_pixels(image())
    time.sleep(time)
    time -= 0.05
    acceleration = sense.get_accelerometer_raw()
    x = round(acceleration['x'])
    y = round(acceleration['y'])
    z = round(acceleration['z'])
    if angle == 0:
        if y != 1:
            gameover()
    elif angle == 90:
        if x != -1:
            gameover()
    elif angle == 180:
        if y! = -1:
            gameover()
    else:
        if x! = 1:
            gameover()
    newangle = random.choice(anglelist)
    while newangle == angle:
        newangle = random.choice(anglelist)
    angle = newangle
    

    
    

    
    



    
    





