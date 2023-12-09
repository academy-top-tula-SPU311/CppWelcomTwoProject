#include <iostream>

int main()
{   
    setlocale(LC_ALL, "Russian");   
    /*
    int count{ 10 };
    float x{ 45.97 };

    std::cout << "Hello" << " " << "World\n";
    std::cout << "Hello" << " " << "People" << "\n";

    std::cout << "1234\t567" << "\n";
    std::cout << "123\t\t4567" << "\n";
    std::cout << "\\Hello\\" << "\n";

    std::cout << "Привет мир" << "\n";
    */
    
    int width; int height;

    /*std::cout << "input width: ";
    std::cin >> width;
    std::cout << "input height: ";
    std::cin >> height;*/

    std::cout << "input width and height: ";  
    std::cin >> width >> height; 
    
    std::cout << "area of rect = " 
              << width * height 
              << "\n";

    int n{ 12 };

    std::cout << 12 << "\n";
    std::cout << n << "\n";
}
