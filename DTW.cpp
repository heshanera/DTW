/* 
 * File:   DTW.cpp
 * Author: heshan
 *
 * Created on June 24, 2018, 12:44 PM
 */

#include "DTW.hpp"

DTW::DTW() { 
    
}

static double DTW::getSimilarity(Eigen::VectorXd, Eigen::VectorXd) {
    
 
    return 0.0;
}

static Eigen::MatrixXd DTW::getSimilarityMat() {
    
    
    return Eigen::MatrixXd::Zero(1,1);
}
