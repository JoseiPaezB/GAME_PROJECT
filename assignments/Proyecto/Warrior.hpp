#include <iostream> 
#include "Personaje.hpp"

class Warrior:public Personaje{
    public: 
        Warrior(); 
        Warrior(std::string,std::string,int,int);
        void setDamage(int); 
        void setHealth(int); 
        int getDamage()const; 
        int getHealth()const; 
        bool DeadOrAlive(); 
        //int HealthPercentage(); 
        void printPercentage(); 
        void printHealth();
        int animation(Personaje&); 
        void recieve(int,Personaje&); 



    private: 
        int maxHealth, maxDamage; 
};
