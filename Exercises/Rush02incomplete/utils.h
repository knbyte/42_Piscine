/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:17:16 by svresnya          #+#    #+#             */
/*   Updated: 2024/02/11 13:17:18 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char letter);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);

int		ft_atoi(char *str);
int		ft_iconvert(char *str);
int		ft_chartoi(char nb);
int		ft_isspace(char let);
int		fast_forward(int idx, int maxint_len, char *str, char *dest);
