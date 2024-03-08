#include <iostream>
using namespace std;

class Personaje
{
private:
    
public:
    Personaje() {}
    ~Personaje() {}
    void Hablar (){
        cout << "Hola Enano"<< endl;
    }
};

class Duende : public Personaje
{
private:
    
public:
    Duende() {}
    ~Duende() {}
};

class Enano : public Personaje
{
private:
    float altura;
    int edad;
    int vida;
public:
    Enano() {}
    ~Enano() {}
    void Inicializar(){
        this ->altura = 2;
        this -> edad = 150;
        this -> vida = 10;
    }
    void Comer(){
        this->vida += 1;
    }
};
int main(int argc, char const *argv[]){

        int i = 5;
        bool b = true;
        float f = 0.1;
        double d = 0.1;
        char c = 'a';
        Enano e;


        cout <<"Tamaño tipos de datos nativos:" << endl;
        cout << "Tamaño int:" <<sizeof(int) << "bytes." << endl;
        cout <<"Tamaño bool:" <<  sizeof(bool) << "bytes." << endl;
        cout <<"Tamaño float:" << sizeof(float) << "bytes." << endl;
        cout <<"Tamaño double:" << sizeof(double) << "bytes." << endl;
        cout <<"Tamaño char:" << sizeof(char) << "bytes." << endl;
        cout <<"Tamaño Enano:" << sizeof(Enano) << "bytes." << endl;


        cout << "Memoria Estatica: " << endl;
        cout << "Direccion de int:" << &i << endl;
        cout << "Direccion de bool:" << &b << endl;
        cout << "Direccion de float:" << &f << endl;
        cout << "Direccion de double:" << &d << endl;
        cout << "Direccion de char:" << &c << endl;
        cout << "Direccion de Enano:" << &e << endl;

         cout << "Memoria dinamica: " << endl;
         cout << "Direccion dinamica:" << malloc(2)<< endl;
         cout << "Direccion dinamica int" << malloc (sizeof(int)) << endl;

        // Casteo de Punteros C
         Enano* direccion =(Enano*) malloc (sizeof(int));
         direccion->Inicializar();

         // Casteo de Punteros C++
         Enano* instancia = new Enano;

         // Operador ->
         instancia-> Comer();
         instancia->Hablar();

         // Polimorfismo 
         Personaje* p = new Duende ();
         Personaje* q = new Enano ();

         p->Hablar();
         q->Hablar();

         //Arreglos
         Duende duendes [10];

         cout <<endl;
         cout << &duendes [0] << endl;
         cout << &duendes [1] << endl;
         cout << &duendes [2] << endl;
         cout << &duendes [3] << endl;
         cout << &duendes [4] << endl;

         //Conversion a Direcciones

         cout << endl;
         cout << duendes+0 << endl;
         cout << duendes+1 << endl;
         cout << duendes+2 << endl;
         cout << duendes+3 << endl;
         cout << duendes+4 << endl;

         //Conversion a Direcciones

         cout << endl;
         cout << &duendes[0]+0 << endl;
         cout << &duendes[1]+1 << endl;
         cout << &duendes[2]+2 << endl;
         cout << &duendes[3]+3 << endl;
         cout << &duendes[4]+4 << endl;


         return 0;
    }
