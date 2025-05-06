#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX_LIMIT 100
#define MIN_LIMIT 1

int check(int r, int u){
	if(r==u){
		printf("[+] Correct, You Win!\n");
		return 1;
	}
	else if(r > u)
		printf("[+] Higher than %d\n",u);
	else
		printf("[+] Lower than %d\n",u);
	return 0;
}


int main(){
	int user_input,random,n,i;
	

	printf("Guess the number that i am thinking between 1-100. You have only 7 Guesses\n");

	i = 0;
	srand(time(0));
	random = rand()%MAX_LIMIT+MIN_LIMIT;
	n = log2(MAX_LIMIT)+0.5;

	while(i < n){
		printf("Enter your guess(%d) : ", i+1);
		if(scanf("%d", &user_input) == 1){
			if(user_input >= MIN_LIMIT && user_input <= MAX_LIMIT){
				if(check(random, user_input)){
					break;
				}
				i++;
			}
			else{
				printf("[-] Error: Input must be between 1 and 100.\n");
			}
		}
		else{
			printf("[-] Error: Invalid input. Please enter an integer.\n");
			while(getchar() != '\n');
		}
	}
	if(i == n){
		printf("[-] Sorry, You lost!\n");
	}
		
	
}
