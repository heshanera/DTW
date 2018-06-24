/* 
 * File:   DTW.cpp
 * Author: heshan
 *
 * Created on June 24, 2018, 12:44 PM
 */

#include "DTW.hpp"

DTW::DTW() { }

double DTW::getSimilarity(Eigen::VectorXd v1, Eigen::VectorXd v2) {
    
    Eigen::MatrixXd mat(v1.size(), v2.size());
    mat(0,0) = 0;
    for (int i = 1; i < v1.size(); i++) {
        mat(i,0) = std::abs(v1(i)-v2(0)) + mat(i-1,0);
    }
    for (int j = 1; j < v2.size(); j++) {
        mat(0,j) = std::abs(v1(0)-v2(j)) + mat(0,j-1);
    }
    for (int i = 1; i < v1.size(); i++) {
        for (int j = 1; j < v2.size(); j++) {
            mat(i,j) = std::abs(v1(i)-v2(j)) + min(mat(i-1,j), mat(i,j-1), mat(i-1,j-1));
        }
    }
    std::cout<<mat<<"\n\n";
    
    int dis = 0;
    int i = v1.size();
    int j = v2.size();
    
    while((i!=0) || (j!=0)) {
        
        sum += mat(i,j);
    }
    
    std::cout<<sum<<"\n";
    
    return 0.0;
}

double DTW::min(double x1, double x2, double x3) {
    return std::min(std::min(x1, x2), x3);
}
