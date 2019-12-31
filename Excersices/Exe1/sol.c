
/*
	Hi this is your first excersie :)
	Pls try to solve the problems on your own and only if your not able to,
	then continue to the solutions.

*/

/*1 :Print - Hi my name is bob!.
*/

/*2: Print  - \Hi My Name is.

Bob!
*/

/* 3: Make a variable 'x' - and assign it with the number 10, print 'x'.
*/

/* 4. Make another variable 'y' and make it 'x' times 2 (10 * 2 =20)
	print 'y';
*/

/*
5. print  -	*
			**
			***
*/

/* 6. Make a variable 'z'  and get from the user the value into 'z'.
*/

/* 7. print the variable.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//1
	printf("Hi my name is bob!\n");
	//2
	printf("\\Hi my name is \nbob!\n");
	//3
	int x = 10;
	printf("%d\n", x);
	//4
	int y = x * 2;
	printf("%d\n", y);
	//5
	printf("\t  *\n\t * * \n\t* * *\n");
	//6 + 7
	int z;
	printf("please enter a number\n");
	scanf("%d", &z);
	printf("your number is : %d\n", z);

}
