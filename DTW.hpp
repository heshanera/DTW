/* 
 * File:   DTW.hpp
 * Author: heshan
 *
 * Created on June 24, 2018, 12:44 PM
 */

#ifndef DTW_HPP
#define DTW_HPP

#include <cmath>
#include "Eigen"

class DTW {
public:
    DTW();
    static double getSimilarity(Eigen::VectorXd, Eigen::VectorXd);
    static Eigen::MatrixXd getSimilarityMat(Eigen::VectorXd, Eigen::VectorXd);
    
private:

};

#endif /* DTW_HPP */
