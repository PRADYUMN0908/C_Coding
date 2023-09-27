#include<stdio.h>
int main(){
	int a[100],n,i,search, count;
	
	printf("Enter the number of element:");
	scanf("%d",&n);
	
	printf("\nEnter %d Number:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
		
		printf("Enter search Number:");
		scanf("%d",&search);
		
		// SEARCHING.....
		
		for(i=0;i<n;i++){
			if(search==a[i]){
				printf("\n %d is present %d location",search,i+1);
				count++;}}
				
				if(count==0){
					printf("%d is not present here\n",search);}
					
					else{
						printf("\n %d is present %d times in this array",search,count);}
						
				
				return 0;}