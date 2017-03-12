#include<stdio.h>

int main()
{
	int i, j, k, N, T;
	
	scanf("%d", &T);
	
	for(k = 1; k <= T; k++){
		
		scanf("%d", &N);
		
		for(i = 1; i <= N; i++){
			
			for(j = 1; j <= N; j++){
				
				printf("*");
			}
			
			printf("\n");
		}
		printf("\n");	
	}	
	
	
	return 0;
}
