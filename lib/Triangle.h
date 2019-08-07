//
// Created by Nernandez Salas on 07/08/2019.
//

#ifndef BVA_EQUIVALENCECLASS_TRIANGLE_H
#define BVA_EQUIVALENCECLASS_TRIANGLE_H

#include <string>

class Triangle{
private:
    double sideA;
    double sideB;
    double sideC;
public:
    std::string triangle_type(double sideA, double sideB, double sideC){
        if( sideA == sideB == sideC ){
            return "Equilateral";
        }else if(sideA == sideB || sideA == sideC || sideB == sideC){
            return "Isosceles";
        }else{
            return "Scalene";
        }
    }
};

#endif //BVA_EQUIVALENCECLASS_TRIANGLE_H
