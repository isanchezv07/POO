#include <iostream>

using namespace std;

class Libro{
    private:
        string titulo, autor;
        int paginas;
        double precio;
    public:
        Libro(){
            titulo = "sin titulo";
            autor = "sin autor";
            paginas = 0;
            precio = 0.0;
        }
        Libro(string titulo, string autor, int paginas, double precio){
            this->titulo = titulo;
            this->autor = autor;
            this->paginas = paginas;
            this->precio = precio;
        }
        string getTitulo(){
            return titulo;
        }
        string getAutor(){
            return autor;
        }
        int getPaginas(){
            return paginas;
        }
        double getPrecio(){
            return precio;
        }
        void setTitulo(string titulo){
            this->titulo = titulo;
        }
        void setAutor(string autor){
            this->autor = autor;
        }
        void setPaginas(int paginas){
            this->paginas = paginas;
        }
};