// SideAndCorners.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "Triangle.h"
#include "Quadrilateral.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    Triangle* a = nullptr;
    Triangle triangle(10, 25, 40, 30, 10, 60);
    IsosTriangle isos_triangle(10, 30, 20, 30, 40, 30);
    RectTriangle rect_triangle(10, 30, 20, 30, 60);
    EquilTriangle equil_triangle(10);
    a = &triangle;
    print_info(a);
    a = &isos_triangle;
    print_info(a);
    a = &rect_triangle;
    print_info(a);
    a = &equil_triangle;
    print_info(a);
    Quadrilateral* b = nullptr;
    Rectangle rectangle(10, 20, 10, 20);
    Square square(25);
    Parallelogram parallelogram(20, 30, 20, 30, 30, 50, 30, 50);
    Rhomb rhomb(20, 30, 50, 30, 50);
    b = &rectangle;
    print_info(b);
    b = &square;
    print_info(b);
    b = &parallelogram;
    print_info(b);
    b = &rhomb;
    print_info(b);
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




