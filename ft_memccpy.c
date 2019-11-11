
#include <string.h>

void *ft_memccpy (void *restrict dst, const void *restrict src, int c, size_t n)
{

	unsigned char*dest;
	unsigned char*source;
	
	size_t i;

	if (!dst && !src)
		return (NULL);
	
	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	
	i = 0;
	
		while (i < n)
			{
            	dest[i] = source[i];
				if (source[i] == (unsigned char)c)
                	return (dest + i + 1); 
            
            	i++; 
        	}
	
	return (NULL);
}