#include "mm.hpp"
#include <gtest/gtest.h>

TEST(MatrixMatrix, CSR) {
    typedef int Ordinal;
    typedef float Scalar;
    typedef MtxReader<Ordinal, Scalar> reader_t;
    typedef typename reader_t::csr_type csr_t;
    // typedef typename csr_t::CSR entry_t;
    std::string path = "/home/cjuns_group/chengjj/SMESPMM/dataset/HEP-th.mtx";
    reader_t reader(path);
    csr_t csr = reader.read_csr();

    // non-zeros, rows, cols
    std::cout << csr.nnz() << std::endl;                               // size_t
    std::cout << csr.num_rows() << "," << csr.num_cols() << std::endl; // int


    std::cout << csr.val(0) << std::endl;
    // first entry
    // entry_t e = csr.entries[0];
    // std::cout << e.i << "," << e.j << std::endl; // int, int
    // std::cout << e.e << std::endl;
}