// function to copy string from one string to another string


#include<stdio.h>

void str_copy(const char *, char *);

void main(){

	char s[20], d[20]; 

	printf("Enter the string: ");
	scanf("%[^\n]", s);

	str_copy(s,d);

	printf("\n%s\n", d);

	
}

void str_copy(const char *s, char *d){
	
	while(*s)

		*d++ = *s++;

	*d = '\0';

}
