// me escreva um programa usando o paradigma da orientação a objeto para mostrar 3 variaveis
#include <iostream>

class Coordenadas
{
private:
    float eixoX{8.9f};
    float eixoY{7.6f};
    float eixoZ{1.9f};

public:
    void MostrarValores()
    {
        std::cout << "eixo X : " << eixoX << " eixo Y : " << eixoY << " eixo Z : " << eixoZ << std::endl;
    }
};

int main()
{
    Coordenadas Dimensao;
    Dimensao.MostrarValores();
    return 0;
}
