// function to compare two strings

#include<stdio.h>

int str_compare(const char *s1, const char *s2);

void main(){

	char s1[20], s2[20];

	printf("Enter the string one: ");
	scanf("%s", s1);

	printf("Enter the string two: ");
	scanf("%s", s2);

	int res = str_compare(s1, s2);

	printf("%d\n", res);

}

int str_compare(const char *s1, const char *s2){

	int i;

	for(i = 0; s1[i]; i++){
	
		if(s1[i] != s2[i])

			break;	
	}
	
	return s1[i] - s2[i];
}
