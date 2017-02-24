#include <bits/stdc++.h>
int main(){
	
	while(true){

	int input,numbers[10],i,check=0,check1=0;
	
	scanf("%d", &input);
	
	for(i=0;i<input;i++){
		
		scanf("%d", numbers);
	//	printf("n==%d\n",numbers[0]);
		if(numbers[i]%2==0){
			check++;
			if(check==1){
				printf("%d\n",i+1);
			}
		
		}else{
			check1++;
			if(check1==1){
				printf("%d\n",i+1);
			}
		}
	
		
	
}
}
}
		
		
