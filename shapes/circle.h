class Circle: public Shape
{
    public:
        void set_radius(float radius);
        float get_radius();
        float get_circumference();
    private:
        float radius;
};
