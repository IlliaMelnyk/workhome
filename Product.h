//
// Created by xmelnyk on 09.11.2023.
//

#ifndef ZOOCV8_PRODUCT_H
#define ZOOCV8_PRODUCT_H
#include <iostream>

class Product {
std::string m_description;
float m_weight;
public:
    Product(std::string description,float weight);
    std::string getDescription();
    float getWeight();

};


#endif //ZOOCV8_PRODUCT_H
