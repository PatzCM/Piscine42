#include <unistd.h>

int f1(char c)
{ 
}

int main (void)
{
	char c;
	char* ptr;

c = 'L';
ptr = &c;
*ptr = 'O';
c = 'O';
f1(&c);

write (1, &c, 1);
return (1); 
}
