class Rectangle: public Shape
{
    public:
        void set_length(float l);
        void set_width(float w);
        float get_area();
    private:
        float length;
        float width;
};
