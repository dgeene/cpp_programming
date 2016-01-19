/*
 * Why keep defining additional shape subclasses like Square, Pentagon, Hexagon, Triangle
 * when we could define a generic Polygon and give it n sides?
 * Of course now how do you calculate things like area given a formula specific to a certain type of polygon?
 */
class Polygon
{
    private:
        int vertices;
        int sides;   // by definition sides = vertices
};
