#include <gtest/gtest.h>
#include "shape.hpp"

class MockEquTriangle : public EquilateralTriangle {
public:
	MockEquTriangle(int s) : EquilateralTriangle(s) { }
	int getLength() { return length_; }
};

unsigned goodLength = 5;
unsigned badLength = -4;


TEST(EquilateralTriangleTest, EquTriCheckConstruct) {
	
	/* 1 - EquTriangle can be constructed with positive side length */

	EXPECT_NO_THROW(MockEquTriangle(5));

	/* 2 - EquTriangle cannot have negative side length */

	EXPECT_THROW(MockEquTriangle(-4), std::out_of_range );

}

TEST(EquilateralTriangleTest, CheckArea) {

	/* 3 - Check length */
	EXPECT_EQ(5, MockEquTriangle(5).getLength());

	/* 4 - Check area function with good side length */
	/* We are comparing doubles - use EXPECT_NEAR to compare numbers within acceptable boundaries */
	EXPECT_NEAR(10.82532, MockEquTriangle(goodLength).area(), 0.00001);  // 0.00001 because we want to account for rounding at last unit 
}

int main(int argc, char ** argv) {
	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}