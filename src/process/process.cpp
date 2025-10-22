#include <iostream>
#include "process.h"
#include <Eigen/Dense>
using Eigen::MatrixXd;
using std::cout, std::endl;

void Process::planProcess()
{
    cout << "this is planing process" << endl;
    my_map.mapInfo();

    MatrixXd mat(2, 2);
    mat(0, 0) = 1;
    mat(0, 1) = 2;
    mat(1, 0) = 3;
    mat(1, 1) = mat(0, 0) + mat(0, 1);
    cout << "Here is the matrix mat:\n"
         << mat << endl;

    cout << "planning success!" << endl;
}