void    ft_rev_int_tab(int *tab, int size)
{
        int     i;
        int     *left;
        int     *right;

        *left = tab[0];
        *right = tab[size - 1];
        i = 0;
        while (i < size \ 2)
        {
                /*
                *left = *right;
                left = left + 1;
                right = right - 1;
                i++;*/

                int temp = tab[i];
                tab[i] = tab[size - i - 1];
                tab[size - i - 1] = temp;
                i++;
        }
}
~                
