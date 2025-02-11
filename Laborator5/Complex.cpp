#include "Complex.h"

bool double_equals(double l, double r)
{
    return abs(l - r) < 0.001;
}

Complex operator+(const Complex& l, const Complex& r)
{
   
    Complex   c1 = l;
    Complex  c2 = r;
    c1.setImgReal(c1.imag() + c2.imag(), c1.real() + c2.real());
    return c1;
    
   
}

bool operator!=(const Complex& l, const Complex& r)
{
    bool real;
    double r1, r2, i1, i2;

    r1 = l.real();
    i1 = l.imag();
    r2 = r.real();
    i2 = r.imag();
    if (r1 == r2 && i1 == i2)
        return false;
    else
        return true;
}

Complex operator-(const Complex& l, const Complex& r)
{
    Complex c1 = l;
    Complex c2 = r;
    c1.setImgReal(c1.imag() - c2.imag(), c1.real() - c2.real());
    return c1;
}

Complex operator*(const Complex& l, const Complex& r)
{
    Complex c1 = l;
    Complex c2 = r;
    //real = a1.a2-b1.b2
    //img = a1.b2 + a2.b1
    c1.setImgReal((c1.real() * c2.imag() + c2.real() * c1.imag()), (c1.real() * c2.real() - c1.imag() * c2.imag()));
    return c1;
}

Complex operator*(const Complex& l, double r)
{
    Complex c1;
    c1.setImgReal(0, r);
    return ( l * c1 );
}

Complex operator-(const Complex& l, double r)
{
    Complex c;
    c.setImgReal(0, r);
    return (l - c);
}

Complex operator+(const Complex& l, double r)
{
    Complex c1;
    c1.setImgReal(0, r);
    return (l + c1);
}

Complex operator+(double l, const Complex& r)
{
    Complex c1;
    c1.setImgReal(0, l);

    return (c1 + r );
}



Complex operator-(const Complex& obj)
{   //-i se schimba semnul ambelor parti 
    Complex c1;
    
    c1.setImgReal(-c1.imag(), -c1.real());
    return c1;
}



/*Complex operator++(const Complex& obj)
{
    Complex c1 = obj;
    double real = c1.real();
    real++;
    c1.setImgReal(c1.imag(), real);
    return c1;
}*/

bool operator==(const Complex& l, const Complex& r)
{
    bool img;
    bool real;
    double r1, r2, i1, i2;

    r1 = l.real();
    i1 = l.imag();
    r2 = r.real();
    i2 = r.imag();
    if (r1 == r2 && i1 == i2)
        return true;
    else
        return false;

}

std::ostream& operator<<(std::ostream& out, const Complex& complex)
{
    // TODO: insert return statement here
    out << complex;
    return out;
}


Complex::Complex() : Complex(0, 0) {}

Complex::Complex(double real, double imag)
{
    real_data = real;
    imag_data = imag;
}

bool Complex::is_real() const
{
    return imag() == 0; 
}

double Complex::real() const
{
    return real_data;  //returneaza partea reala 
}

double Complex::imag() const
{
    return imag_data;  //returneaza partea imaginara 
}

double Complex::abs() const
{
    return sqrt(real() * real() + imag() * imag()); //returneaza nr coresp in double
}

void  Complex ::setImgReal(double img, double real) 
{
    this->imag_data = img;
    this->real_data = real;
    

}

Complex Complex::conjugate() const
{
    return { real(), -imag() };    //face conjugatului nr complex
}

Complex& Complex::operator()(double real, double imag)
{
    // TODO: insert return statement here
    this->imag_data = imag;
    this->real_data = real;
    return *this;
}

Complex Complex::operator--(int r)
{
       
    this->real_data = real_data - 1;
    return *this;
    
}

Complex& Complex::operator--()
{
    // TODO: insert return statement 
    return *this;
    this->real_data = this->real_data - 1;
   

}

Complex& Complex::operator++()
{
    return *this;
    this->real_data = this->real_data + 1;
    

    // TODO: insert return statement here
}

Complex Complex::operator++(int r)
{
    this->real_data = this->real_data + 1;
    return *this;

}
