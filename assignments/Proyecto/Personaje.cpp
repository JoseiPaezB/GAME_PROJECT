#include "Personaje.hpp"

Personaje::Personaje(){
    nombre="-"; 
    Description="-";
    souls=5; 
}

Personaje::Personaje(std::string nom,std::string des){//Mundo& w
    nombre=nom; 
    Description=des; 
    
    //world=w; 

}

void Personaje::setNombre(std::string nombre_){
    nombre=nombre_; 
}

void Personaje::setDescription(std::string Descrption_){
    Description=Descrption_; 
}

/*void Personaje::setSouls(int souls_){
    souls=souls_;
}*/

std::string Personaje::getNombre(){
    return nombre; 
}

std::string Personaje::getDescription(){
    return Description; 
}
/*int Personaje::getSouls()const{
    return souls; 
}*/

void Personaje::imprime(){
    std::cout<<"================================================"<<std::endl;
    std::cout<< "\t\t " << nombre <<std::endl; 
    std::cout<<"================================================"<<std::endl; 
    std::cout<<"\t\t " << Description <<std::endl;
    std::cout<<"================================================"<<std::endl;
    //std::cout<<\t\t\t\t\t\t\t\t" << world << "\t\t\t\t\t\t\t\t"<<std::endl;
    //std::cout<<"================================================"<<std::endl;
}


