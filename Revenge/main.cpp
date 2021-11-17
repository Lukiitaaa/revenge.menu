#include "rlutil.h"
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include "funciones_revenge.h"
using namespace std;



int main()
{
   int opcion;
   char salir;
   bool incorrecto = true;

    //rlutil::setColor(rlutil::BLACK);
   // rlutil::setBackgroundColor(rlutil::WHITE);


    while(incorrecto == true){
    incorrecto = false;
    recuadro(1,1,60,20);
    recuadro(8,4,46,15);
    rlutil::locate(23,3);
    cout << "BIENVENIDOS A REVENGE " << endl;
    rlutil::locate(11,7);
    cout<<"1- JUGAR ";
    rlutil::locate(11,9);
    cout<<"2- ESTADISTICAS ";
    rlutil::locate(11,11);
    cout<<"3- CREDITOS";
    rlutil::locate(11,13);
    cout<<"0- SALIR";
    rlutil::locate(11,15);
    cout<<"ELIJA UNA OPCION: ";
    cin>>opcion;
    rlutil::locate(10,20);
    system("pause");
    system("cls");

        switch(opcion) {
            case 1:
                break;
            case 2:
              cout << " ";
                break;
            case 3:
              recuadro(1,1,60,20);
              recuadro(8,4,46,15);
              rlutil::locate(25,3);
              cout << "CREDITOS" << endl;;
              rlutil::locate(17,5);
              cout << "Equipo: Los Revengers " << endl;
              rlutil::locate(19,9);
              cout << "Luka Gallo - 25189" << endl;
              rlutil::locate(15,10);
              cout << "Tomas Abraham Legajo - 25687" << endl;
              rlutil::locate(10,20);
              system("pause");
              system("cls");
              incorrecto=true;


                break;
               case 0:
               recuadro(1,1,60,20);
               recuadro(8,4,46,15);
               rlutil::locate(25,3);
               cout << "Opcion de salida";
               rlutil::locate(18,5);
               cout << "Realmente desea salir?" << endl;
               rlutil::locate(18,6);
               cout << "S/N: ";
               cin >> salir;
               if(salir=='s'|| salir=='S'){
               rlutil::locate(18,10);
               cout << "Gracias por jugar REVENGE!" << endl;
               rlutil::locate(1,22);
               return 0;

              }
              else if(salir=='n'|| salir=='N'){
               incorrecto=true;
              }
                break;

            default:

                rlutil::setColor(rlutil::RED);
                rlutil::locate(10,5);
                recuadro(1,1,60,20);
                cout << "Comando incorrecto!" << endl;
                rlutil::setColor(rlutil::BLACK);
                system("pause");
                system("cls");
                incorrecto=true;
                break;
        }


    }





    return 0;
}
