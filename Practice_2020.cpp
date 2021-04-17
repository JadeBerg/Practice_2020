#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#define P  3,14
double check(double d){
    if (!d)
    {
        printf("Прямые не пересекаются!");
        exit(1);
        return 0;
    }
    return 0;
}
double pointX(double dx, double d) {
    double x;
    x = dx / d;
    return x;
}
double pointY(double dy, double d) {
    float y;
    y = dy / d;
    return y;
}
double angle(double u1, double u2) {
    double u;
    u = atan(u1 / u2);
    u = u * 180 / P;
    return u;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    double a1, b1, c1, a2, b2, c2, x, y;
    double u1, u2, u;
    printf("Введите параметры первой прямой: \n");
    printf("a1: ");
    scanf_s("%lf", &a1);
    printf("b1: ");
    scanf_s("%lf", &b1);
    printf("c1: ");
    scanf_s("%lf", &c1);
    printf("Введите параметры второй прямой: \n");
    printf("a2: ");
    scanf_s("%lf", &a2);
    printf("b2: ");
    scanf_s("%lf", &b2);
    printf("c2: ");
    scanf_s("%lf", &c2);
    double DivXY = a1 * b2 - a2 * b1;
    check(DivXY);
    double DivX = b1 * c2 - b2 * c1;
    x = pointX(DivX, DivXY);
    double DivY = c1 * a2 - c2 * a1;
    y = pointX(DivY, DivXY);
    printf("Точка пересечения равна: (%0.2lf , %0.2lf).\n", x, y);
    u1 = a1*b2-a2*b1;
    u2 = a1*a2+b1*b2;
    if (u2 == 0) {
        u = 90;
        printf("Угол между прямыми равен равен: %0.2f.\n", u);
        return 0;
    }
    else {
        u = angle(u1, u2);
        printf("Угол между прямыми равен равен: %0.2f.\n", u);
        return 0;
    }
}
