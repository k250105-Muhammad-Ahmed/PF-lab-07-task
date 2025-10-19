#include <stdio.h>

int main(){
	int arr[10],i=0,max=0,min=0,result=0;
	
	printf("Enter Numbers in array:\n");
	
	for (i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	for (i=0;i<10;i++){
		if (max<arr[i]){
			max=arr[i];
		}
	}
	min=arr[0];
	for (i=0;i<10;i++){
		if (min>arr[i]){
			min=arr[i];
		}
	}
	result=max-min;
	
	printf("Max:%d",max);
	printf("Min:%d",min);
	printf("Re%d",result);
	
	return 0;
}

