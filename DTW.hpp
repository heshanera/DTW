/* 
 * File:   DTW.hpp
 * Author: heshan
 *
 * Created on June 24, 2018, 12:44 PM
 */

#ifndef DTW_HPP
#define DTW_HPP


#include <iostream>
//#include <cmath>
#include <limits>
#include "Eigen/Dense"

class DTW {
public:
    DTW();
    static double getSimilarity(Eigen::VectorXd, Eigen::VectorXd);
    static double min(double, double, double);
    
private:

};

#endif /* DTW_HPP */
