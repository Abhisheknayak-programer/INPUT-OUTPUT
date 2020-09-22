# include <stdio.h> 
int main() 
{ 
int i=0; 
for(i=0; i<20; i++) 
{ 
	switch(i) 
	{ 
	case 0: 
		i+=5; 
	case 1: 
		i+=2; 
	case 5: 
		i+=5; 
	default:			 
		i+=4; 
		break; 
	} 
	printf("%d ", i); 
} 

getchar(); 
return 0; 
} 



// Output: 16 21
// Explanation:
// Initially i = 0. Since case 0 is true i becomes 5, and since there is no break statement till last statement of switch block, i becomes 16. Before starting the next iteration, i becomes 17 due to i++. Now in next iteration no case is true, so execution goes to default and i becomes 21.

// In C, if one case is true switch block is executed until it finds break statement. If no break statement is present all cases are executed after the true case. If you want to know why switch is implemented like this, well this implementation is useful for situations like below.