void    ft_ultimate_div_mod(int *a, int *b)
{
        int     x;
        int     y;

        x = *a / *b;
        y = *a % *b;
        *a = x;
        *b = y;
}

int     main(void)
{
        int     a;
        int     b;

        ft_ultimate_div_mod(&a, &b);
        return (0);
}


