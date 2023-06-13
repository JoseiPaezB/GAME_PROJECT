#include <iostream> 
#include "Personaje.hpp"

class Friendly:public Personaje{
    public: 
        Friendly(); 
        Friendly(std::string,std::string,std::string);
        void setStory(std::string); 
        std::string getStory()const;
        int estatus(); 
        int animation(); 
        void recieve(int)override;  
        void imprimeAmigo(); 


    private: 
        std::string story; 

};