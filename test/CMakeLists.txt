add_executable(sparseMatrix testSparseMatrix.cpp)
target_link_libraries(sparseMatrix PRIVATE gtest_main)

add_executable(testMM testMM.cpp)
target_link_libraries(testMM PRIVATE gtest_main)

add_executable(testDense testDenseMatrix.cpp)
target_link_libraries(testDense PRIVATE gtest_main)
# add_test(
#   NAME
#     unit
#   COMMAND
#     ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/
#   )
add_test(NAME sparseMatrix COMMAND sparseMatrix)
add_test(NAME testMM COMMAND testMM)
add_test(NAME testDense COMMAND testDense)