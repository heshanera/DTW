/* 
 * File:   main.hpp
 * Author: heshan
 *
 * Created on June 24, 2018, 12:44 PM
 */

#include "DTW.hpp"

int main() {
    
    int vecSize = 10;
    Eigen::VectorXd v1, v2;
    v1 = Eigen::VectorXd::Random(vecSize);
    v2 = Eigen::VectorXd::Random(vecSize);
 
    v1(0) = 1;
    v1(1) = 1;
    v1(2) = 2;
    v1(3) = 4;
    v1(4) = 3;
    v1(5) = 5;
    v1(6) = 3;
    v1(7) = 2;
    v1(8) = 3;
    v1(9) = 2;
    
    v2(0) = 1;
    v2(1) = 2;
    v2(2) = 4;
    v2(3) = 3;
    v2(4) = 5;
    v2(5) = 3;
    v2(6) = 2;
    v2(7) = 3;
    v2(8) = 2;
    v2(9) = 5;
    
    DTW::getSimilarity(v1,v2);
    
    
    return 0;
}
