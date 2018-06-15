#include "shape.hpp"

double Rectangle::area() {
	return width_ * height_;
}

double Rectangle::perimeter() {
	return (2 * width_) + (2 * height_);
}

double EquilateralTriangle::area() {
	return (sqrt(3) / 4) * pow(length_, 2);
}

double EquilateralTriangle::perimeter() {
	return n_sides_ * length_;
}

EquilateralTriangle::EquilateralTriangle(int sideLength) : Shape(3) {
	if (sideLength < 1) { throw std::out_of_range("Cannot have negative side length."); }
	length_ = sideLength;
}