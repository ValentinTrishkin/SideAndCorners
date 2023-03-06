// SideAndCorners.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


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
    {
        side_a_ = side_a;
        side_b_ = side_b;
        side_c_ = side_c;
        corner_a_ = corner_a;
        corner_b_ = corner_b;
        corner_c_ = corner_c;
    }
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
        side_a_ = side_a;
        side_b_ = side_b;
        side_c_ = side_c;
        corner_a_ = corner_a;
        corner_b_ = corner_b;
        corner_c_ = corner_c;
    }
    
    std::string get_name() override { return name; }
private:
    int corner_c = 90;
    std::string name = "Прямоугольный треугольник:";
};

void print_info(Triangle* triangle)
{
    std::cout << triangle->get_name() << std::endl;
    std::cout << "Стороны: " << "a = " << triangle->get_side_a() << " b = " << triangle->get_side_b() << " c = " << triangle->get_side_c() << std::endl;
    std::cout << "Углы: " << "a = " << triangle->get_corner_a() << " b = " << triangle->get_corner_b() << " c = " << triangle->get_corner_c() << std::endl;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    Triangle* a = nullptr;
    Triangle triangle(10, 25, 40, 30, 10, 60);
    IsosTriangle isos_triangle(10, 30, 20, 30, 40, 30);
    RectTriangle rect_triangle(10, 30, 20, 30, 60);
    a = &triangle;
    print_info(a);
    a = &isos_triangle;
    print_info(a);
    a = &rect_triangle;
    print_info(a);

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

void print_info()
{
}


