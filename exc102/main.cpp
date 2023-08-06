// me escreva um programa que me mostre tres variaves na tela usando o paradigma da orientação a objeto
#include <iostream>

class coordenada // o que é a minha class ? a minha class pelo o que eu sei, é um elemento onde eu teria varias " atribuiçoes "
        // a ele como variaveis e funções ( metodos )
    {
    private:
            float eixoX {1.9f};
            float eixoY {2.0f};
            float eixoZ {3.0f};
    public:
        void mostrar()
        {
            std::cout << eixoX << std::endl;
            std::cout << eixoY << std::endl;
            std::cout << eixoZ << std::endl;
        }

    };

int main ()
{
    // para mostrar a class coordenada eu preciso de um objeto para poder chama-la
    coordenada EIXO;
    EIXO.mostrar();
    system("pause");
    return 0;
}
