#include "LinkedList.hpp"
#include <iostream>


int main()
{
    LinkedList<int> list;

    //append

    list.append(67);
    std::cout << "Added a new element!" << std::endl;
    list.append(68);
    std::cout << list << std::endl;


    //getElement
    std::cout << list.getElement(1) << std::endl;
    std::cout << list.getElement(0) << std::endl;
   
    try {
        std::cout << list.getElement(5) << std::endl;
    }catch(std::string &e)
    {
        std::cout << "Error: " << e << std::endl;
    }


    //replace
    list.replace(0, 60);

    std::cout << list.getElement(0) << std::endl;

    try{
        list.replace(9, 12);
    }catch(std::string &e)
    {
        std::cout << "Error: " << e << std::endl;
    }


    //clear
    list.clear();
    std::cout << "Clearing List!" << std::endl;
    

    
    LinkedList<std::string> stringList;
    stringList.append("Nikesh");
    stringList.append("Gautam");

    std::cout << stringList.getElement(0) << " " << stringList.getElement(1) << std::endl;
    std::cout << stringList << std::endl;

    try{
        std::cout << stringList.getElement(12);
    }catch(std::string &s)
    {
        std::cout << "Error: " << s << std::endl;
    }

    stringList.replace(0, "Kedar");
    std::cout << stringList.getElement(0) << std::endl;

    try{
         stringList.replace(20, "String");
    }catch(std::string &s)
    {
        std::cout << "Error: " << s << std::endl;
    }

    stringList.clear();
    std::cout << "Clearing string list!" << std::endl;




    return 0;
}