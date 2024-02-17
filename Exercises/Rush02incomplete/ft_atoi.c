/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:58:16 by svresnya          #+#    #+#             */
/*   Updated: 2024/02/11 13:35:38 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_iconvert(char *str);
int	ft_atoi(char *str);
int	ft_chartoi(char nb);
int	ft_isspace(char let);
int	fast_forward(int idx, int maxint_len, char *str, char *dest);

//The string can start with an arbitray amount of white space 
//(as determined by isspace(3))
//The string can be followed by an arbitrary amount of '+' and '-' signs,
// '-' sign will change the sign of the int returned based on the number of
// '-' is odd or even.
//Finally the string can be followed by any numbers of the base 10.
//Your function should read the string until the string 
//stop following the rules and return the number found until now
int	ft_atoi(char *str)
{
	char	dest[11];
	int		maxint_len;
	int		sign;
	int		idx;
	int		didx;

	maxint_len = 10;
	sign = 1;
	didx = 0;
	idx = fast_forward(0, maxint_len, str, dest);
	while ((str[idx] == '+') || (str[idx] == '-'))
	{
		if (str[idx] == '-')
			sign = sign * (-1);
		idx++;
	}
	while (str[idx] == '0')
		idx++;
	while ((didx <= maxint_len) && ((str[idx] >= '0') && (str[idx] <= '9')))
	{
		dest[didx] = str[idx];
		idx++;
		didx++;
	}
	return (sign * ft_iconvert(dest));
}

int	fast_forward(int idx, int maxint_len, char *str, char *dest)
{
	idx = 0;
	while (idx <= maxint_len)
	{
		dest[idx] = '\0';
		idx++;
	}
	idx = 0;
	while (ft_isspace(str[idx]))
	{
		idx++;
	}
	return (idx);
}

//base10 converter
int	ft_iconvert(char *str)
{
	int	mult;
	int	idx;
	int	result;

	mult = 10;
	idx = 0;
	result = 0;
	while (str[idx] != '\0')
	{
		result = result * mult + (ft_chartoi(str[idx]));
		idx++;
	}
	return (result);
}

//Base-10, character conversion is primitive.
int	ft_chartoi(char nb)
{
	return (nb - '0');
}

//is it a space char?
int	ft_isspace(char let)
{
	if ((let == '\t') || (let == '\n') || (let == '\v')
		|| (let == '\f' ) || (let == '\r' ) || (let == ' '))
	{
		return (true);
	}
	return (false);
}
