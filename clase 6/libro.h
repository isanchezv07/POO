#include <iostream>
using namespace std;

class Capitulo {
private:
    string titulo;
    int paginas;

public:
    Capitulo() {
        titulo = "sin titulo";
        paginas = 0;
    }

    Capitulo(string titulo, int paginas) {
        this->titulo = titulo;
        this->paginas = paginas;
    }

    string getTitulo() {
        return titulo;
    }

    int getPaginas() {
        return paginas;
    }
};

class Libro {
private:
    string titulo;
    string autor;
    Capitulo capitulos[5];  
    int numCapitulos;       

public:
    Libro(string titulo, string autor) {
        this->titulo = titulo;
        this->autor = autor;
        numCapitulos = 0;
    }

    void agregarCapitulo(Capitulo c) {
        if (numCapitulos < 5) {
            capitulos[numCapitulos] = c;
            numCapitulos++;
        } else {
            cout << "No se pueden agregar más capítulos.\n";
        }
    }

    void muestraLibro() {
        cout << "=== LIBRO ===\n";
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Capitulos (" << numCapitulos << "):\n";

        for (int i = 0; i < numCapitulos; i++) {
            cout << "  " << i + 1 << ". "
                 << capitulos[i].getTitulo()
                 << " (" << capitulos[i].getPaginas() << " paginas)\n";
        }
    }
};