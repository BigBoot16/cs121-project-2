#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char userName[20];
	printf("What is your name? ");
	scanf("%s", userName);
	printf("Hello, %s, let's play a game! \n", userName);
	
	//generate random number
	srand(time(NULL));
	int correct = rand();
	correct = (correct % 100) + 1;

	//start game!
	int keepGoing = 1;
	int turns = 0;
	int guess = 0;
	while(keepGoing) {
		turns++;
		printf("turn %d) What is the number? ", turns);
		scanf("%d", &guess);
		if(guess == correct) {
			keepGoing = 0;
			printf("Congrats %s! That was the correct number! \n", userName);
		}// end game if guess is correct
		else {
			if(guess < correct){
				printf("The number is higher \n");
			}
			else {
				printf("The number is lower \n");
			}
		}
	}

	if(turns < 7) {
		printf("Wow! That was fast!");
	} else {
		if(turns == 7) {
			printf("Spot on! Good job!");
		} else {
		printf("That took longer than expected.");
		}
	}
}
