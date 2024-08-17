#include <unistd.h>
void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	while (a <= 9 && b <= 9 && c <= 9 && d <= 9)
	{
		while ( d < 9)
		{
			write (1, &a, 1);
			write (1, &b, 1);
			write (1, &c, 1);
			write (1, &d, 1);
			d++;
			while (d == 9 )
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				write (1, &d, 1);
 				c++;
				d = 1;
				while (c == 9)
				{
					write (1, &a, 1);
					write (1, &b, 1);
					write (1, &c, 1);
					write (1, &d, 1);
					d = 2;
					c = 0;
					b++;
				 	while (b == 8)
					{
						write (1, &a, 1);
						write (1, &b, 1);
						write (1, &c, 1);
						write (1, &d, 1);
						a++;		
						b = 0;
						d = 3;
						c = 1;
						while (a == 9)
						{	write (1, &a, 1);
							write (1, &b, 1);
							write (1, &c, 1);
							write (1, &d, 1);
							b = 1 ;
						}	
					}
			
				}
			}
		}
	}
}
/*int	main (void)
{
ft_print_comb2();
}*/
