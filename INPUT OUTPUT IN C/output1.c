#include<stdio.h> 
int main() 
{ 
int n; 
for(n = 7; n!=0; n--) 
	printf("n = %d \n", n--); 
getchar(); 
return 0; 
}

// Output:Above program goes in infinite loop because n is never zero when loop condition (n != 0) is checked.