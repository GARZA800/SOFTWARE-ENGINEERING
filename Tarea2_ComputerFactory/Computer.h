
#include <iostream>
#ifndef Computer_h
#define Computer_h

using namespace std;
class Computer
{
    //virtual functions 
public:    
    virtual void componentsSelection() = 0;
    virtual void componentsAssembly() = 0;
    virtual void softwareInstalation() = 0;
    virtual void computerPacking() = 0;
    
    virtual ~Computer(){};
      
};

#endif 