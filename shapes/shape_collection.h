/*
 * The idea of the shape collection is to store instances of different shapes.
 * Could we then store attributes about that shape in relation to its 2d world?
 * Like:
 *   x y position
 *   visible or hidden
 */
class ShapeCollection
{
    public:
        std::list get_shape_collection();
        bool add_shape(/* address of shape instance*/);
        bool remove_shape(/* address of shape instance*/);
    private:
        std::list list_of_shapes[];
};
