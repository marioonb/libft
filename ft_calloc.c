
#include <string.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    int *pointeur;
    size_t i; 

    pointeur = NULL;  
    i = 0; 

   // if (count == 0)
    //   count = 1;  

    pointeur = malloc(count * size); 

   // if (count == 0)
   // if (size == 0)
    //  return(pointeur); 
    
    if (pointeur == NULL)
        return (0); 

    while (i <= count)
	{
		((char*)pointeur)[i] = 0;
		i++;
	}
	return (pointeur); 
}


		

