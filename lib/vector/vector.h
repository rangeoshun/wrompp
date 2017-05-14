#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    Vector();
    Vector(int, int);

    int get_x();
    void set_x(int x_);

    int get_y();
    void set_y(int y_);

private:
    int x;
    int y;
};

#endif // VECTOR_H