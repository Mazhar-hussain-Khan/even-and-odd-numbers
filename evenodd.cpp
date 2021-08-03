/* Mazhar Hussain     Registration 20MDELE098
 Email: 20Mdele098@uetmardan.edu.pk*/
#include<stdio.h>
 int main()
{
	int A,remainder;
	printf("enter any number: \n");//asking to enter number
	scanf("%d",&A);//saving value
	remainder=A % 2;//checking that A is divided by 2
	if (remainder==0)//comparing that remainder is zero or not
	printf("%d is an even number",A);//displaying result 
	else 
	printf("%d is an odd number",A);
	return 0;
}
