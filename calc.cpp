#include <iostream>
#include <math.h>
using namespace std;

//chamando as funções 
void menu();
float soma(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float divis(float num1, float num2);
int fatorial(int num);
float potencia(float num1, float num2);
float raiz_quadrada(float num1);
int rest_div_int(int numero1, int numero2);


int main()
{
    cout<<"\t\t\t\t\t SEJA BEM-VINDO A CALCULADORA :)\n"<< endl;
    menu();
    return 0;
}


void menu()
{
    int op;
    float num1, num2;
    
   

  do{
    cout << " 0 - Sair\n 1 - Soma\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 5 - Fatorial\n 6 - Potência (x^y)\n 7 - resto da divisão\n 8 - Raiz Quadrada\n Digite o numero da sua operação: ";
    cin>> op;


     switch(op){
                case 1:
                  cout << "Digite o primeiro numero: ";
                  cin>>num1;
                  cout << "Digite o segundo numero: ";
                  cin>>num2;
                  cout<<"Soma: " << soma(num1,num2) << endl;
                  break;
                
                case 2:
                  cout << "Digite o primeiro numero: ";
                  cin>>num1;
                  cout << "Digite o segundo numero: ";
                  cin>>num2;

                  cout<<"Diferença: " << sub(num1,num2) << endl;
                  break;
                
                case 3:
                  cout << "Digite o primeiro numero: ";
                  cin>>num1;
                  cout << "Digite o segundo numero: ";
                  cin>>num2;
                  cout<<"Produto: " << mult(num1,num2) << endl;
                  break;

                case 4:
                  cout << "Digite o primeiro numero: ";
                  cin>>num1;
                  cout << "Digite o segundo numero: ";
                  cin>>num2;

                  if(num2)
                    cout<<"Divisão: " << divis(num1,num2) << endl;
                  else
                    divis(num1,num2);
                  
                  break;

                case 5:
                  int num;
                  cout << "Digite o fatorial: ";
                  cin>>num;
                  cout <<"O fatorial de "<< num <<" é: "<<fatorial(num)<<endl;
                  break;
                
                case 6:
                  cout << "Digite o primeiro numero: ";
                  cin>>num1;
                  cout << "Digite o segundo numero: ";
                  cin>>num2;              
                  cout << "A potência de x^y é: "<< potencia(num1,num2)<<endl;
                  break;
                
                case 7:
                int numero1, numero2;
                  cout << "Digite o primeiro numero: ";
                  cin>>numero1;
                  cout << "Digite o segundo numero: ";
                  cin>>numero2;
                  cout <<"O resto da divisão inteira é: "<< rest_div_int(numero1,numero2)<<endl;        break;
                
                case 8 :
                  cout << "Digite um numero: ";
                  cin>>num1;
                  cout <<"A raiz quadrada é: "<< raiz_quadrada(num1)<<endl;
                  break;
                
                case 0:
                  cout<< "Saindo..."<<endl;
                  break;
                             
                default:
                    cout<<"Opção inválida\n"<<endl;
            }

  }while(op!=0);


}
 
//função realiza a soma
float soma(float num1, float num2)
{
    return num1 + num2;
}

//função realiza a subtração 
float sub(float num1, float num2)
{
    return num1 - num2;
}

//função realizar a multiplicação
float mult(float num1, float num2)
{
    return num1*num2;
}

//função realiza a divisão e verifica se o denominador é zero
float divis(float num1, float num2)
{
    if(num2!=0)
        return num1/num2;
    else
        cout<<"Não pode dividir por 0\n"<<endl;
}

//função faz o fatorial de um numero 
int fatorial(int numero_fat){
  int aux, fat=1;
  for(aux=1 ; aux<= numero_fat ; aux++)
    fat *= aux;
    
  return fat;

}

//calcula a raiz quadrada de um número 
float raiz_quadrada(float num1){
  float raiz;
  raiz = sqrt(num1);
  return raiz;
}

//faz o calcula da potência de um número
float potencia(float num1, float num2){
  float pot;
  pot = pow(num1, num2);
  return pot;
}

//retorna o resto de uma divisão inteira 
int rest_div_int(int numero1, int numero2){
  
  if(numero2 != 0){
    int resto;
    resto = numero1 % numero2;
    return resto;
    }
    else
    {
    cout<<"Não pode dividir por 0\n"<<endl;
    }

}

