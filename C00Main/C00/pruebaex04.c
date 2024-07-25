 13 #include <unistd.h>
 14 
 15 void    ft_is_negative(int n)
 16 {
 17         if (n > 0)
 18         {
 19                 write(1, "P", 1);
 20         }
 21         else
 22         {
 23                 write(1, "N", 1);
 24         }
 25 }
 26 int     main(void)
 27 {
 28         int     numero;
 29 
 30         numero = 2;
 31         ft_is_negative(numero);
 32         return(0);
 33 }

