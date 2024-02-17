/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 01:43:45 by emduncan          #+#    #+#             */
/*   Updated: 2024/02/18 01:57:48 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (((((Value) > 0) * 2 ) - 1) * (Value))
#endif

/*

If 'Value' is greater than 0
(Value) > 0) - Evaluates to 1
* 2 ) - Evaluates to 2
 - 1) - Evaluates to 1
* (x) - 1 x 'Value'

If not
(x) > 0) - Evaluates to 0
(0 * 2 ) - Evaluates to 0
- 1) - Evaluates to -1
* ('Value') - Evaluates to -1 x - 'Value'

*/