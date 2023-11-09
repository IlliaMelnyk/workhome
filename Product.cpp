//
// Created by xmelnyk on 09.11.2023.
//

#include "Product.h"
Product::Product(std::string description,float weight){
    if(description.empty()){
        std::cerr<<"Error";
    }else {
        m_description = description;
    }
    if(weight<0){
        std::cerr<<"error";
    }else {
        m_weight = weight;
    }
}

std::string Product::getDescription(){
    return m_description;
}
float Product::getWeight(){
    return  m_weight;
}