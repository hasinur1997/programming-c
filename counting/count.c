#include<stdio.h>

int main()
{
	int N, i, T, j, result;
	
	scanf("%d", &T);
	
	for(j = 1; j <= T; j++){
		
		printf("Enter  a number: ");
		scanf("%d", &N);
		
		for(i =1; i <= 10; i++){
		
			result = N * i;
			
			printf("%d X %d = %d\n", N, i, result);
		}
		
		printf("\n");
	}
	
	
	
	
	return 0;
}
