#include <iostream>
namespace std;
const double pi = 3.14;

double volume(double radius, double height)
{
    return pi * radius * radius * height;
}

double area(double radius, double height)
{
    return 2 * pi * radius + radius * height;
}