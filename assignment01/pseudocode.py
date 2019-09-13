# 1.	Write a program to determine the number of laps a jogger needs to jog on an indoor track based on the number of miles the jogger wishes to jog. 
#       Assume that the track is 1/14 mile long. 
#       The program should prompt the user to enter the number of miles she wishes to jog, 
#       read this number, 
#       and then calculate and display the number of laps the jogger needs to jog to cover that mileage. 
#       You should assume that the number of miles entered will be a positive integer value. 
#       Here is what output should look like from running the program (user input is shown in bold):
#       Enter number of miles to jog: 4
#       You need to jog 56 laps.
########################################################################
#   declare an int variable called 'miles' that stores the users input
#   prompt the user to input the number of miles to jog
#   create an int variable called total_laps that stores the miles variable multiplied by 14
#   print out the string "You need to jog {total_laps} laps." to the user
########################################################################
import time
import math

mileage = input("Enter number of miles to jog: ")
if(mileage[0] == "-"):
    print("Our track doesn't accept the counter-clockwise direction.")
    print("Let me take care of that negative for you...")
    time.sleep(1)
    print("...")
    time.sleep(1)
    print("...")
    time.sleep(1)
    mileage = mileage[1:]
    
for i in mileage:
    if i == ".":
        mileage = float(mileage)
        break
    
def jogger(miles):
    if(type(miles) == str):
        miles = int(miles)
    if(type(miles) == float):
        miles = round(miles, 1)
    total_laps = miles*14
    
    print("Since our track is 1/14th of a mile \nYou need to jog {} laps.".format(total_laps))
       
jogger(mileage)



# 2.	Write a program that will compute the surface area and the volume of a box. 
# The program should prompt the user to enter the length, width, and height of the box (all in inches), 
# read these numbers, and then calculate and display the box surface area and volume.  
# Note: Box surface area = 2(lw + lh + wh) and box volume = lwh, where l = box length, w = box width, and h = box height. 
# You should assume that the box length, width, and height entered will be positive integer values. 
# Here is what output should look like from running the program (user input is shown in bold):
# Enter box length, width, and height (inches): 6 2 9
# Box surface area = 168 square inches
# Box volume = 108 cubic inches

####################################################################################
# Variables required:
# length, width, height: (integer) to store the length, width, and height
# box_area, box_volume: (integer) to store the boxes area, and boxes volume 
#
# Pseudocode solution:
# Display "Please enter the dimensions of your box in inches: "
# Read the length into the variable length
# Read the width into the variable width
# Read the height into the variable height
# Let the variable box_area = 2*(length*width+length*height+width*height)
# Let the variable box_volume = length*width*height
# Display "Box surface area = " and box_area and " square inches"
# Display "Box volume = " and box_volume and " cubic inches"

def box():
    print("Welcome to the box calculator")
    print("Please enter the dimensions of your box in inches:")
    length = int(input("length: "))
    width = int(input("width: "))
    height = int(input("height: "))
    box_area = 2*(length*width+length*height+width*height)
    box_volume = length*width*height
    print("Box surface area = {} square inches".format(box_area))
    print("Box volume = {} cubic inches".format(box_volume))

    
box()
    


        
# 3.	Write a program that converts an input number of quarters, dimes, nickels, and pennies into 
# a dollar total. 
# First, for each of the coin denominations, the program should prompt the user to 
# enter the number of that coin and then read that number. 
# Then, the program should calculate and display the coin counts and the total coin value in dollars. 
# You should assume that the coin counts entered will be non-negative integers. 
# But, note that the total coin value will be a floating point value. 
# Here is what output should look like from running the program (user input is shown in bold):
# Enter number of quarters: 2
# Enter number of dimes: 3
# Enter number of nickels: 5
# Enter number of pennies: 4
# 2 quarters, 3 dimes, 5 nickels, and 4 pennies = $1.09

def money():
    print("How much change do you have? ")
    quarters = int(input("Enter number of quarters: "))
    dimes = int(input("Enter number of dimes: "))
    nickels = int(input("Enter number of nickels: "))
    pennies = int(input("Enter number of pennies: "))

    total_quarters = quarters*.25
    total_dimes = dimes*.10
    total_nickels = nickels*.05
    total_pennies = pennies*.01

    total = total_quarters + total_dimes + total_nickels + total_pennies

    print(f"{quarters} quarters, {dimes} dimes, {nickels} nickels, and {pennies} pennies = ${total}")

money()


# 4.	Write a program that converts a measurement given in feet into the equivalent number of 
# (a) yards, (b) inches, (c) centimeters, (d) meters. 
# The program should first prompt the user to enter the number of feet to be converted. 
# It should then read that value, calculate each of the converted lengths, and then 
# display the converted lengths, rounded to two decimal places of accuracy. 
# You should assume that the number of feet entered will be a floating point value. 
# Note: All the converted lengths will also be floating point values. 
# Conversion facts:  
# 1 yard = 36 inches; 
# 1 foot = 12 inches; 
# 1 inch = 2.54 cm; 
# 1 meter = 100 cm. 
# Here is what output should look like from running the program (user input is shown in bold):
# Enter number of feet: 4
# = 1.33 yards
# = 48 inches
# = 121.92 cm
# = 1.22 meters

def feet_conversion():
    feet = float(input("Please input the number of feet to be converted: "))
    yards = round((feet*12)/36, 2)
    inches = round(feet*12, 2)
    centimeters = round((feet*12)*2.54, 2)
    meters = round((feet*12)*(2.54)/(100), 2)

    print(f"= {yards} yards")
    print(f"= {inches} inches")
    print(f"= {centimeters} cm")
    print(f"= {meters} meters")

feet_conversion()





# 5.	Write a program that converts a liquid measurement given in ounces into 
# the equivalent measurement given in quarts and ounces. 
# The program should first prompt the user to enter the total ounces amount, read the number in, and then 
# convert and display what that total ounce amount is equal to in quarts and ounces. 
# You should assume that the number of total ounces entered will be a positive integer. 
# Note that the number of quarts and remainder ounces will also be integer values. 
# Conversion fact: 1 quart = 32 ounces. 
# Here is what output should look like from running the program (user input is shown in bold):
# Enter number of ounces: 68
# 68 oz. = 2 qt. 4 oz.
# 	Hint:  Make use of the integer division and modulus operators.

def liquid():
    ounces = int(input("Please enter number of ounces: "))
    leftover_oz = ounces%32
    max_quarts = ounces//32
    print(f"{ounces} oz. = {max_quarts} qt. {leftover_oz} oz.")

liquid()




# Part 2

# Using the pseudocode you developed for each of the problems given in Part 1, write complete C++ programs for each of the problems. 
# Here are the things you need to do for each problem:
# Convert your pseudocode into C++ code. 
# Follow the coding guidelines in the textbook. 
# Remember to use appropriate data types for all variables. 
# Remember to include each name of your group in a comment at the top of the program.
# Save your source code use a descriptive filename so that you remember what is what. 
# When working on campus, save the file to the C:\CSCI1500 folder and then when you are done, copy the saved source code (i.e., the .cpp file) to your flash stick.
# Compile and run the program and verify that it works properly.
# Print out the source code.

# What you need to turn in: A printed copy of your C++ source code for each of the problems, arranged in order, and stapled together. 
# Include each name of your group on the front page of your print-outs. 
# Clearly identify which print-out solves which problem.
