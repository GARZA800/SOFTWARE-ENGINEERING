#include "Laptop.h"
#include "Desktop.h"
#include "Netbook.h"
#include "Tablet.h"
#include "Computer.h"

class Factory
{
public:
    virtual Computer* factoryMethod(int tipo)=0;
    
    Computer* createComputer(int tipo)
    {
        Computer* myProduct = factoryMethod(tipo);
        myProduct->componentsSelection();
        myProduct->componentsAssembly();
        myProduct->softwareInstalation();
        myProduct->computerPacking();

        return myProduct;
    }
};



