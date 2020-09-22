#include<stdio.h> 
int main() 
{ 
	static int var = 5; 
	printf("%d ",var--); 
	if(var) 
		main();				 
} 


// Explanation : main function  is called again and again till val value becomes 0.