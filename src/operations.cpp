#include "cmake_minimal_project/operations.h"

using namespace Eigen;
namespace cmp {

int add(int a, int b){
    return a + b;
}

int mult(int a, int b){
    return a * b;
}

Matrix3d add_mat3(const Matrix3d& m1, const Matrix3d& m2){
    return m1 + m2;
}

}