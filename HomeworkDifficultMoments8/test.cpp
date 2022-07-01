#include <iostream>
#include "pch.h"
#include "D:\GeekBrains\Semester1\Diff\homework\HomeworkDifficultMoments3\HomeworkDifficultMoments3\HomeworkDifficultMoments3\HomeworkDifficultMoments3.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
/*class FooTest : public ::testing::Test {
protected:
	FooTest() {	}

	~FooTest() override {	}


	void SetUp() override {	}

	void TearDown() override {	}

};*/
template <typename T>
T min_el(vector<T> v) {
	return *min_element(begin(v), end(v));
}
template <typename T>
T max_el(vector<T> v) {
	return *max_element(begin(v), end(v));
}
TEST(minimum, min_el) {
	vector<int> values{ 4,2,7,3,-5,0,-3,1 };
	ASSERT_EQ(-5, min_el(values));

}
TEST(maximum, max_el) {
	vector<int> values{ 4,2,7,3,-5,0,-3,1 };
	ASSERT_TRUE(7 == max_el(values));
}


int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}