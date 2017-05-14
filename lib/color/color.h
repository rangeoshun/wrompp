#ifndef COLOR_H
#define COLOR_H

#include <string>
#include <cstddef>

class Color
{
public:
    Color();
    Color(unsigned int, unsigned int, unsigned int);

    std::string toHex();

    unsigned int get_r();
    void set_r(unsigned int);

    unsigned int get_g();
    void set_g(unsigned int);

    unsigned int get_b();
    void set_b(unsigned int);

private:
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

#endif // COLOR_H