#include "iostream"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.1416
using namespace std;
double valor_n, constant_a, constant_b, derivative,res1,res2,var;
int opcione;
void der1(){
    //Si se selecciona la opcion 1 se realizara una derivada de tipo a(x)^n
    cout<<"\nIngrese el valor para la constante (a) y para la constante n.\n";
    cout<<"| a:";cin>>constant_a;
    cout<<"| n:";cin>>valor_n;
    cout<<"La derivada es:"<<constant_a*valor_n<<"(x)^"<<valor_n-1<<endl;
    cout<<"Forma: n(x)^(n-1)\n\n";
    cout<<"Desea agregar variables a x en la derivada?\n1.-Si/2.-No"<<endl;
    cin>>opcione;
    if(opcione==1){
      cout << "Valor de x:";
      cin>>var; cout <<endl;
      res1=pow(var,(valor_n-1));
      res2=(constant_a*valor_n)*res1;
      cout<<"Resultado: "<<res1<<endl;
    }
    }
void der2(){
    //Si se selecciona la opcion 1 se realizara una derivada de tipo a(b)^x
    cout<<"Ingrese el valor para la constante (a) y el valor para b.\n";
    cout<<"| a:";cin>>constant_a;
    cout<<"| b:";cin>>constant_b;cout<<endl;
    cout<<"La derivada es: "<<constant_a<<"ln("<<constant_b<<")("<<constant_b<<")^(x)"<<endl;
    cout<<"Forma: aln(b)^x\n\n";
    cout<<"Desea agregar variables a x en la derivada?\n1.-Si/2.-No"<<endl;
    cin>>opcione;
    if(opcione==1){
      cout << "Valor de x:";
      cin>>var; cout <<endl;
      res1=log(constant_b);
      res1=pow(res1,var);
      res2=constant_a*res1;
      cout<<"Resultado: "<<res2<<endl;
    }

    }
void der3(){
    //Si se selecciona la opcion 1 se realizara una derivada de tipo aln(x)
     cout<<"Ingrese el valor para la constante (a).\n";
    cout<<"| a:";cin>>constant_a;cout<<endl;
    cout<<"La derivada es: "<<constant_a<<"/x"<<endl;
    cout<<"Forma: a/x\n\n";
    cout<<"Desea agregar variables a x en la derivada?\n1.-Si/2.-No"<<endl;
    cin>>opcione;
    if(opcione==1){
      cout << "Valor de x:";
      cin>>var; cout <<endl;
      res1=constant_a/var;
      cout<<"Resultado: "<<res1<<endl;
    }
  }
void der4(){
    //Si se selecciona la opcion 1 se realizara una derivada de tipo aSen(x)
    cout<<"Ingrese el valor para la constante (a).\n";
    cout<<"| a:";cin>>constant_a;cout<<endl;
    cout<<"La derivada es: "<<constant_a<<"cos(x)"<<endl;
    cout<<"Forma: acos(x)\n\n";
    cout<<"Desea agregar variables a x (radianes) en la derivada?\n1.-Si/2.-No"<<endl;
    cin>>opcione;
    if(opcione==1){
      cout << "Valor de x:";
      cin>>var; cout <<endl;
      res1=cos(var);
      res2=constant_a*res1;
      printf("%f/n",res2);
    }
    }
void der5(){
//Si se selecciona la opcion 1 se realizara una derivada de tipo acos(x)
   cout<<"Ingrese el valor para la constante (a).\n";
    cout<<"| a:";cin>>constant_a;cout<<endl;
    cout<<"La derivada es: "<<-constant_a<<"sin(x)"<<endl;
    cout<<"Forma: -asin(x)\n\n";
    cout<<"Desea agregar variables a x (radianes) en la derivada?\n1.-Si/2.-No"<<endl;
    cin>>opcione;
    if(opcione==1){
      cout << "Valor de x:";
      cin>>var; cout <<endl;
      res1=sin(var);
      res2=-constant_a*res1;
      printf("%f/n",res2);
    }
    }
void der6(){
    //Si se selecciona la opcion 1 se realizara una derivada de tipo aTan(x)
       cout<<"Ingrese el valor para la constante (a).\n";
    cout<<"| a:";cin>>constant_a;cout<<endl;
    cout<<"La derivada es: "<<constant_a<<"(sec(x))^2"<<endl;
    cout<<"Forma: a(sec(x))^2\n\n";
      cout<<"Desea agregar variables a x (radianes) en la derivada?\n1.-Si/2.-No"<<endl;
    cin>>opcione;
    if(opcione==1){
      cout << "Valor de x:";
      cin>>var; cout <<endl;
      res1=cos(var);
      res1=1/res1;
      res1=pow(res1,2);
      res2=constant_a*res1;
      printf("%f/n",res2);
    }
    }
int main()
{
    int seleccion;
    do{//Seccion donde en base a un ciclo se solicita el ingreso de una opcion
    cout<<"_________________________________________________"<<endl;
    cout<<"1. Forma: a(x)^n           2. Forma: a(b)^x\n";
    cout<<"3. Forma: aln(x)           4. Forma: aSen(x)\n";
    cout<<"5. Forma: acos(x)          6. Forma: aTan(x)\n";
    cout<<"7. SALIR\n\n";
    cout<<"Seleccione una opcion: ";
    cin>>seleccion;
    if(seleccion>=1&&seleccion<=6){
        switch(seleccion){
case 1:
    der1();
    break;
case 2:
    der2();
    break;
case 3:
    der3();
    break;
case 4:
    der4();
    break;
case 5:
    der5();
    break;
case 6:
    der6();
    break;
default:
    cout<<"Opcion no valida, por favor intente nuevamente.\n";
    break;
case 7:
    break;
break;

        }
        cout<<"Desea realizar mas operaciones? 1.Si/2.No ";
        cin>>seleccion; cout<<endl;
        if(seleccion==2){
            seleccion=7;
        }
          }
    }while(seleccion!=7);
}
