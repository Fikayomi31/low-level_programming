#include <stdio.h>
void A()
{
	printf("Hello world\n");

}
void B(void (*ptr)()) // function pointer as argument
{
	ptr();
}

int main()
{
	/* void (*ptr)() = A;
	B(p); */
	B(A); // A is a callback function
}
