#include <unistd.h>

void    ft_print_numbers(void)
{
        char    numero;

        numero = '1' ;
        while (numero <= '9')
        {
                write(1, &numero, 1);
                numero = numero + 1;
        }
}

int     main()
{
        ft_print_numbers();
        return(0);
}

