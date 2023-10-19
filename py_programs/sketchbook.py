# COMP1021 Lab 2 Python Sketchbook
# Name: Siow, Terng Juen    
# Student ID: 20995861
# Email: tjsiow@connect.ust.hk

import turtle       # Import the turtle module for the program

turtle.width(4)
turtle.speed(0) # fastest speed is 0

##### Initialize the colour
fillcolor = "black" # default fillcolor initialised
turtle.pencolor("black")
turtle.fillcolor(fillcolor)

print("Welcome to the Python Sketchbook!")

##### While loop to repeat the main menu

# Initialize the option to empty in order to enter the while loop
option = ""


while option != "q": # While the option is not "q", it will keep prompting us to enter our option, which has it's own instructions....
    print()
    print("Please choose one of the following options:")
    print()
    print("m - Move the turtle")
    print("t - Rotate the turtle")
    print("l - Draw a line")
    print("r - Draw a rectangle")
    print("c - Draw a circle")
    print("p - Change the pen colour of the turtle")
    print("f - Change the fill colour of the turtle")
    print("g - Draw a generated flower")
    print("z - Clear the canvas")
    print("q - Quit the program")
    print("a - Draw the author's information")
    print()

    option = input("Please enter your option: ")

    ##### Handle the move option
    if option == "m":   # done
        print()

        # Ask the user for the x and y value
        x = input("Please enter the x value: ")
        x = int(x)
        y = input("Please enter the y value: ")
        y = int(y)

        # Move the turtle without drawing anything
        turtle.up()
        turtle.goto(x, y)
        turtle.down()

    ##### Handle the rotate option
    if option == "t":   # done
        print()

        #
        # Please put your code here
        angle = int(input("Please enter the angle to rotate: "))
        turtle.right(angle)
        #

    ##### Handle the line option
    if option == "l":
        print()

        # Ask the user for the x and y value
        x = input("Please enter the x value: ")
        x = int(x)
        y = input("Please enter the y value: ")
        y = int(y)

        # Move the turtle and draw a line
        turtle.goto(x, y)

    ##### Handle the rectangle option
    if option == "r":
        print()

        #
        # Please put your code here
        x = int(input("Please enter the x value: "))
        y = int(input("Please enter the y value: "))

        turtle.begin_fill()
        for i in range(2):
            turtle.forward(x)
            turtle.right(90)
            turtle.forward(y)
            turtle.right(90)
        turtle.end_fill()

        # turtle is supposed to go back to the same position as before? ? ?
        # turtle.up()
        # turtle.goto(0,0)
        # turtle.down()
        #

    ##### Handle the circle option
    if option == "c":
        print()

        #
        # Please put your code here
        radius = int(input("Please enter the radius value: "))
        turtle.begin_fill()
        turtle.circle(radius)
        turtle.end_fill()
        #

    ##### Handle the pen colour option
    if option == "p":
        print()

        #
        # Please put your code here
        pen_colour = input("Please enter the pen colour: ")
        turtle.color(pen_colour)
        #

    ##### Handle the fill colour option
    if option == "f":
        print()

        #
        # Please put your code here
        fillcolor = input("Please enter your preferred fill color: ")
        turtle.fillcolor(fillcolor) # change the default fillcolor to the user's desired color
        # turtle.begin_fill() these should be added to the shapes
        # turtle.end_fill()
        #

    ##### Handle the generated flower option
    if option == "g":
        print()
        
        petals = int(input("Please enter the number of petals: "))
        length = int(input("Please enter the length of each petal: "))
        for petal in range(petals):
            for i in range(3):
                turtle.forward(length)
                turtle.right(120)
            turtle.right(360/petals)
        # done

    ##### Handle the generated explosion option
    if option == "e":
        print()
        
        size = int(input("Please input the size of desired explosion (>150): "))
        for thiscolor in ["sienna", "brown", "red", "dark orange", "orange","gold2", "gold", "yellow"]:
            turtle.color(thiscolor)
            turtle.dot(size)
            size -= 20


    ##### Handle the author's information option
    if option == "a":
        print()

        # print your initials, T S T J
    # LETTER T
        # horizontal part
        turtle.up()
        turtle.goto(-200, 35)
        turtle.down()
        turtle.color("navy")
        for i in range(5):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()
        #vertical part
        turtle.up()
        turtle.goto(-170, 20)
        turtle.down()
        turtle.right(90)
        for i in range(6):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()

    # LETTER S
        # horizontals
        turtle.up()
        turtle.goto(-100, 35)
        turtle.left(90)
        turtle.down()
        turtle.color("medium blue")
        for i in range(5):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()
        turtle.up()
        turtle.goto(-100, -10)
        turtle.down()
        for i in range(5):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()
        turtle.up()
        turtle.goto(-100, -55)
        turtle.down()
        for i in range(5):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()

        # verticals
        turtle.up()
        turtle.goto(-100, 20)
        turtle.right(90)
        turtle.down()
        for i in range(2):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()
        turtle.up()
        turtle.goto(-40, -25)
        turtle.down()
        for i in range(2):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()

    # LETTER T
        # horizontal part
        turtle.up()
        turtle.goto(0, 35)
        turtle.left(90)
        turtle.down()
        turtle.color("blue")
        for i in range(5):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()
        #vertical part
        turtle.up()
        turtle.goto(30, 20)
        turtle.down()
        turtle.right(90)
        for i in range(6):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()


    # LETTER J
        # horizontal part
        turtle.up()
        turtle.goto(100, 35)
        turtle.left(90)
        turtle.down()
        turtle.color("royal blue")
        for i in range(5):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()
        #vertical part
        turtle.up()
        turtle.goto(145, 20)
        turtle.down()
        turtle.right(90)
        for i in range(5):
            turtle.dot(10)
            turtle.up()
            turtle.forward(15)
            turtle.down()
        turtle.up()
        turtle.right(90)
        turtle.forward(15)
        turtle.down()
        turtle.dot(10)
        turtle.up()
        turtle.forward(15)
        turtle.down()
        turtle.dot(10)
        
        turtle.up()
        turtle.forward(15)
        turtle.right(90)
        turtle.forward(15)
        turtle.down()
        turtle.dot(10)
        turtle.hideturtle()
        
    
    ##### Handle the clear option
    if option == "z":
        print()
        
        turtle.clear()
    
turtle.done()
