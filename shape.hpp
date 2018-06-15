#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <cmath>
#include <exception>
#include <iostream>

class Shape {
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	Shape(int n) : n_sides_(n) { }
protected:
	int n_sides_;
};

class Rectangle : public Shape {
public:
	Rectangle(const int width, const int height) : Shape(4) {
		width_ = width;
		height_ = height;
	}
	double area();
	double perimeter();

protected:
	int width_;
	int height_;
};

class EquilateralTriangle : public Shape {
public:
	EquilateralTriangle(int);
	double area();
	double perimeter();

protected:
	int length_;
};

#endif