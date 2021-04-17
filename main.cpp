#include <iostream>
#include<algorithm>


using namespace std;
//Prototipo de funciones
int cambio(int *puntero,int *A,int size);
bool comparar_cad(char *cad1,char *cad2, int sizecad1, int sizecad2);
void cambiarletras(char *cad,int size2);
void Eliminarcaracteres(char *cad3,int size);
void convernum(char *NR,int *NA,int size);
void cuadradomagico(int numero);
void mostrarMatriz(int arreglo[6][8]);
void Estrella(int arreglo[6][8],int&contador);
void numcams(int tamanoM);
void perm(int *AR);


int main()
{  //Variables
    int opcion=1;
    int dinero=0;
    int resultado=0;
    int A[]={50000,20000,10000,5000,2000,1000,500,200,100,50};
    int size = sizeof(A)/sizeof(A[0]);
    char cad1[]="hola";
    char cad2[]="hola";
    char cad[30];//"Man-zana"
    char cad3[30];//"bananas"
    int size2 = sizeof(cad)/sizeof(cad[0]);
    int sizecad1 = sizeof(cad1)/sizeof(cad1[0]);
    int sizecad2 = sizeof(cad2)/sizeof(cad2[0]);
    int size3 = sizeof(cad3)/sizeof(cad3[0]);
    char NR[]="MXMDC";
    int suma=0;
    int size4 = sizeof(NR)/sizeof(NR[0]);
    int NA[size4];
    int numero=0;
    int arreglo[6][8]={{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}};
    int contador=0;
    int numper=0;
    int AR[10]={0,1,2,3,4,5,6,7,8,9};
    int tamanoM=0;


    while(opcion!=0){
        cout<<endl<<"GUIA 1 LABORATORIO DE INFORMATICA II 2021-1"<<endl;
        cout<<endl<<"Andres Felipe Rendon Villada "<<endl;
        cout<<"CC: 1035876760"<<endl;
        cout<<"Grupo: 2  "<<endl;
        cout<<endl<<"Problema 1: Cantidad de Billetes y Monedas"<<endl;
        cout<<endl<<"Problema 3: Comparar 2 cadenas de caracteres"<<endl;
        cout<<endl<<"Problema 6: Cambiar las letras Minusculas por Mayusculas"<<endl;
        cout<<endl<<"Problema 7: Eliminar los caracteres repetidos en una cadena"<<endl;
        cout<<endl<<"Problema 10: Convertir un numero Romano a Arabigo   "<<endl;
        cout<<endl<<"Problema 12: Cuadrado Magico"<<endl;
        cout<<endl<<"Problema 13: Fotografia Digitalizada de la galaxia NGC 1300"<<endl;
        cout<<endl<<"Problema 16: Una malla 2x2"<<endl;
        cout<<endl<<"Problema 18: Permutaciones Lexicograficas"<<endl;
        cout<<endl<<"0 para salir"<<endl;
        cout<<endl<<"Ingrese el problema que desea ejecutar: ";
        cin>>opcion;
        cout<<endl;


        switch (opcion) {


        case 1:
                cout<<"Ingrese la cantidad de dinero: ";
                cin>>dinero;
                int *puntero;
                puntero=&dinero;
                resultado = cambio(puntero,A,size);
                cout<<"El restante es: "<<resultado<<endl;
                dinero=0;
            break;


        case 3:
            comparar_cad(cad1,cad2,sizecad1,sizecad2);
            break;


        case 6:
            cout<<"Ingrese la palabra separada por un guion: ";
            cin>>cad;
            cout<<"la cadena original es: "<<cad<<endl;
            cambiarletras(cad,size2);
            cout<<"La modificacion de la cadena es: "<<cad<<endl;
            break;


        case 7:
            cout<<"Ingrese la palabra: ";
            cin>>cad3;
            cout<<"la cadena original es: "<<cad3<<endl;
            Eliminarcaracteres(cad3,size3);
            cout<<"La modificacion de la cadena es: "<<cad3<<endl;
            break;


        case 10:
            convernum(NR,NA,size4);
            for(int i=0;i<size4;i++){
                if(NA[i]<NA[i+1]){
                    suma-=NA[i];
                }
                else
                    suma+=NA[i];
            }
            cout<<"El numero ingresado es: "<<NR<<endl;
            cout<<"Su equivalente en el sistema arabigo es: "<<suma<<endl;
            break;


         case 12:
            cout<<"Ingrese el numero de filas y columnas que tendra el cuadrado magico: ";
            cin>>numero;
            cuadradomagico(numero);
            break;


         case 13:
            mostrarMatriz(arreglo);
            cout<<endl;
            Estrella(arreglo,contador);
            cout<<"En la fotografia de la galaxia NGC 1300 se encontraron: "<<contador<<" estrellas!"<<endl;
            break;


         case 16:
            cout << "ingrese la malla: ";
            cin>>tamanoM;
            numcams(tamanoM);
            break;


          case 18:
            cout<<"Ingrese la n-esima permutacion entre 0-9 que desea calcular: ";
                cin>>numper;
                for(int i=0;i<numper;i++){
                    next_permutation(AR,AR+10);
                }
                cout<<"la permutacion numero: "<< numper <<" entre los numeros 0-9"<<" es: ";
                perm(AR);
            break;


        default:
            cout<<"Ningun caso con ese numero"<<endl;
            break;
        }
    }
    return 0;
}


