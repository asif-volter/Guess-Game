#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void check(int r, int u){
	if(r==u){
		printf("[+]Correct, You Win!\n");
		exit(0);
	}
	else if(r > u)
		printf("[-]Higher than %d\n",u);
	else
		printf("[-]Lower than %d\n",u);
}

int main(){
	int user_input,random,n,i;
	srand(time(0));
	random = rand()%100+1;

	printf("Guess the number that i am thinking between 1-100\n");

	
	n = log2(100)+0.5;


	for(i=0;i<n;i++){
		printf("Enter your guess(%d) : ",i+1);
		scanf("%d",&user_input);
		check(random,user_input);
	}
	printf("Sorry, You Lost!\n");

}
