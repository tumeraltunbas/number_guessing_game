#include<stdio.h>
int main () {
	int number=22;
	int guess;
	printf("NUMBER GUESSING GAME\n");
	printf("Please enter the number you guessed: ");
	scanf("%d",&guess);
	if (number==guess) {
		printf("Congratulations you found the right number!");
	}
	else {
		printf("Your guess is wrong.\n");
		if (number<guess){
			printf("Please enter a lower number.\n");
		}
		else {
				printf("Please enter a higher number.\n");
			}
		
	}
	return 0;
}