//Funciones


//FUNCION PUNTO 1
int cambio(int *puntero,int *A,int size){
    int cb50=0;
    int cb20=0;
    int cb10=0;
    int cb5=0;
    int cb2=0;
    int cb1=0;
    int cm500=0;
    int cm200=0;
    int cm100=0;
    int cm50=0;
    for(int i=0;i<size;i++){

        if(*puntero>=50000){
            cb50=*(puntero)/A[0];
            *puntero=*(puntero)%A[0];
        }
        if(*puntero>=20000){
            cb20=*(puntero)/A[1];
            *puntero=*(puntero)%A[1];
        }

        if(*puntero>=10000){
            cb10=*(puntero)/A[2];
            *puntero=*(puntero)%A[2];
        }

        if(*puntero>=5000){
            cb5=*(puntero)/A[3];
            *puntero=*(puntero)%A[3];
        }
        if(*puntero>=2000){
            cb2=*(puntero)/A[4];
            *puntero=*(puntero)%A[4];
        }
        if(*puntero>=1000){
            cb1=*(puntero)/A[5];
            *puntero=*(puntero)%A[5];
        }
        if(*puntero>=500){
            cm500=*(puntero)/A[6];
            *puntero=*(puntero)%A[6];
        }
        if(*puntero>=200){
            cm200=*(puntero)/A[7];
            *puntero=*(puntero)%A[7];
        }
        if(*puntero>=100){
            cm100 = *(puntero)/A[8];
            *puntero=*(puntero)%A[8];
        }
        if(*puntero>=50){
            cm50 = *(puntero)/A[9];
            *puntero=*(puntero)%A[9];
        }
    }
    cout<<"cant billetes 50 mil = "<<cb50<<endl;
    cout<<"cant billetes 20 mil = "<<cb20<<endl;
    cout<<"cant billetes 10 mil = "<<cb10<<endl;
    cout<<"cant billetes 5 mil = "<<cb5<<endl;
    cout<<"cant billetes 2 mil = "<<cb2<<endl;
    cout<<"cant billetes mil = "<<cb1<<endl;
    cout<<"cant monedas 500 = "<<cm500<<endl;
    cout<<"cant monedas 200 = "<<cm200<<endl;
    cout<<"cant monedas 100 = "<<cm100<<endl;
    cout<<"cant monedas 50 = "<<cm50<<endl;
    return *puntero;
}


//FUNCION PUNTO 2
bool comparar_cad(char *cad1, char *cad2, int sizecad1, int sizecad2){
    bool bandera = true;
    if(sizecad1!=sizecad2){
        bandera = false;
        cout<<bandera;
        cout<<" las cadenas son direfentes, ya que tienen diferente tamanio"<<endl;
        return bandera;
    }
    if(sizecad1==sizecad2){
        for(int i=0;i<sizecad1;i++){
            //cout<<cad1[i]<<" , "<<cad2[i]<<endl;
            if(cad1[i]!=cad2[i]){
                bandera = false;
                cout<<bandera;
                cout<<" las cadenas son direfentes, ya que tienen una letra diferente"<<endl;
                return bandera;
            }
        }
    }

    else{
        bandera = true;
    }
    cout<<bandera;
    cout<<" las cadenas son iguales"<<endl;
    return bandera;
}


//FUNCION PUNTO 3
void cambiarletras(char *cad, int size2){
    for(int i=0;i<size2;i++){
        if(cad[i]>=97&&cad[i]<=122){
            cad[i]=cad[i]-32;
        }
    }
}


//FUNCION PUNTO 4
void Eliminarcaracteres(char *cad3, int size3){
    for(int i=0;i<size3;i++){
        for(int j=i+1;j<size3;j++){
            if(cad3[i]==cad3[j]){
                cad3[j]='-';
            }
        }
    }
}


//FUNCION PUNTO 5
void convernum(char *NR,int *NA, int size){
    for(int i=0;i<size;i++){
        if(NR[i]=='M'){
            NA[i]=1000;
        }
        if(NR[i]=='D'){
            NA[i]=500;
        }
        if(NR[i]=='C'){
            NA[i]=100;
        }
        if(NR[i]=='L'){
            NA[i]=50;
        }
        if(NR[i]=='X'){
            NA[i]=10;
        }
        if(NR[i]=='V'){
            NA[i]=5;
        }
        if(NR[i]=='I'){
            NA[i]=1;
        }
        if(NR[i]!='M'||NR[i]!='D'||NR[i]!='C'||NR[i]!='L'||NR[i]!='X'||NR[i]!='V'||NR[i]!='I'){
                    cout<<"No es un numero romano"<<endl;
                }
    }
}


