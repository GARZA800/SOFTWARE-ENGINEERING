/*
 TAREA 1
 COMPUTER FACTORY 
 LUCIA GARZA A01361235
*/

#include <iostream>
#include <string>



void process(std::string type);
void componentSelection(std::string type);
void componentAssembly(std::string type);
void softwareInstallation(std::string type);
void computerPacking(std::string type);

int main() {

 std::string type = "Laptop";
  

 process(type);


  return 0;
}

void process(std::string type){
    
  std::cout<<"Creation process of a: "<<type<<std::endl;  
  
  componentSelection(type);
  componentAssembly(type);
  softwareInstallation(type);
  computerPacking(type);

}

void componentSelection(std::string type){
  
  std::cout<<"Selecting components of: "<<type<<std::endl;

}


void componentAssembly(std::string type){
  
  std::cout<<"Assembling components of: "<<type<<std::endl;

}

void softwareInstallation(std::string type){
  
  std::cout<<"Installing software of: "<<type<<std::endl;

}

void computerPacking(std::string type){
  
  std::cout<<"Packing : "<<type<<std::endl;
  
}


  