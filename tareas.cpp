#include "iostream"
#include "string"
using namespace std;

int i, duracion[4], dificultad[4];
string nombre[4], ubicacion[4];
char tipo[4];  


int main(){ 

    cout<<"Usted es un tripulante de una nave espacial, y ";
    cout<<"le han encargado realizar 4 tareas"<<endl<<endl;
    cout<<"Llene los siguientes formularios: "<<endl;
    
    for(i=0;i<4;i++)
    {
        cout<<"ingrese nombre de tarea: ";
        cin>>nombre[i];
        cout<<"ingrese ubicacion de la tarea: ";
        cin>>ubicacion[i];
        cout<<"ingrese la dificultad de la tarea ";
        cout<<"en un rango de 1 al 5: ";
        cin>>dificultad[i];
        if(5>=dificultad[i]<1)
        {cout<<"Respuesta no valida, vuelva a intentar: ";
        cin>>dificultad[i];}
        cout<<"ingrese la duracion de la tarea (en segundos): ";
        cin>>duracion[i];
        cout<<"ingrese el tipo de tarea segun la siguiente clasificacion ";
        cout<<"(R-reparar, C-clasificar, O-otros): ";
        cin>>tipo[i];
        if(tipo[i]!=NULL)
            switch (tipo[i]){
            case 'R': break;
            case 'C': break;
            case 'O': break;
            default: {cout<<"No existe el tipo, vuelva a intentar: ";
                    cin>>tipo[i];}           
            }
    }
    cout<<endl<<endl;

    for(i=0;i<4;i++)
    {
        cout<<"Las tareas a realizar son: ";
        cout<<nombre[i]<<"/"<<ubicacion[i]<<"/"<<dificultad[i]<<"/"<<duracion[i]<<"/"<<tipo[i]<<endl;
        cout<<"La duracion de las tareas"<<which(i)<<"es"<<sum<<endl;
    }
}
//NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
//NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
//NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
//@$#%@$^%!$@%^$^!%^&!@%@&^!%^%&!%@*&%@*&!%*&#^&*^#!*^!*^!

int sum(int total)
    {
        for(i=0;i<5;i++)
        {
            if(dificultad[i]>3)
            {
                return duracion[i]+total;
            }
        }
    }
int which(int i)
    {
        for(i=0;i<5;i++)
        {
            return i;
        }
    }