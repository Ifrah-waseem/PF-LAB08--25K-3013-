#include<stdio.h>
//nested loop
int main(){
	int i,j;
int num,table;
printf("enter number to print tables");
scanf("%d",&num);
for(i=1;i<=num;i++){
	printf("%d:",i);
	for(j=1;j<=10;j++){
		table=i*j;
		printf("%4d",table);
	
	}
	printf("\n");
}
	return 0;
}
