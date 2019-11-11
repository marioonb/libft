/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:57:41 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/06 17:55:18 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*size_t	strlcpy (char *dst, const char *src, size_t dstsize)
{

int i;

	i = 0;
	while (src[i] != '\0' && dst != '\0' && dstsize < i)
	{
		dest[i] = src[i];
		i++;
	}

	
	dest[i] = '\0';
	return (dest);



}*/


# include <string.h>
# include "libft.h"

size_t    ft_strlcpy (char *dst, const char 
* src, size_t dstsize)
{

int i;

    i = 0;

    int S; 
     S = *(int*)dstsize;
    while (src[i] != '\0' && dst[i] != '\0' && S > i)
    {
        dst[i] = src[i];
        i++;
    }   
    dst[i] = '\0';
    return (ft_strlen(src));

}


//int main() {

//  char *dst = "gfhhshf";
 // char *src = "hgh"; 
  //int c = 'l'; 
 // size_t dt = 20; 

 // ft_strlcpy (dst, src, dt);  
 // return 0;
//}
