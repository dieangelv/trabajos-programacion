#include <iostream>
//"include <string>"
#include <string>

int main(void) 
{
    std::string name; 
    std::cout << "Hola, ¿cuál es tu nombre?\n";
    // no poner tildes ni nada parecido, y no olvidar los ";" al final de las lineas
    std::getline(std::cin, name);
    // std::cin >> naame; // lee hasta el primer espacio
    std::cout << "Hola, "<< name << "\n" ;


    return 0;
}
