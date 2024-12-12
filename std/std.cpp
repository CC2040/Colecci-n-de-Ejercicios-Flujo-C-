#include "std.h"
#include <iostream>
#include <vector>
#include <map>
#include <ostream>
#include <set>
#include <string>


void vector(){
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);
    std::cout<<"Vectores"<<std::endl;
    for(int i = 0; i < numeros.size(); i++){
        std::cout << numeros[i]<<" " ;
    }
}
void map() {
    std::cout<<std::endl<<"Map"<<std::endl;
    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    std::cout << "Contenido del mapa antes: ";
    for (const auto& par : edad) {
        std::cout << par.first << " " << par.second << std::endl;
    }
    edad.erase("Juan");
    std::cout << "Contenido mapa despues:" << std::endl;
    for (const auto& par : edad) {
        std::cout << par.first << ": " << par.second << std::endl;
    }
}
void set() {
    std::cout<<"Set"<<std::endl;
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    std::cout << "Contenido del conjunto antes: ";
    for (const auto& elemento : conjunto) {
        std::cout << elemento << " ";
    }
    conjunto.erase(1);
    std::cout << std::endl<<"Contenido del conjunto despues: ";
    for (const auto& elemento : conjunto) {
        std::cout << elemento << " ";
    }
}