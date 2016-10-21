#include <iostream>
#include <vector>
using namespace std;

class MVS
{
    string persona;
  public:
    MVS(string per)
    {
        persona = per;
    }
    void update(string n)
    {
        cout<< " Noticia de: " << persona << endl;
    }
};

class Televisa
{
    string persona;
  public:
    Televisa(string per)
    {
        persona = per;
    }
    void update(string n)
    {
        cout<< " Noticia de: " << persona << endl;
    }
};

class TvAzteca
{
    string persona;
  public:
    TvAzteca(string per)
    {
        persona = per;
    }
    void update(string n)
    {
        cout<< " Noticia de: " << persona << endl;
    }
};

class RadioFor
{
    string persona;
  public:
    RadioFor(string per)
    {
        persona = per;
    }
    void update(string n)
    {
        cout<< " Noticia de: " << persona << endl;
    }
};

class CNN


{
    string persona;
  public:
    CNN(string per)
    {
        persona = per;
    }
    void update(string n)
    {
        cout<< " Noticia de: " << n << endl;
    }
};


class Command 
{
    public:
        virtual string execute(string*) = 0; 
};

class Peña : public Command<string>
{
    string _name;
    
    Televisa tel_obj;
    TvAzteca tA_obj;
    RadioFor rF_obj;
    CNN cnn_obj;

    T execute (string* arr)
    {
       public:
    Persona():mvs_obj(){}, tel_obj(){}, tA_obj(){}, rF_obj(){}, cnn_obj(){}
    void set_name(string name)
    {
        _name = name;
        notify();
    }

    void notify()
    {
        string noticia = 0;
        for(int i = 0; i < size; i++){
          tel_obj.update(_name);
          tA_obj.update(_name);
          rF_obj.update(_name);
          cnn_obj.update(_name); 
        }
        return noticia;
      }
    }
};

class Hillary : public Command<string>
{
    string _name;
    
    MVS mvs_obj;
    Televisa tel_obj;
    TvAzteca tA_obj;
    RadioFor rF_obj;
    CNN cnn_obj;

    T execute (string* arr)
    {
       public:
    Persona():mvs_obj(){}, tel_obj(){}, tA_obj(){}, rF_obj(){}, cnn_obj(){}
    void set_name(string name)
    {
        _name = name;
        notify();
    }

    void notify()
    {
        string noticia = 0;
        for(int i = 0; i < size; i++){
          mvs_obj.update(_name);
          tel_obj.update(_name);
          tA_obj.update(_name);
          rF_obj.update(_name);
          cnn_obj.update(_name); 
        }
        return noticia;
      }
    }
};

class Trump : public Command<string>
{
    string _name;
    
    MVS mvs_obj;
    Televisa tel_obj;
    TvAzteca tA_obj;
    RadioFor rF_obj;
    CNN cnn_obj;

    T execute (string* arr)
    {
       public:
    Persona():mvs_obj(){}, tel_obj(){}, tA_obj(){}, rF_obj(){}, cnn_obj(){}
    void set_name(string name)
    {
        _name = name;
        notify();
    }

    void notify()
    {
        string noticia = 0;
        for(int i = 0; i < size; i++){
          mvs_obj.update(_name);
          tel_obj.update(_name);
          tA_obj.update(_name);
          rF_obj.update(_name);
          cnn_obj.update(_name); 
        }
        return noticia;
      }
    }
};

class Noticias 
{
  map<string, Command*> noticias;
  
  public: 
  
    Noticias()
    {
        noticias.insert(make_pair("peña", new Peña()));
        noticias.insert(make_pair("hillary", new Hillary()));
        noticias.insert(make_pair("trump", new Trump()));
    }
  
    Command* getNot(string name)
    {
       typename  map<string, Command*>::iterator it;
       it = noticias.find(no);
       if (it != noticias.end())
       {
           return it->second;
       }
       return NULL;
    }
  
};



int main()
{
  Persona subj;
  subj.set_name("Peña");

  Noticias<string> no;
    string* arr_ = new string[3]{"peña", "hillary", "trump"};
    Command<string>* c = no.getNot("peña");

    cout<<c->execute(arr_, 3)<<endl;
}