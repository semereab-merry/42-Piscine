#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef enum a_bool
{
	false = 0,
	true = 1
}	t_bool;

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS '0'
# define TRUE 1
# define FALSE 0
# define EVEN(nb) (nb % 2 == 0)

#endif