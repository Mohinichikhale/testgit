#include<stdio.h>
int main()
{
	int n , reversedn=0 ,remainder , originaln;
	printf("enter an integer :");
	scanf("%d", &n);
	originaln = n;
	while(n != 0)
	{
		remainder = n % 10 ;
		reversedn = reversedn *10+remainder ;
		n /= 10 ;
		
	}
	if(originaln == reversedn)
		printf("%d is palindrome ",originaln);
	else
		printf("% is not palindrome",originaln);
		
		return 0;
		
	
	
	
	
}
