#include <iostream>

int main() {
  int height;
  std::cout << "Введите высоту треугольника: ";
  std::cin >> height;
  if (height <= 0){
    std::cout << "Не верная высота!\n"; 
  }
  else{
    for(int i = 1; i <= height; ++i){
      int escape = height - i;
      for (;escape > 0; --escape){
        std::cout << " ";
      }
      int j = i * 2 - 1;
      while (j > 0){
        std::cout << "#";
        --j;
      }
      std::cout << "\n";
    }
  }
}

/*
Задача 10. Ёлочка.
Напишите программу, которая выводит на экран равнобедренный треугольник, заполненный символами решётки ‘#”. Пусть высота треугольника вводится пользователем. Обеспечьте контроль ввода.
*/