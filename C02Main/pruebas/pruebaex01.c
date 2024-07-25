 13 unsigned int    len(char *cadena)
 14 {
 15         int     m;
 16 
 17         m = 0;
 18         while (cadena[i] != '\0')
 19         {
 20                 i++;
 21         }
 22         return (0);
 23 }
 24 char    *ft_strncpy(char *dest, char *src, unsigned int n)
 25 {
 26         unsigned int    i;
 27         unsigned int    x;
 28 
 29 
 30         x = len(char *src);
 31         i = 0;
 32         while (src[i] != '\0')
 33         {
 34                 if (n > (len + 1))
 35                         dest[i] = src[i];
 36                 i++;
 37         }
 38         return (dest);
 39 }

