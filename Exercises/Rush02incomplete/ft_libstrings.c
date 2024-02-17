/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libstrings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:16:53 by svresnya          #+#    #+#             */
/*   Updated: 2024/02/11 13:35:41 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

void	ft_putstr(char *str)
{
	int		counter;
	char	c;
	char	*line;

	line = str;
	counter = 0;
	c = line[counter];
	while (c != '\0')
	{
		write(1, &c, 1);
		counter++;
		c = line[counter];
	}
}

//go through the lines in parallel. 
//if the s1 character is < the matching one of s2, return lt
//if the s1 char is > the matching one of s2, return gt
////if a line finishes before the other, it is smaller 
////(compare \0 and smth else) and we drop out normally.
//finally, if both lines ran out at the same time and we haven't returned
// earlier, the lines are the same.
int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (! ((s1[idx] == '\0') && (s2[idx] == '\0')))
	{
		if (s1[idx] != s2[idx])
		{
			return (s1[idx] - s2[idx]);
		}
		idx++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	idx;
	int	count;

	idx = 0;
	count = 0;
	while (str[idx] != '\0')
	{
		idx++;
		count++;
	}
	return (count);
}
