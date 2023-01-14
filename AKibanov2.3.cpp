#include <stdio.h>

main()
{
	int Login, Password;
	printf("Login=");
	scanf("%i",&Login);
	printf("Password=");
	scanf("%i",&Password);
	
	if(((Login==123)&&(Password==321))||((Login==456)&&(Password==654))||((Login==789)&&(Password==987)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}
