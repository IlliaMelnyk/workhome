//
// Created by xmelnyk on 09.11.2023.
//

#ifndef ZOOCV8_CONTAINER_H
#define ZOOCV8_CONTAINER_H
#include <vector>
#include <iostream>
#include "Product.h"
class Container {
std::string m_position;
float m_maxLoad;
std::vector<Product*> m_products;
public:
    Container(std::string position,int maxLoad);
    float getProductWeight();
    std::string  getProductWeight();
    void storeProduct(Product *product);
    std::string getPosition();
    void setPosition(std::string position);
    void removeProductWithDescription(std::string description);
};


#endif //ZOOCV8_CONTAINER_H
