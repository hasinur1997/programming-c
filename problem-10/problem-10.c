#include<stdio.h>

int main(){
	
	int T, i, r1, r2, B, played_ball;
	
	int currentRunrate, requiredRunrate, over;
	
	scanf("%d", &T);
	
	for(i = 1; i <= T; i++){
		
		scanf("%d %d %d", r1, r2, B);
		
		played_ball = 300 - B;
		
		currentRunrate = (r2 / played_ball) * 6;
		
		requiredRunrate = ((r1 - r2 + 1) / B) * 6;
		
		printf("%d %d",currentRunrate,  requiredRunrate);
		
		
	}
	
	return 0;
}
