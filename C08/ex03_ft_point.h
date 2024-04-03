Files to turn in: ft_point.h

/*
ft_point.h is a header file used for defining a structure t_point that represents a point in a two-dimensional coordinate system.
This header file can be included in C programs using #include "ft_point.h" to use the t_point structure for representing points conveniently.

*/

  
#ifndef FT_POINT_H
#define FT_POINT_H

typedef struct  s_point
{
  int  x;
  int  y;
} t_point;

#endif


/*
In this code:

- struct s_point is the structure definition for representing a point with x and y coordinates.
- typedef is used to create an alias t_point for the type struct s_point.
- This alias t_point can then be used to declare variables of type struct s_point.
*/


// main.c

#include "ft_point.h"

void  set_point(t_point *point)
{
  point -> x = 42;
  point -> y = 21;
}

int  main(void)
{
  t_point  point;
  set_point(&point);
  return (0);
}
