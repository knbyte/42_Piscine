// Originally had # define ABS(x) (x > 0 ? x : -x)
// But needed to get it without the 'Tenaries are forbidden error' (The '?' is the tenary)
// 

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(x) (((((x) > 0) * 2 ) -1) * (x))
#endif


/*
#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(x) (if (x < 0) x *= -1)
#endif

int	main()
{
	int x = -1;

	int y = ABS(x);
}
*/