//FUNCION PUNTO 6
void cuadradomagico(int numero){
    int matriz[numero][numero];
    int sumaf[numero];
    int sumac[numero];
    int sumad=0;
    int sumasf=0;
    int sumasc=0;
    bool Cuadrado = false;
    //Este ciclo for nos ayudara para asignar los valores de las casillas del cuadrado magico
    for(int i=0 ; i<numero ; i++){                                                                        //Filas
        for(int j=0 ; j<numero ; j++){                                                                    //Columnas
            cout << "Ingrese el valor del elemento [" << i << "]" << "[" << j << "]: ";
            cin >> matriz [i][j];
        }
    }
    cout<<endl<< "La matriz es: "<<endl;
    //Imprimiendo la matriz
    for (int i=0 ; i<numero ; i++){
        for(int j=0 ; j<numero ; j++)
            cout << " [" << matriz [i][j]<<"]";

        cout << endl;
    }
    //Suma filas
    for (int i=0 ; i<numero ; i++){
        for(int j=0 ; j<numero ; j++){
            sumasf+=matriz[i][j];
        }

        sumaf[i]=sumasf;
        sumasf=0;
    }
    //Suma columnas
    for (int j=0 ; j<numero ; j++){
        for(int i=0 ; i<numero ; i++){
            sumasc+=matriz[i][j];
        }
        sumac[j]=sumasc;
        sumasc=0;
    }
    //Suma diagonal
    for(int i=0 , j=0 ; j<numero ;j++ , i++){
       sumad+= matriz[i][j];
    }
    //Compara la suma de las filas con la suma de las columnas y la suma de la diagonal

    for (int i=0; i<numero ; i++){

        if ((*(sumaf+i) == *(sumac+i)) && sumad == *(sumaf+i))
            Cuadrado=true;

        else
            Cuadrado=false;}

    if(Cuadrado==true)
        cout << endl << "               SI ES UN CUADRADO MAGIGO!        " << endl;

    else
         cout << endl << "              NO ES UN CUADRADO MAGIGO!         " << endl;
}

//FUNCIONES PARA EL PUNTO 7

//Funcion que imprime en pantalla la matriz
void mostrarMatriz(int arreglo[6][8]){
 int fila=6,colum=8;
    for(int i=0; i<fila;i++){
        for(int j=0; j<colum; j++){
            cout<<"|"<<arreglo[i][j]<<"";
        }
        cout<<"|"<<endl;
    }

}

//Funcion que me dice cuantas estrellas hay en dicha matriz
void Estrella(int arreglo[6][8],int &contador){
     int formula=0,fila=6,colum=8;
    for(int i=0; i<fila; i++){
        for(int j=0; j<colum; j++){
            formula=(arreglo[i][j]+arreglo[i][j-1]+arreglo[i][j+1]+arreglo[i-1][j]+arreglo[i+1][j])/5;// Formula para saber si hay una estrella

            if(i==0 || j==0 ){//condicional para ignorar las estrellas que esten en las esquinas
                cout<<"En la posicion ["<<i<<"]["<<j<<"] No hay estrella!"<<endl<<endl;;
            }
            if(formula>6 && i!=0 && j!=0){
                cout<<"->En la posicion ["<<i<<"]["<<j<<"] Hay una estrella!"<<endl<<endl;;
                contador++;
            }

        }
    }
}


//FUNCION PUNTO 8
//funcion num caminos en una malla nxn
void numcams(int tamanoM){
    int caminosposibles=0;
    if(tamanoM>0){//El condicional aplica una ecuación para conocer los caminos posibles.
        /*primero multiplica el tamaño de la matriz nxn, luego el resultado se multiplica por el número n de una matriz más pequeña (n-1)
          * y ese resultado se agrega la constante del problema que sería 2*/
        caminosposibles=tamanoM*tamanoM;
        caminosposibles*=tamanoM-1;
        caminosposibles+=2;
        cout<<"para una malla de "<<tamanoM<<" x "<<tamanoM<<" puntos, hay "<<caminosposibles<<" caminos posibles"<<endl;
    }
    else{
        cout<<"para una malla de "<<tamanoM<<" x "<<tamanoM<<" puntos, hay 0 caminos posibles"<<endl<<"Ingrese un valor mayor a cero"<<endl;
    }
}


//FUNCION PARA EL PUNTO 9
void perm(int *AR){
    for(int i=0;i<10;i++){
        cout<<AR[i];
    }
    cout<<endl;
}
