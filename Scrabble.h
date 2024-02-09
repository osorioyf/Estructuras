
#ifndef SCRABBLE_H
#define SCRABBLE_H

#include <string>
#include <vector>

class Scrabble {
public:
    // Comandos para la configuración del juego
    void inicializarDiccionario(const std::string& archivoDiccionario);
    void iniciarDiccionarioInverso(const std::string& archivoDiccionario);
    void obtenerPuntaje(const std::string& palabra);
    void salir();

    // Comandos para la búsqueda de palabras
    void iniciarArbol(const std::string& archivoDiccionario);
    void iniciarArbolInverso(const std::string& archivoDiccionario);
    void palabrasPorPrefijo(const std::string& prefijo);
    void palabrasPorSufijo(const std::string& sufijo);

    // Comandos para la generación de combinaciones de letras
    void grafoDePalabras();
    void posiblesPalabras(const std::string& letras);

private:
    // Variables para verificaciones
    bool diccionarioInicializado = false;
    bool diccionarioInversoInicializado = false;
    bool arbolInicializado = false; 
    bool arbolInversoInicializado = false; 
};

#endif // SCRABBLE_H
