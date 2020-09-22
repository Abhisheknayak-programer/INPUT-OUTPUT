#include <stdio.h> 
int main() 
{ 
	int c = 5, no = 1000; 
	do { 
		no /= c; 
	} while(c--); 

	printf ("%d\n", no); 
	return 0; 
} 





// Output: Exception – Divide by zero
// It will be compiled but it will not print anything else 

// Explanation: There is a bug in the above program. It goes inside the do-while loop for c = 0 also. Be careful when you are using do-while loop like this!!

