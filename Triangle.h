#pragma once
class Triangle 
{    
public:
    Triangle(int side_a = 0, int side_b = 0, int side_c = 0, int corner_a = 0, int corner_b = 0, int corner_c = 0)
    {
        side_a_ = side_a;
        side_b_ = side_b;
        side_c_ = side_c;
        corner_a_ = corner_a;
        corner_b_ = corner_b;
        corner_c_ = corner_c;
    };
    int get_side_a() { return side_a_; }
    int get_side_b() { return side_b_; }
    int get_side_c() { return side_c_; }
    int get_corner_a() { return corner_a_; }
    int get_corner_b() { return corner_b_; }
    int get_corner_c() { return corner_c_; }
    virtual std::string get_name() { return name; }
protected:    
    int side_a_ = 0;
    int side_b_ = 0;
    int side_c_ = 0;
    int corner_a_ = 0;
    int corner_b_ = 0;
    int corner_c_ = 0;
    
private:
    std::string name = "Треугольник:";
};

class IsosTriangle : public Triangle
{
public:
    IsosTriangle(int side_a = 0, int side_b = 0, int side_c = 0, int corner_a = 0, int corner_b = 0, int corner_c = 0):Triangle(side_a, side_b, side_c, corner_a, corner_b, corner_c)
    {}
    void set_side()
    {
        if (side_a_ == side_c_)
        {
            std::cout << "Правильная фигура";
        }
        std::cout << "Неправильная фигура";
    }
    void set_corner()
    {
        if (corner_a_ == corner_c_)
        {
            std::cout << "Правильная фигура";
        }
        std::cout << "Неправильная фигура";
    }
    std::string get_name() override { return name; }
private:
    std::string name = "Равнобедренный треугольник:";
};

class RectTriangle : public Triangle
{
public:
    RectTriangle(int side_a = 0, int side_b = 0, int side_c = 0, int corner_a = 0, int corner_b = 0) :Triangle(side_a, side_b, side_c, corner_a, corner_b, corner_c)
    {        
        corner_c_ = corner_c;
    }    
    std::string get_name() override { return name; }
private:
    int corner_c = 90;
    std::string name = "Прямоугольный треугольник:";
};

class EquilTriangle : public Triangle
{
public:
    EquilTriangle(int side_a = 0) :Triangle(side_a, corner_a, corner_b, corner_c)
    {        
        side_b_ = side_c_ = side_a;
        corner_a_ = corner_a;
        corner_b_ = corner_b;
        corner_c_ = corner_c;
    }
    void set_side()
    {
        if (side_a_ == side_c_ == side_b_)
        {
            std::cout << "Правильная фигура";
        }
        std::cout << "Неправильная фигура";
    }
    std::string get_name() override { return name; }
private:
    int corner_c = 60, corner_b = 60, corner_a = 60;
    std::string name = "Равносторонний треугольник:";
};

void print_info(Triangle* triangle)
{
    std::cout << triangle->get_name() << std::endl;
    std::cout << "Стороны: " << "a = " << triangle->get_side_a() << " b = " << triangle->get_side_b() << " c = " << triangle->get_side_c() << std::endl;
    std::cout << "Углы: " << "a = " << triangle->get_corner_a() << " b = " << triangle->get_corner_b() << " c = " << triangle->get_corner_c() << std::endl;
}