#include <stdio.h>
#include <unistd.h>

int main()
{
	write(1, "Juhuhu, pomlad je tu!\n", 22);
	write(2, "Zima prihaja!\n", 14);
}