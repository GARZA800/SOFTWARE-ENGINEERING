#include "Factory.h"

class ConcreteFactory : public Factory
{
    
public:


    Computer* factoryMethod(int tipo)
    {
        if(tipo==1){
            Laptop* l = new Laptop;
            return l;
        }
        if(tipo==2){
            Desktop* d =  new Desktop;
            return d;
        }
         if(tipo==3){
             Netbook* n = new Netbook;
             return n;
         }
        else{
            Tablet* t = new Tablet;
            return t;
        }
            
    }
    
    //singleton implementation 
      static  ConcreteFactory* GetInstance(){
      static  ConcreteFactory* instance = new ConcreteFactory;
        return instance;
    }
    
    
private: 
    
    ConcreteFactory(){};
    ConcreteFactory(const ConcreteFactory &old);
    const ConcreteFactory &operator=(const ConcreteFactory &old);

};

