//template <classT>
#include "Computer.h"
class Laptop : public Computer{

public:
 
 friend class ConcreteFactory;
 
    void componentsSelection()
  {
     std::cout << "Selecting components"<< std::endl;
  }
  void componentsAssembly()
  {
      std::cout << "Assembling components"<< std::endl;
  }
   void softwareInstalation()
  {
      std::cout << "Instaling and configuring software"<< std::endl;
  }
   void computerPacking()
  {
      std::cout << "Packing final product"<< std::endl;
  }
  
  virtual ~Laptop(){};
  
 private:
 
    Laptop() {};
};

