#include<iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <windows.h>
using namespace std;
void menu();
void consultar();
void retirar();
void depositar();
void cambiodenip();
void trasferir();
void error();


 int saldo;
 int opc1;
 int retiro;
 int saldoinicial = 5000;
 int nip = 1234;

int main(void)
{

    int nnip;
    system("cls");
    cout<<"BIENVENIDO A CAJERO AUTOMATICO BBVA"<<endl;
    cout<<"INGRESE EL NIP : "<<endl;
    cin>>nnip;
    if (nnip == nip)
    {
     menu();
    }
    else
    {
        cout<<"NIP INCORRECTO"<<endl;
        system("pause");
        return main();
    }
}
void menu()
{
    string num;


    while(true)
    {
system("cls");

    cout<<"BIENVENIDO A CAJERO AUTOMATICO BBVA"<<endl;
    cout<<"SELECCIONE SU TRANSACCION :"<<endl;
    cout<<"1:CONSULTA DE SALDO              3:DEPOSITO "<<endl;
    cout<<"2:RETIRO                         4:CAMBIO DE NIP "<<endl;
    cout<<"5:TRASFERIR                      6:SALIR "<<endl;
    cin>>num;

if (num == "1")
        {
            consultar();
            break;
        }
        else if (num== "2")
        {
            retirar();
            break;

        }
        else if (num=="3")
        {
            depositar();
            break;
        }
        else if (num=="4")
        {
          cambiodenip();
        break;
        }
        else if (num=="5")
        {
            trasferir();
            break;
        }
        else if (num=="6")
        {
            main();
            break;
        }
else
{
    error();
    break;
}
    }

}
void retirar()
{
    int cantidad;
    system("cls");
    cout<<"CANTIDAD A RETIRAR: "<<endl;
    cin>>cantidad;
    saldoinicial= saldoinicial - cantidad;
    if(saldoinicial>=cantidad)
    {
    cout<<" LA CANTIDAD DE "<<cantidad<<" HA SIDO RETIRADO CON EXITO "<<endl;
    cout<<"SU SALDO ACTUAL ES:"<<saldoinicial<<endl;
    system("pause");
    menu();
    }
    else
    {
        system("cls");
		cout<<"SALDO INSUFICIENTE "<<endl;
		system("pause");
		retirar();
    }

}

void consultar()
{
    system("cls");
    cout<<"SALDO DISPONIBLE: "<<saldoinicial<<endl;
    system("pause");
    menu();
}


void depositar()
{
int cantidad2;
    system("cls");
    cout<<"CANTIDAD A DEPOSITAR: "<<endl;
    cin>>cantidad2;
    saldoinicial= saldoinicial + cantidad2;
    cout<<" LA CANTIDAD DE "<<cantidad2<<" HA SIDO DEPOSITADA CON EXITO "<<endl;
    cout<<"SU SALDO ACTUAL ES:"<<saldoinicial<<endl;
    system("pause");
    menu();
}
void cambiodenip()
{
    int nipnuevo;
    cout<<"INGRESE SU NUEVO NIP: "<<endl;
    cin>>nipnuevo;
    nip=nipnuevo;
    cout<<"NIP CAMBIADO CON EXITO "<<endl;
    system("pause");
    menu();


}
void trasferir()
{

    int numtransf;
    int cantransf;
    system("cls");
    cout<<"INGRESE CLABE INTERBANCARIA O NUMERO DE TARJETA"<<endl;
    cout<<"A LA QUE DESEA TRASFERIR: "<<endl;
    cin>>numtransf;
    cout<<"INGRESE LA CANTIDAD A TRASFERIR: "<<endl;
    cin>>cantransf;
    saldoinicial = saldoinicial - cantransf;
     if(saldoinicial>=cantransf)
     {

    cout<<"TRANSACCION REALIZADA CON EXITO "<<endl;
    system("pause");
    menu();

     }


else
{
    system("cls");
    cout<<"SALDO INSUFICIENTE "<<endl;
    system("pause");
    trasferir();
}


}
void error ()
{
    system("cls");
    cout<<"OPCION INGRESADA INVALIDA "<<endl;
    system("pause");
    menu();

}
