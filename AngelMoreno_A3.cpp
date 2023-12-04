#include <iostream>
#include <string>

using namespace std;

    int main(){
        
    /* Declaración de variables */
    string nombre,apellidoMat,apellidoPat,RFC,dia,mes,anio;
    
    cout<<"GENERADOR DE RFC (USAR MAYUSCULAS)"<<endl;
    cout<<"INGRESA TU NOMBRE: ";
    cin>>nombre;
    cout<<"INGRESA TU PRIMER APELLIDO: ";
    cin>>apellidoPat;
    cout<<"INGRESA TU SEGUNDO APELLIDO(SI NO TIENE PONER NA): ";
    cin>>apellidoMat;
    if(apellidoMat=="NA"){
        apellidoMat = "X";
    }
    
    cout<<"INGRESA TU FECHA DE NACIMIENTO: "<<endl;
    cout<<"DÍA (DD): ";
    cin>>dia;
    cout<<"MES (MM): ";
    cin>>mes;
    cout<<"AÑO (YYYY): ";
    cin>>anio;
    cout<<" "<<endl;
    
    cout<<"NOMBRE COMPLETO: "<<nombre<<" "<<apellidoPat<<" "<<apellidoMat<<endl;
    cout<<"FECHA NACIMIENTO: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
    
    string PrimeraLetra = apellidoPat.substr(0,1);
    
    string vocal = "";
     for (int i = 1; i < apellidoPat.length(); i++) {
        char letra = apellidoPat[i];
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        vocal += letra;
          break;
    }
  }
    
    RFC = PrimeraLetra+vocal+apellidoMat.substr(0,1)+nombre.substr(0,1);
    RFC = RFC+anio.substr(2,3)+mes+dia;
    cout<<" "<<endl;
    cout<<"RFC: "+RFC;
  return 0;
}