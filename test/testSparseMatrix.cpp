#include <gtest/gtest.h>
#include "vector.hpp"
#include "sparseMatrix.hpp"

TEST(SparseMatrixTest, testmove) {
    // EXPECT_EQ(1, 1);
    Vector<float>values(10);
    Vector<size_t>colIdx(10);
    Vector<size_t>rowIdx(10);
    size_t n = 10;
    sparseMatrix<float>sp(n ,n, std::move(values), std::move(colIdx), std::move(rowIdx));
}