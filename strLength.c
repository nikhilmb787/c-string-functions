// Function to calculate the length of a string



#include<stdio.h>

int str_length(char *);

void main(){

	char s[100];
	
	printf("Enter the string: ");
	scanf("%s", s);

	int length = str_length(s);

	printf("\n%d", length);

}

int str_length(char *s){

	int l = 0;

	while(s[l++]);
	
	return l - 1;
}




