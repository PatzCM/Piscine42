#include <unistd.h>

/*void    rush (int line, int col)
{
        int x = 0; line
        int y = col; column

while(x < col)
{       
        if ((y == '0' || y == col - 1))        
        {       
                write(1, "A", 1);
        }       
                if(line == '0')
                {
                        write(1, "A", 1);
                        if (line == col )
                        {
                                write (1, "C", 1);
                        }
                }
}
}	
*/

void	rush(int x, int y)
{
int row;
int col;
char first = 'A';
char middle = 'B';
char last = 'C';

row = 0;
while (row < y) 
{
col = 0;
while (col < x)
{
	if ((row == 0 || row == y - 1) && col == 0)
	{
		write(1, &first, 1);
	}
	else if ((row == 0 || row == y - 1) && col == x - 1)
	{
		write(1, &last, 1);	
	}
	else if (row == 0 || row == y -1)
	{
		write(1, &middle, 1);
	} 
	else if (col == 0 || col == x -1) 
	{
		write (1, &middle, 1);
	}
	else 
	{
	write (1, " ", 1);
	}
	col++;
}
write (1, "\n", 1);
row++;
}
}
int     main (void)
{
     rush (300,200);
        return 0;
}                
