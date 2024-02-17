/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:45:38 by emduncan          #+#    #+#             */
/*   Updated: 2024/02/18 00:41:05 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void			set_point(t_point *point);

#endif

/*

We are delcaring a variable using typedef. 

Structs are a built in type - you make a copy and
put in your new values/fields you want .

In this case s_point is what we are calling the
copy and the variables inside are the new fields.

To turn the structure into a type we can use we
name the group t_point (or whatever name you want to use.)

*/
