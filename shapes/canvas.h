class Canvas
{
    public:
        int get_num_shapes();
    private:
        std::list list_of_objects;  //canvas should not be reponsible for holding shapes
};
