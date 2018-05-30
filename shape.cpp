#include "shape.hpp"

double Rectangle::area() {
	return width_ * height_;
}

double Rectangle::perimeter() {
	return (2 * width_) + (2 * height_);
}

double EquilateralTriangle::area() {
	return (0.5) * (length_ / 2) * (sqrt(3) * (length_ / 2));
}

double EquilateralTriangle::perimeter() {
	return n_sides_ * length_;
}