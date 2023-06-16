#include <iostream> 
#include <fstream>
#pragma once



class Personaje{
    public: 
        Personaje(); 
        Personaje(std::string,std::string);//mundo&;
        void setNombre(std::string); 
        void setDescription(std::string); 
        std::string getNombre(); 
        std::string getDescription(); 
        friend std::ostream& operator<< (std::ostream &, const Personaje&);
        virtual void imprime(); 
        virtual int animation()=0; 
        virtual void recieve(int)=0; 

    private: 
        std::string nombre,Description; 
        int souls; 
        //Mundo world; 

};