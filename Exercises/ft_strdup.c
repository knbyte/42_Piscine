/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:09:14 by emduncan          #+#    #+#             */
/*   Updated: 2024/02/17 23:54:14 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Replicate strdup - man strdup

 The strdup() function allocates sufficient memory for a copy of the
 string s1, does the copy, and returns a pointer to it. 

 If insufficient memory is available, NULL is returned.

 The strndup() function copies at most n characters from the string s1
 always NUL terminating the copied string.

*/
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		ctr;

	ctr = 0;
	while (src[ctr])
		ctr++;
	dest = malloc(sizeof(char) * ctr);
	ctr = 0;
	if (!dest)
		return (0);
	else
	{
		while (src[ctr])
		{
			dest[ctr] = src[ctr];
			ctr++;
		}
		dest[ctr] = '\0';
		return (dest);
	}
}
