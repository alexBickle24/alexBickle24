include <unistd.h>

void    ft_print_alphabet(void)
{
        char    letra;
        letra = 'a';

        while (letra <= 'z')
        {
        write(1, &letra, 1);
        }
}

int     main()
{
        ft_print_alphabet();
        return(0);
}

