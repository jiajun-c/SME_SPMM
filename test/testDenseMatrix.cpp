#include <gtest/gtest.h>
#include "denseMatrix.hpp"

TEST(DenseMatrix, ConstGen) {
    denseMatrix<float>matrix(3, 3, false, 1.0);
    EXPECT_EQ(matrix.values[0], 1.0);
}