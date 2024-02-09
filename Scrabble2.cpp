#include "Scrabble.h"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

void Scrabble::inicializarDiccionario(const std::string& archivoDiccionario) {
    // Implementación para inicializar el diccionario desde el archivo
    ifstream archivo(archivoDiccionario);
    if (!archivo.is_open()){
        cout << " (Archivo no existe)"<<endl<<"El archivo "<<archivoDiccionario<<" no existe o no puede ser leído";
        return;
    }

    if(diccionarioInicializado){
        cout << "(Diccionario ya inicializado)"<<endl<<"El diccionario ya ha sido inicializado."<<endl;
    }

    //Inicializar el diccionario 
    cout<<"(Resultado exitoso) El diccionario se ha inicializado correctamente."<<endl;

}

void Scrabble::iniciarDiccionarioInverso(const std::string& archivoDiccionario) {
    // Implementación para inicializar el diccionario inverso desde el archivo
    ifstream archivo(archivoDiccionario);
    if(!archivo.is_open()){
        cout <<"(Archivo no existe)"<<endl<<"El archivo "<<archivoDiccionario<< "No existe o no puede ser leído."<<endl;
        return;
    }
    
    if (diccionarioInversoInicializado){
        cout<<"(Diccionario ya inicializado)"<<endl<< "El diccionario inverso ya ha sido inicializado." <<endl;
    }
    
    cout<< "(Resultado exitoso)"<<endl<<"El diccionario inverso se ha inicializado correctamente. "<<endl;
    diccionarioInversoInicializado = true;
}

void Scrabble::obtenerPuntaje(const std::string& palabra) {
    // Implementación para obtener el puntaje de una palabra
    if (!diccionarioInicializado && !diccionarioInversoInicializado) {
        cout << "(Diccionario no inicializado)"<<endl<<"El diccionario no ha sido inicializado." << endl;
        return;
    }

    // Verificar si la palabra contiene caracteres inválidos
    for (char c : palabra) {
        if (!isalpha(c)) {
            cout << "(Letras inválidas)"<<endl<<"La palabra contiene símbolos inválidos." << endl;
            return;
        }
    }

    int puntaje = 0; // Puntaje calculado para la palabra
    // Por ahora, simplemente sumaremos los puntos de las letras
    for (char c : palabra) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'n':
            case 'r':
            case 't':
            case 'l':
            case 's':
            case 'u':
                puntaje += 1;
                break;
            case 'd':
            case 'g':
                puntaje += 2;
                break;
            case 'b':
            case 'c':
            case 'm':
            case 'p':
                puntaje += 3;
                break;
            case 'f':
            case 'h':
            case 'v':
            case 'w':
            case 'y':
                puntaje += 4;
                break;
            case 'k':
                puntaje += 5;
                break;
            case 'j':
            case 'x':
                puntaje += 8;
                break;
            case 'q':
            case 'z':
                puntaje += 10;
                break;
            default:
                break;
        }
    }

    cout << "(Resultado exitoso) La palabra tiene un puntaje de " << puntaje << "." << endl;
}



void Scrabble::salir() {
    exit(0);
}

void Scrabble::iniciarArbol(const std::string& archivoDiccionario) {
    // inicializar el árbol de palabras desde el archivo
    if (arbolInicializado){
        cout <<"(Arbol ya inicializado)"<<endl<<"El árbol del diccionario ya ha sido inicializado."<<endl;
        return; 
    }
    ifstream archivo(archivoDiccionario);
    if (!archivo.is_open()){
        cout << "(Archivo no existe)"<<endl<<" El archivo "<< archivoDiccionario << "no existte o no puede ser leído."<<endl;
        return;
    }

    //en caso de que el archivo sea aceptado
    archivo.close();
    arbolInicializado = true; 
    cout <<"(Resultado exitoso) El árbol del diccionario se ha inicializado correctamente."<<endl;
}

void Scrabble::iniciarArbolInverso(const std::string& archivoDiccionario) {
    if (arbolInversoInicializado){
        cout<< "(Arbol ya inicializado)"<<endl<<"El arbol del diccionario inverso ya ha sido inicializado."<<endl;
        return;
    }
    ifstream archivo(archivoDiccionario);
    if(!archivo.is_open()){
        cout<<"(Archivo no existe) El archivo "<<archivoDiccionario <<" no existe o no pudo ser leido."<<endl;
        return;
    }

    //leer el archivo y almacenar las palabras en un arbol

    archivo.close();
    arbolInversoInicializado = true;
    cout <<"(Resultado exitoso)"<<endl<<" El arbol del diccionario inverso se ha inicializado."<<endl;
}

void Scrabble::palabrasPorPrefijo(const std::string& prefijo) {
    if (!arbolInicializado){
        cout<<"(Arbol no inicializado) El arbol del diccionario no ha sido inicializado. Por favor, inicialicelo primero."<<endl;
        return;
    } else {
        cout<<"(Resultado exitoso)"<<endl;
        cout<<"Aca se dira las palabras que inician con el prefijo";
    }
    return;

  
}

void Scrabble::palabrasPorSufijo(const std::string& sufijo){ 
    if (!arbolInicializado){
        cout<<"(Arbol no inicializado) El arbol del diccionario no ha sido inicializado. Por favor, inicialicelo primero."<<endl;
        return;
    } else {
        cout<<"(Resultado exitoso)"<<endl;
        cout<<"Aca se dira las palabras que inician con el sufijo";
    }
}

void Scrabble::grafoDePalabras() {
    // Implementación para construir el grafo de palabras
}

void Scrabble::posiblesPalabras(const std::string& letras) {
    // Implementación para encontrar las posibles palabras con las letras dadas
}

  //Suponemos implementacion 
   /* vector<string> palabrasEncontradas = buscar_palabras_por_prefijo(prefijo);

    if(palabrasEncontradas.empty()){
        cout<< "(Prefijo invalido)"<<endl;
        cout<<" Prefijo "<<prefijo<<" No pudo encontrase en el diccionario."<<endl;
    } else {
        cout <<"(Resultado exitoso)"<<endl;
        cout<<"Las palabras que inician con el prefijo "<< prefijo <<"son: "<<endl;
        for(const string& palabra : palabrasEncontradas){
            cout << palabra <<" -Longitud: "<< palabra.length()<<endl;
            //aca se implementara para calcular la puntuacion 
        }
    }*/