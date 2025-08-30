#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int random, input;
  
  srand(time(NULL));
  
  random = rand() % 100;
  
  while(input != random){
  	printf("Tente adivinhar o numero secreto:");
  	scanf("%d", &input);
  	
  	if (input > random){
  		printf("tente um numero menor\n");
	} else if (input < random){
		printf("tente um numero maior\n");
	} else {
		printf("parabens, voce ganhou");
	}
  }
  
  return 0;
}