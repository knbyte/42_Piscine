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

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (((((Value) > 0) * 2 ) - 1) * (Value))
#endif
