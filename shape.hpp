#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <cmath>

class Shape {
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	Shape(unsigned n) : n_sides_(n) { }
protected:
	unsigned n_sides_;
};

class Rectangle : public Shape {
public:
	Rectangle(unsigned width, unsigned height) : Shape(4) {
		width_ = width;
		height_ = height;
	}
	double area();
	double perimeter();

private:
	unsigned width_;
	unsigned height_;
};

class EquilateralTriangle : public Shape {
public:
	EquilateralTriangle(unsigned sideLength) : Shape(3), length_(sideLength) { }
	double area();
	double perimeter();

private:
	unsigned length_;
};

#endif