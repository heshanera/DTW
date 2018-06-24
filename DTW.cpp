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
    
    double dis = 0;
    double minm, a, b, c;
    int i = v1.size()-1;
    int j = v2.size()-1;
    
    dis += mat(i,j);
    while((i!=0) || (j!=0)) {
        
        if ((i-1) >= 0 ) a = mat(i-1,j); 
        else a = std::numeric_limits<double>::max();
        if ((j-1) >= 0 ) b = mat(i, j-1); 
        else b = std::numeric_limits<double>::max();
        if (((i-1) >= 0 ) && ((j-1) >= 0 )) c = mat(i-1,j-1);
        else c = std::numeric_limits<double>::max();
        
        minm = min(a,b,c);
        dis += minm;
        if (minm == a) i--; 
        else if (minm == b) j--;
        else if (minm == c) { i--; j--;}
        
    }
    
    return dis;
}


double DTW::min(double x1, double x2, double x3) {
    return std::min(std::min(x1, x2), x3);
}
