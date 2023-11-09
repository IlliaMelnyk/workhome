//
// Created by xmelnyk on 09.11.2023.
//

#ifndef ZOOCV8_SECTION_H
#define ZOOCV8_SECTION_H
#include <vector>
#include <iostream>
#include "Container.h"
class Section {
std::string m_position;
std::vector<Container*> m_containers;
    Container * findContainerAtPosition(std::string position);
public:
    Section(std::string position);
    ~Section();
    void createContainer(std::string position,int maxLoad);
    void createContainer(std::string position);
    void removeContainer(std::string position);
    void addProduct(Product* product,std::string containerPosition);
    void printStats();
};


#endif //ZOOCV8_SECTION_H
