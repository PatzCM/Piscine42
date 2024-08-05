void ft_putchar(char c);

void rush(int x, int y) {
    int row = 0;
    int col;

    while (row < y) {
        col = 0;
        while (col < x) {
            if ((row == 0 || row == y - 1) && col == 0)
                ft_putchar('A');  // 'A' for the first character in first and last rows
            else if ((row == 0 || row == y - 1) && col == x - 1)
                ft_putchar('C');  // 'C' for the last character in first and last rows
            else if (row == 0 || row == y - 1)
                ft_putchar('B');  // 'B' for the middle characters in first and last rows
            else if (col == 0 || col == x - 1)
                ft_putchar('B');  // 'B' for the first and last characters in middle rows
            else
                ft_putchar(' ');  // Space for the interior
            col++;
        }
        ft_putchar('\n');
        row++;
    }
}

