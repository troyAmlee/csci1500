#include <iostream>
#include <string>
#include <cmath>

/*
2. Write a program that will prompt for 
*   and read in a list of test scores 
*   (integers in the range 0-100) from the user 
*   and will determine and print out:
*	The total number of test scores entered.
*	The maximum of the test scores entered.
*	The minimum of the test scores entered.
*	The average of all of the test scores entered.
Assume that the user enters a negative sentinel value to indicate 
"end of data entry". 
Do not assume that the user knows how many numbers are to be entered.
Here is an example of what output 
should look like from running your program 
(user input is shown in bold):
Enter score 1: 82
Enter score 2: 72
Enter score 3: 65
Enter score 4: 58
Enter score 5: 91
Enter score 6: 69
Enter score 7: 89
Enter score 8: -1
You entered 7 scores.
Maximum score = 91
Minimum score = 58
Average score = 75.1429
*/

using namespace std;

int main(){
    cout << "Please enter a list of test scores between 1-100: ";
    double score;
    double highest = 0;
    double lowest = 0;
    double total = 0;
    int count = 0;
    while (cin >> score && score >= 0){
        cout << count << endl;
        if (score > 100){
            cout << "Number too high...enter between 0-100 \n";
            continue;
        }
        if (lowest == 0 && highest == 0 && score == 0){
            count++;
            continue;
        }
        else if (lowest == 0 && highest == 0 && score > 0){
            highest = score;
            total = total + score;
            count++;
        }
        else if (count == 1 && lowest == 0 && score <= highest){
            lowest = score;
            total = total + score;
            count++;
        }
        else if (count == 1 && lowest == 0 && score > highest){
            lowest = highest;
            highest = score;
            total = total + score;
            count++;
        }
        else if (count > 1 && score >= highest){
            highest = score;
            total = total + score;
            count++; 
        }
        else if (count > 1 && score < lowest){
            lowest = score;
            total = total + score;
            count++;
        }
        else{
            total = total + score;
            count++;
        }
        
    }
    cout << "Maximum score: " << highest << endl;
    cout << "Minimum score: " << lowest << endl;
    cout << "Total: " << total << endl;
    cout << "Count: " << count << endl;
    cout << "Average score = " << total/count << endl;
    return 0;
}