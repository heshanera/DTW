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
    
    double dis = DTW::getSimilarity(v1,v2);
    std::cout<<"distance: "<<dis<<"\n";
    
    return 0;
}
