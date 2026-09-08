/* EECS_348_Assignment_1
 * C program that picks a number between 1 and 10, the user gets 3 tries to guess it
 * Terminal output between user and program
 * No other collaborators
 * Co-Pilot and Gemini
 * Wyatt Sullivan*/

#include <stdio.h> 
 
int main() { 
   int secret = 7; // fixed secret number 
   int guess; //variable that stores user guess
   int attempt; //variable that stores the current guess
 
   printf("Guess a number between 1 and 10.\n"); //output to user
 
   for (attempt = 1; attempt <= 3; attempt++) { //for loop that iterates three times
        printf("Attempt %d/3. Enter your guess: ", attempt); //output to user

	//code by Gemini via google search	
 	while (scanf("%d", &guess) != 1) { //loops until the user provides a good input
        	printf("Invalid input. Please enter a valid number: "); //output to user
        
        	// Clear the bad string input out of the buffer manually
        	int ch;
        	while ((ch = getchar()) != '\n' && ch != EOF); 
   	}
	//end of code by Gemini

	if (guess > 10 || guess < 1){ //checks if guess is within asked range
		printf("Please enter a number between 1 and 10\n"); //output to user
	} else if (guess == secret) { //checks if the guess is the correct number
        	printf("Correct! You win!\n"); //output to user
        	return 0;   // stop immediately 
        } else if (guess < secret) { //checks if the guess is too low
         	printf("Too low! Try again.\n"); //output to user
       	} else { //runs if guess is too high
           	printf("Too high! Try again.\n"); //output to user
       	} 
   } 
 
   printf("Sorry, you lose! The number was %d.\n", secret); //prints only if the correct answer was not guessed
 
   return 0; //ends the main function
} 
