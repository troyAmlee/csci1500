/*
 * Assignment 02, Question 1
 * 
variables required:
temp (floating point) to store the number of degrees to convert
letter (character) to store the character 'F' or 'C'

pseudocode solution:
Display "Please enter a temperature in Celsius (C) or Farhenheit (F): "
Read the temperature and temperature letter into the variables temp and letter
if letter == 'f' or letter == 'F'
    Display temp and " " and letter and " = " and (5.0/9.0)*(temp - 32.0) and " C"
else if letter == 'c' or letter == 'C'
    Display temp and " " and letter and " = " and 1.8 * temp + 32.0 and " F"
*/

/*
 * Assignment 02, Question 2
 * 
Variables required:
credits (integer) stores the number of college credits
grade_level (string) stores the string indicating the grade level

Pseudocode solution:
Display "Please enter the number of college credits you have completed so far: "
Read the number of credits into the variable credits
if credits < 32
    grade_level = "Freshman"
else if credits >= 32 and credits <= 63
    grade_level = "Sophomore"
else if credits >= 64 and credits <= 95
    grade_level = "Junior"
else
    grade_level = "Senior"
Display "Grade level: " and grade_level
*/

/*
 * Assignment 02, Question 3
 * 
 * Variables required:
 * first_score, 
 * second_score, 
 * third_score, 
 * highest, 
 * lowest: (floating point) to store the first score, second score, third score,
 * 		highest score out of the three, and lowest score out of the three
 * 
 * Pseudocode solution:
 * Display "Please enter three exam scores: "
 * Read the first score, second score, and third score into the
 * 		variables first_score, second_score, and third_score
 * if first_score >= second_score
 * 		highest = first_score
 * 		lowest = second_score
 * else
 * 		highest = second_score
 * 		lowest = first_score
 * if third_score >= highest
 * 		highest = third_score
 * if third_score >= lowest
 * 		Display "Highest score = " and highest
 * 		Display "Lowest score = " and lowest
 * else
 * 		lowest = third_score
 * 		Display "Highest score = " and highest
 * 		Display "Lowest score = " and lowest
*/

/*
Assignment 02, Question 4

Variables required:
shirts: (integer) to store the number of shirts to order
shirt_price, fee, total_price, total_finalCost: (floating point)
	to store the shirt price, the shipping fee, the total price of all the shirts, 
	and total final cost that includes shipping

Pseudocode solution:
Display "Enter the number of shirts: "
Read the number of shirts into the variable shirts
if shirts < 4
	shirt_price = 11.95
else if shirts >= 4 && shirts < 8
	shirt_price = 9.95
else
	shirt_price = 7.95
total_price = shirt_price*shirts
if total_price > 0 && total_price <= 25.00
	fee = 3.50
else if total_price >= 25.01 && total_price <= 75.00
	fee = 5.95
else if total_price >= 75.01
	fee = 7.95
Display "Shirt price: $" and shirt_price
		and "Total shirt cost = $" and total_price
		and "Shipping and handling = $" and fee
		and "Total final cost = $" and total_price + fee

*/