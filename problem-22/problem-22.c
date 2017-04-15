#include<stdio.h>

int isPrime(int number){
	
	int i;
	
	if(number <= 1){
		
		return 0;
	}
	
	for(i = 2; i < number; i++){
		
		if(number % i == 0){
			
			return 0;
		}
	}
	return 1;
}

int main(){
	
	int i, T, a, b, k, totalprime = 0;
	
	scanf("%d", &T);
	
	for(i = 1; i <= T; i++){
		
		scanf("%d", &a);
		
		scanf("%d", &b);
		
		for(k = a; k <= b; k++){
			
			if(isPrime(k)){
				
				totalprime++;	
			}
		}
		printf("%d", totalprime);
		
		totalprime = 0;
	}
	
	
	return 0;
}
