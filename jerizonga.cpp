#include "iostream"
#include "string"
using namespace std;

char text[100];
char text2[100];
int i, d;

int main()
{
    cout<<"Escriba una cadena de texto: ";
    cin>>text;

    d=0;

    for(i=0;i<100;i++)
    {   
        switch(text[i])
            {
                case 'a': text2[i+d]=text[i]; text2[i+d+1]={'p'}; text2[i+d+2]=text[i]; d=d+2;break; 
                case 'e': text2[i+d]=text[i]; text2[i+d+1]={'p'}; text2[i+d+2]=text[i]; d=d+2;break; 
                case 'i': text2[i+d]=text[i]; text2[i+d+1]={'p'}; text2[i+d+2]=text[i]; d=d+2;break; 
                case 'o': text2[i+d]=text[i]; text2[i+d+1]={'p'}; text2[i+d+2]=text[i]; d=d+2;break; 
                case 'u': text2[i+d]=text[i]; text2[i+d+1]={'p'}; text2[i+d+2]=text[i]; d=d+2;break; 
                default: text2[i+d]=text[i];break;
                //POR QUUEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE????????????????????????????????????/
            } 
    }
    for(i=0;i<100;i++)
        {
            cout<<text2[i];
        }

}
