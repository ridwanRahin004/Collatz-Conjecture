#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ex();
int number;
int main(){
	printf("Enter number: ");
	scanf("%d" , &number);
	int i=1;
	while(number>=i){
		if(number%2==0 || number==1){
			number=number/2;
			printf("%d " , number);
		}
		else{
			number=(number*3)+1;
			printf("%d " , number);
		}
	}
	printf("\n\n[1] try again");
	printf("\n[0] exit");
	int ch;
	scanf("%d" , &ch);
	if(ch==1){
		printf("\n");
		main();
	}
	else{
		printf("\n\n BYE");
	}
	return 0;
}
