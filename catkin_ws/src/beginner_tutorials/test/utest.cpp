#include <gtest/gtest.h>

TEST(MathExpressions, operatorRecognition){
  ASSERT_EQ(5, 7);
}


int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
