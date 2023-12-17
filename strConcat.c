// program to concatanate two strings 

#include<stdio.h>

void str_concat(const char *s, char *d);

void  main(){

	char s[20], d[40];

	printf("Enter the source string: ");
	scanf(" %[^\n]", s);

	printf("\nEnter the destination string: ");
	scanf(" %[^\n]", d);

	str_concat(s,d);

	printf("\n%s", d);

}

void str_concat(const char *s, char *d){

	int i = 0, l = 0;

	while(d[l++]);

	l--;

	while(s[i]){
	
		d[l++] = s[i++];	
			
	}

	d[l] = 0;

}
