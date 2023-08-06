#include <iostream>

class Coordenadas // dentro dessa classe, que é os " elementos " nós temos o privat e o public
{
private: // dentro do private é onde botamos nossas variaveis

    float eixoX{1.6f};
    float eixoY{8.9f};
    float eixoZ{70.6f};

public:
    void MostrarCoordenadas() // funçoes em orientação a objeto são chamadas de METODOS
    {
        std::cout << " X = " << eixoX << " Y = " << eixoY << " Z = " << eixoZ << std::endl;
    }

};

int main ()
{
    Coordenadas Ponto3D; // aqui criamos um OBJETO chamado Ponto3D , que esse objeto recebe os elementos ( classes ) de
    //coordenadas, no caso eu estou solicitando para o meu compilador, reservar algo na memoria RAM do tipo coordenadas
    // então é como se eu tivesse digiando " int ponto3D "  solicitando um espaço de int para esse variavel, porém essa variavel
    // que nesse caso é o objeto, estárelacionado a uma classe que é coordenadas
    Ponto3D.MostrarCoordenadas();
    system("pause");
    return 0;
}
