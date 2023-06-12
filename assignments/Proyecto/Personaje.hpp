#include <iostream> 
#pragma once



class Personaje{
    public: 
        Personaje(); 
        Personaje(std::string,std::string);//mundo&;
        void setNombre(std::string); 
        void setDescription(std::string); 
        std::string getNombre(); 
        std::string getDescription(); 
        void setSouls(int); 
        int getSouls()const;
        virtual void imprime(); 
        virtual int animation(Personaje&)=0; 
        virtual void recieve(int,Personaje&)=0; 

    private: 
        std::string nombre,Description; 
        int souls; 
        //Mundo world; 

};