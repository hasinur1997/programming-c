#include<stdio.h>

int main()
{
	int i, sequence = 0;
	
	for(i = 1000; i >= 1; i--){
		
		printf("%d\t", i);
		
		sequence++;
		
		if(sequence == 5){
			
			printf("\n");
			
			sequence = 0;
		}
	}
	
	return 0;
}
