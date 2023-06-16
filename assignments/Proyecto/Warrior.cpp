#include "Warrior.hpp"
#include <cstdlib> 

Warrior::Warrior(){
    maxHealth=40; 
    maxDamage=40;
}

Warrior::Warrior(std::string n, std::string d, int h, int D):Personaje(n,d){
    maxHealth=h; 
    maxDamage=D; 
}

void Warrior::setHealth(int maxHealth_){
    maxHealth=maxHealth_; 
}

void Warrior::setDamage(int maxDamage_){
    maxDamage=maxDamage_; 
}

int Warrior::getDamage()const{
    return maxDamage; 
}

int Warrior::getHealth()const{ 
    return maxHealth; 
}

bool Warrior::DeadOrAlive(){
    if(getHealth()>0){
        /*std::cout<<"\t"<<getNombre()<<std::endl; 
        std::cout<<"================================"<<std::endl; 
        std::cout<<"\t"<<"VIVO"<<std::endl;
        std::cout<<" ================================"<<std::endl; */
        return 1; 
    }else{
        /*std::cout<<"\t"<<getNombre()<<std::endl; 
        std::cout<<"================================"<<std::endl; 
        std::cout<<"\t"<<"MUERTO"<<std::endl;
        std::cout<<" ================================"<<std::endl; */
        return 0; 
    }
}

std::string Warrior::HealthPercentage(){
    int totalHealth = 200;
    int health = getHealth();
    const int arrBarSize = 20;
    char arrBar[arrBarSize] = {"###################"};
    int res = health * 20 / 200;

    if (health != totalHealth) {
        for (int i = 0; i < arrBarSize; i++) {
            if (i >= res) {
                arrBar[i] = '*';  // Reemplazar '#' por '-'
            }
        }
    }

    std::string result(arrBar, arrBar + arrBarSize);
    return result;
}

    void Warrior::printHealth(int vidaMasOMenos){
        int health;
        health=(getHealth()+vidaMasOMenos); 
        setHealth(health);
        std::cout<<"\nLa salud actual de "<< getNombre() <<" es de "<<health<<std::endl; 
    }

    void Warrior::printPercentage(){
        imprime(); 
        //getHealth()
        //HealthPercentage(); 
    }

    void Warrior::operator+(int plus){
        int health; 
        if(getHealth()>220){
            health=getHealth(); 
            std::cout<<"TU VIDA ESTA AL MAXIMO: "<< health <<std::endl; 
        }else{
            health=getHealth()+plus;
            setHealth(health); 
            std::cout<<"Vida Actual de "<<getNombre()<<" es de "<<health<<std::endl;  
        }

    }

    int Warrior::animation(){
        int random = 20 + rand() % (getDamage() - 20 + 1);
        std::cout<<"\t"<<getNombre()<<std::endl; 
        std::cout<<"======================================"<<std::endl; 
        std::cout<<"\tATACO CON "<< random <<" de PODER"<<std::endl;
        std::cout<<" ================================\n\n"<<std::endl; 
        int health; 
        return random*-1; 
        //recieve(random); 
    }

    void Warrior::recieve(int hit){
        int hitt; 
        //hitt=hit*-1;
        std::cout<<"\t"<<getNombre()<<std::endl; 
        std::cout<<"\n======================================"<<std::endl; 
        std::cout<<" RECIBISTE "<< hit*-1 <<" de daño"<<std::endl;
        std::cout<<"\n================================\n\n"<<std::endl; 
        int res; 
        res=getHealth()+hit; 
        setHealth(res); 
        if(res>0){
            
            std::cout<<"\nLa salud actual de "<<getNombre()<<" es de "<<res<<std::endl; 
            //HealthPercentage();
        }else{
            setHealth(0);
            std::cout<<getNombre()<<" \t\nHAS MUERTO "<<std::endl; 
            DeadOrAlive(); 
        }

    }