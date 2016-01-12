// an example of using include guards
// geometry.h
//
// prevents multiple eclarations of calc_area_of_circle() from stomping
// on eachother

#ifndef GEOMETRY_H_
#define GEOMETRY_H_

double calc_area_of_circle(double radius);

#endif
