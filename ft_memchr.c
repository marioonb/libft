# include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    char* chaine; 
    size_t i; 

    chaine = (char*)s; 
    i = 0; 

   while (chaine[i] != c && i <= n)
	{
		if (chaine[i] == '\0')
			return (0);    
		i++;  
	} 
   if (i > n)
      return (0); 
      
   return(chaine + i);
   
}