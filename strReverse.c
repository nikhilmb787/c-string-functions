// function to reverse a string

#include<stdio.h>

void str_reverse(char *);

void main(){

	char s[20];

	printf("Enter the string: ");
	scanf("%[^\n]", s);

	str_reverse(s);

	printf("\n%s\n", s);

}

void str_reverse(char *s){

	int t, l = 0;

	for(l = 0; s[l]; l++);
	
	for(int i = 0, j = l - 1; j > i; i++, j--){	

		t = s[i];

		s[i] = s[j];

		s[j] = t;

	}


}
