#include <iostream>

class Coordenadas // dentro dessa classe, que � os " elementos " n�s temos o privat e o public
{
private: // dentro do private � onde botamos nossas variaveis

    float eixoX{1.6f};
    float eixoY{8.9f};
    float eixoZ{70.6f};

public:
    void MostrarCoordenadas() // fun�oes em orienta��o a objeto s�o chamadas de METODOS
    {
        std::cout << " X = " << eixoX << " Y = " << eixoY << " Z = " << eixoZ << std::endl;
    }

};

int main ()
{
    Coordenadas Ponto3D; // aqui criamos um OBJETO chamado Ponto3D , que esse objeto recebe os elementos ( classes ) de
    //coordenadas, no caso eu estou solicitando para o meu compilador, reservar algo na memoria RAM do tipo coordenadas
    // ent�o � como se eu tivesse digiando " int ponto3D "  solicitando um espa�o de int para esse variavel, por�m essa variavel
    // que nesse caso � o objeto, est�relacionado a uma classe que � coordenadas
    Ponto3D.MostrarCoordenadas();
    system("pause");
    return 0;
}
