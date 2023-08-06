#include <iostream>

class casa
{
    private:
        int numquarto{8};
        float tamanho;
        bool bsuite{true};



    public:
        void mostrartamanho();
        int obtenhanumerodequarto();
        bool temsuite();
        int soma();


};

int main ()
{
    casa construir;
    std::cout << construir.obtenhanumerodequarto() << std::endl;
    (construir.temsuite())? std::cout << "true" << std::endl: std::cout << "false" << std::endl;
    std::cout << construir.soma();
    return 0;
}

void casa::mostrartamanho()
{

}

int casa::obtenhanumerodequarto()
{
    return numquarto;
}

bool casa::temsuite()
{
    return bsuite;
}

int casa::soma()
{
    numquarto += numquarto;
    return numquarto;
}
