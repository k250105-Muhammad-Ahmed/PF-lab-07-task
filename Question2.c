#include <stdio.h>

int main(){
	
	int arr[10],i=0,count=0,num=0;
	
	printf("Enter Numbers in array:\n");
	
	for (i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter number to search:\n");
	scanf("%d",&num);	
	for (i=0;i<10;i++){
		if(arr[i]==num){
			count++;
		}
	}
	if (count>0){
		printf("%d",count);
	}
	else{
		printf("Not in array");
	}
		
	return 0;	
}
