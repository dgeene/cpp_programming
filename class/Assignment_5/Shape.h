#include <string>

using std::string;

class Shape {
    public:
        Shape(const string& color)
        {
            mColor = color;
        };
        string getColor() const;
    private:
        string mColor;
};
