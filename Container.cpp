//
// Created by xmelnyk on 09.11.2023.
//

#include "Container.h"
Container::Container(std::string position,int maxLoad){
    m_position=position;
    m_maxLoad=maxLoad;
}
float Container::getProductWeight(){
    float totalWeight = 0;
    for(auto product:m_products){
        totalWeight+= product->getWeight();
    }
    return totalWeight;
}
std::string  Container::getProductDescription(){
   // return  m_description;
}
void Container::storeProduct(Product *product){
    if(getProductWeight() + product->getWeight()<=m_maxLoad){
        m_products.push_back(product);
    }else{
        //to do
    }
}
std::string Container::getPosition(){
    return m_position;
}
void Container::setPosition(std::string position){
    m_position = position;
}
void Container::removeProductWithDescription(std::string description) {
    for (int i = 0; i < m_products.size(); i++) {
        if (m_products.at(i)->getDescription() == description) {
            m_products.erase(m_products.begin() + i);
            return;
        }
    }
}
