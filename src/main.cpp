#include <iostream>
#include "cmake_minimal_project/operations.h"

using namespace cmp;
using namespace Eigen;

int main (){
    std::cout << add(2, 2) << mult(1, 2) << std::endl; 
    std::cout << add_mat3(Matrix3d::Ones(), Matrix3d::Ones()) << std::endl;
}