// adivina_quien_772.cpp : Daniel pompa salas 
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int respuesta1 = 0;
    int respuesta2 = 0;
    int respuesta3 = 0;
  

    std::cout << "adivina quien " << std::endl;

    std::cout << " te presento a los personajes \n 1- el juan es moreno sin pelo y gordo \n 2- ella es greece hermosa princesa morena con pelo y muy fit \n 3- joel es blamco con pelo y esta en su peso \n 4- ella es georgina es guera sin pelo y gorda "<< std::endl;
    cout << "tu personaje es moreno? 1 es si 2 es no " << endl;
    cin >> respuesta1;
    
    switch (respuesta1)
    {
    case 1: cout << "tu personaje es moreno vaya vaya" << endl;

        cout << "ahora tu personaje hombre o mujer 1 es H 2 es M" << endl;
        cin >> respuesta2;
        switch (respuesta2)
        {
        case 1:
            cout << "okay entonces si es hombre tiene pelo, 1 es si 2 es no" << endl;

            cin >> respuesta3;

            if (respuesta3 == 1)
                cout << "tu personaje es juan" << endl;
            else
                cout << "estas mintiendo no hay nadie asi" << endl;

            break;





        case 2:
            cout << "okay entonces si es mujer tiene pelo, 1 es si 2 es no" << endl;
            cin >> respuesta3;

            if (respuesta3 == 1)
                cout << "tu personaje es greece" << endl;
            else
                cout << "estas mintiendo no hay nadie asi" << endl;

            break;
        







        default: cout << "est no me dice si es hombre o mujer " << endl;
            break;
        }

        break;
    case 2: cout << "tu personaje es guero vaya vaya" << endl;

        cout << "ahora tu personaje hombre o mujer 1 es H 2 es M" << endl;
        cin >> respuesta2;
        switch (respuesta2)
        {
        case 1:
            cout << "okay entonces si es hombre tiene pelo, 1 es si 2 es no" << endl;
            cin >> respuesta3;

            if (respuesta3 == 1)
                cout << "tu personaje es joel" << endl;
            else
                cout << "estas mintiendo no hay nadie asi" << endl;

            break;







        case 2:
            cout << "okay entonces si es mujer tiene pelo, 1 es si 2 es no" << endl;
            cin >> respuesta3;

            if (respuesta3 == 1)
                cout << "tu personaje es gerogina" << endl;
            else
                cout << "estas mintiendo no hay nadie asi" << endl;

            break;





        default: cout << "est no me dice si es hombre o mujer " << endl;
            break;
        }

        break;

    default: cout << "no es valor pemritido";

        break;
    }
}
