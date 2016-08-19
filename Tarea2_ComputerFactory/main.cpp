#include <iostream>
#include "ConcreteFactory.h"

int main()
{
    
    Computer* product = ConcreteFactory::GetInstance()->createComputer(2);
    
    
    return 1;
}
