/*
 * integration.cpp
 *
 *  Created on: Aug 16, 2015
 *      Author: eardi
 */

#include "integration.h"

//#ifndef __INTEGRATION_IMP_HPP__
//#define __INTEGRATION_IMP_HPP__

const std::vector<Real> IntegratorTriangleP2::WEIGHTS = std::vector<Real>{ {1./3, 1./3, 1./3} };
const std::vector<Point> IntegratorTriangleP2::NODES = std::vector<Point> { {Point(1./6,1./6),Point(2./3,1./6),Point(1./6,2./3)} };

const std::vector<Real> IntegratorTriangleP4::WEIGHTS = std::vector<Real>{ {
0.2233815897,
0.2233815897,
0.2233815897,
0.1099517437,
0.1099517437,
0.1099517437
} };

const std::vector<Point> IntegratorTriangleP4::NODES = std::vector<Point> { {
Point(0.4459484909,0.4459484909),
Point(0.4459484909,0.1081030182),
Point(0.1081030182,0.4459484909),
Point(0.0915762135, 0.0915762135),
Point(0.0915762135, 0.816847573),
Point(0.816847573, 0.0915762135)
} };


const std::vector<Real> IntegratorTetrahedronP2::WEIGHTS = std::vector<Real>{ {
1./4,
1./4,
1./4,
1./4
} };

const std::vector<Point> IntegratorTetrahedronP2::NODES = std::vector<Point> { {
Point(0.5854101966249685 ,0.1381966011250105 ,0.1381966011250105),
Point(0.1381966011250105 ,0.1381966011250105 ,0.1381966011250105),
Point(0.1381966011250105 ,0.1381966011250105 ,0.5854101966249685),
Point(0.1381966011250105 ,0.5854101966249685 ,0.1381966011250105)
} };


const std::vector<Real> IntegratorTetrahedronP1::WEIGHTS = std::vector<Real>{ {
1
} };

const std::vector<Point> IntegratorTetrahedronP1::NODES = std::vector<Point> { {
Point(1./4 ,1./4 ,1./4)
} };

const std::vector<Real> IntegratorGaussP3::WEIGHTS = std::vector<Real>{ {1, 1} };
const std::vector<Real> IntegratorGaussP3::NODES = std::vector<Real> { {-1./sqrt(3),1./sqrt(3)} };

const std::vector<Real> IntegratorGaussP5::WEIGHTS = std::vector<Real>{ {5./9, 8./9, 5./9} };
const std::vector<Real> IntegratorGaussP5::NODES = std::vector<Real> { {-sqrt(3)/sqrt(5), 0, sqrt(3)/sqrt(5)} };


const std::vector<Real> IntegratorGaussTriangle3::w = std::vector<Real> {{
  0.068464377,
  0.109543004,
  0.068464377,
  0.061728395,
  0.098765432,
  0.061728395,
  0.008696116,
  0.013913785,
  0.008696116
}}; // sum = 1/2 -> area of the reference triangle

const VectorXr IntegratorGaussTriangle3::WEIGHTS = Eigen::Matrix<Real,9,1>(w.data());

const std::vector<Point> IntegratorGaussTriangle3::NODES = std::vector<Point> { {
Point(0.112701665, 0.100000000),
Point(0.112701665, 0.443649167),
Point(0.112701665, 0.787298334),
Point(0.500000000, 0.056350832),
Point(0.500000000, 0.250000000),
Point(0.500000000, 0.443649167),
Point(0.887298334, 0.012701665),
Point(0.887298334, 0.056350832),
Point(0.887298334, 0.100000000),
} };

const std::vector<Real> IntegratorGaussTetra3::w = std::vector<Real> {{
0.014972747367084,
0.014972747367084,
0.023956395787334,
0.001901788268649,
0.001901788268649,
0.003042861229838,
0.013499628508586,
0.013499628508586,
0.021599405613738,
0.000241558782106,
0.000241558782106,
0.000386494051369,
0.000030681988197,
0.000030681988197,
0.000049091181116,
0.000217792616242,
0.000217792616242,
0.000348468185988,
0.007607153074595,
0.007607153074595,
0.012171444919352,
0.000966235128423,
0.000966235128423,
0.001545976205477,
0.006858710562414,
0.006858710562414,
0.010973936899863
}}; // sum = 1/6 -> volume of the reference tethraedron

const VectorXr IntegratorGaussTetra3::WEIGHTS = Eigen::Matrix<Real,27,1>(w.data());

const std::vector<Point> IntegratorGaussTetra3::NODES = std::vector<Point> { {
Point(0.112701665379259, 0.100000000000000, 0.088729833462074),
Point(0.112701665379259, 0.100000000000000, 0.698568501158667),
Point(0.112701665379259, 0.100000000000000, 0.393649167310371),
Point(0.112701665379259, 0.787298334620741, 0.011270166537926),
Point(0.112701665379259, 0.787298334620741, 0.088729833462074),
Point(0.112701665379259, 0.787298334620741, 0.050000000000000),
Point(0.112701665379259, 0.443649167310371, 0.050000000000000),
Point(0.112701665379259, 0.443649167310371, 0.393649167310371),
Point(0.112701665379259, 0.443649167310371, 0.221824583655185),
Point(0.887298334620741, 0.012701665379258, 0.011270166537926),
Point(0.887298334620741, 0.012701665379258, 0.088729833462074),
Point(0.887298334620741, 0.012701665379258, 0.050000000000000),
Point(0.887298334620741, 0.100000000000000, 0.001431498841332),
Point(0.887298334620741, 0.100000000000000, 0.011270166537926),
Point(0.887298334620741, 0.100000000000000, 0.006350832689629),
Point(0.887298334620741, 0.056350832689629, 0.006350832689629),
Point(0.887298334620741, 0.056350832689629, 0.050000000000000),
Point(0.887298334620741, 0.056350832689629, 0.028175416344815),
Point(0.500000000000000, 0.056350832689629, 0.050000000000000),
Point(0.500000000000000, 0.056350832689629, 0.393649167310371),
Point(0.500000000000000, 0.056350832689629, 0.221824583655185),
Point(0.500000000000000, 0.443649167310371, 0.006350832689629),
Point(0.500000000000000, 0.443649167310371, 0.050000000000000),
Point(0.500000000000000, 0.443649167310371, 0.028175416344815),
Point(0.500000000000000, 0.250000000000000, 0.028175416344815),
Point(0.500000000000000, 0.250000000000000, 0.221824583655185),
Point(0.500000000000000, 0.250000000000000, 0.125000000000000)
} };


//#endif
