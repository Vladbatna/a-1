#include <iostream>
using namespace std;


  int main(){
  int a, b, c;
  cout << "Что необходимо вычислить? \n1 - Плотность \n2 - Объём \n3 - Масса \n";
  cin >> c;
  if (c==1.0) { cout << "Напишите массу (первое число) и объём (второе число) \n"; cin >> a >> b;cout << "Ответ: "; float c=float(a)/b; cout << c;}
 
  if (c==2.0) { cout << "Напишите массу (первое число) и плотность (второе число) \n"; cin >> a >> b;cout << "Ответ: "; float c=float(a)/b; cout << c;   
  }
  if (c==3.0) {cout << "Напишите плотность (первое число) и объём (второе число) \n"; cin >> a >> b; cout << "Ответ: "; c=a*b; cout << c; }
return 0;
  }
  

  
  
   
  
  




 
   
  
  
  
  
   