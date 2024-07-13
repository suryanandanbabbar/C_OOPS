class Cylinder
{
private:
    double base_radius;
    double height;

public:
    // Getters
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }
    
    // Setters
    void set_base_radius(double radius_param)
    {
        base_radius = radius_param;
    }
    void set_height(double height_param)
    {
        height = height_param;
    }
};