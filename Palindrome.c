#include <stdio.h> 
#include <string.h> 
int palin(char str[]) 
{ 
int i, len; 
len = strlen(str); 
for(i = 0; i < len / 2; i++) 
{ 
if(str[i] != str[len - i - 1]) 
{ 
return 0;    
} 
} 
return 1;   
} 
int main() 
{ 
char str[100]; 
printf("Enter a string: "); 
scanf("%s", str); 
if(palin(str)) 
printf("The given string is a Palindrome.\n"); 
else 
printf("The given string is Not a Palindrome.\n"); 
return 0; 
} 