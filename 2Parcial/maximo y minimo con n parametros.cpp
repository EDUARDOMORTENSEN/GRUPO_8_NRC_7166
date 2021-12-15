#include<iostream>
#include<algorithm>



int main() {
   int numero, x;
    int residuo, mcm, i, n, mcd;
    int producto;


    auto mcdConParametros = [&](int& x) -> int {
    for (i = 1; i <= n; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        if (i == 1)
        {
            mcd = numero;
        }
        else
        {
            do
            {
                residuo = mcd % numero;
                mcd = numero;
                numero = residuo;
            } while (residuo != 0);
        }
    }
return mcd;
    };



    auto mcmConParametros = [&](int& x) -> int {

    for (i = 1; i <= n; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        if (i == 1)
        {
            mcm = numero;
            producto = numero;
        }
        else
        {
            producto = mcm * numero;

            do
            {
                residuo = mcm % numero;
                mcm = numero;
                numero = residuo;
            } while (residuo != 0);

            mcm = producto / mcm;
        }
    }
    return mcm;
    };


   printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    std::cout<<"maximo comun divisor con n parametros: \n" << std::endl;
    std::cout<<mcdConParametros(x)<<std::endl;



    std::cout <<"minimo comun multiplo con n parametros: \n" << std::endl;
    std::cout<<mcmConParametros(x)<<std::endl;
    return 0;
}
