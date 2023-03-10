#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *dst1;
    unsigned char *src1;
    size_t i;

    dst1 = (unsigned char*)dst;
    src1 = (unsigned char*)src;
    if(dst == src || len == 0)
        return(dst);
    if(!dst && !src)
        return(NULL);    
    if(dst1 < src1)
        return(ft_memcpy(dst,src,len));
    else
	{
        i = len;
		while (i-- > 0)
			dst1[i] = src1[i];

	}
    return(dst);
}