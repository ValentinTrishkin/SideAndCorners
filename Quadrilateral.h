#pragma once
class Quadrilateral // ���������������
{
public:
    Quadrilateral(int side_a = 0, int side_b = 0, int side_c = 0, int side_d = 0, int corner_a = 0, int corner_b = 0, int corner_c = 0, int corner_d = 0)
    {
        side_a_ = side_a;
        side_b_ = side_b;
        side_c_ = side_c;
        side_d_ = side_d;
        corner_a_ = corner_a;
        corner_b_ = corner_b;
        corner_c_ = corner_c;
        corner_d_ = corner_d;
    };
    int get_side_a() { return side_a_; }
    int get_side_b() { return side_b_; }
    int get_side_c() { return side_c_; }
    int get_side_d() { return side_d_; }
    int get_corner_a() { return corner_a_; }
    int get_corner_b() { return corner_b_; }
    int get_corner_c() { return corner_c_; }
    int get_corner_d() { return corner_d_; }
    virtual std::string get_name() { return name; }
protected:
    int side_a_ = 0, side_b_ = 0, side_c_ = 0, side_d_ = 0;
    int corner_a_ = 0, corner_b_ = 0, corner_c_ = 0, corner_d_ = 0;
private:
    std::string name = "���������������:";
};

class Rectangle : public Quadrilateral // �������������
{
public:
    Rectangle(int side_a = 0, int side_b = 0, int side_c = 0, int side_d = 0) :Quadrilateral(side_a, side_b, side_c, side_d, corner_a, corner_b, corner_c, corner_d)
    {
        corner_a_ = corner_a;
        corner_b_ = corner_b;
        corner_c_ = corner_c;
        corner_d_ = corner_d;
    }
    void set_side()
    {
        if (side_a_ == side_c_)
        {
            std::cout << "���������� ������";
        }
        std::cout << "������������ ������";
    }
    void set_corner()
    {
        if (corner_a_ == corner_c_)
        {
            std::cout << "���������� ������";
        }
        std::cout << "������������ ������";
    }
    std::string get_name() override { return name; }
private:
    std::string name = "�������������:";
    int corner_a = 90, corner_b = 90, corner_c = 90, corner_d = 90;
};

class Square : public Rectangle // �������
{
public:
    Square(int side_a = 0) :Rectangle(side_a)
    {
        side_b_ = side_c_ = side_d_ = side_a;
    }
    std::string get_name() override { return name; }
private:
    std::string name = "�������:";
};

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(int side_a = 0, int side_b = 0, int side_c = 0, int side_d = 0, int corner_a = 0, int corner_b = 0, int corner_c = 0, int corner_d = 0) :Quadrilateral(side_a, side_b, side_c, corner_a, corner_b, corner_c, corner_d)
    {}
    void set_side()
    {
        if (((side_a_ == side_c_) && (side_b_ == side_d_)) && ((corner_a_ == corner_c_) && (corner_b_ == corner_d_)))
        {
            std::cout << "���������� ������";
        }
        std::cout << "������������ ������";
    }
    std::string get_name() override { return name; }
private:
    std::string name = "��������������:";
};

class Rhomb : public Quadrilateral // ����
{
public:
    Rhomb(int side_a = 0, int corner_a = 0, int corner_b = 0, int corner_c = 0, int corner_d = 0) :Quadrilateral(side_a, side_b, side_c, side_d, corner_a, corner_b, corner_c, corner_d)
    {
        side_b_ = side_c_ = side_d_ = side_a;
    }
    void set_side()
    {
        if ((corner_a_ == corner_c_) && (corner_b_ == corner_d_))
        {
            std::cout << "���������� ������";
        }
        std::cout << "������������ ������";
    }
    std::string get_name() override { return name; }
private:
    std::string name = "����:";
    int side_b = 0, side_c = 0, side_d = 0;
};

void print_info(Quadrilateral* quadrilateral)
{
    std::cout << quadrilateral->get_name() << std::endl;
    std::cout << "�������: " << "a = " << quadrilateral->get_side_a() << " b = " << quadrilateral->get_side_b() << " c = " << quadrilateral->get_side_c() << " d = " << quadrilateral->get_side_d() << std::endl;
    std::cout << "����: " << "a = " << quadrilateral->get_corner_a() << " b = " << quadrilateral->get_corner_b() << " c = " << quadrilateral->get_corner_c() << " d = " << quadrilateral->get_corner_d() << std::endl;
}