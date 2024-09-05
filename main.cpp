#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Rosszul van írva
    std::cout << '1-100 ertekek duplazasa' //hiányzó ;
    for (int i = 0;)    //rossz for loop
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)     //rossz for loop
    {
        std::cout << "Ertek:"   //hiányzó ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  //nincs kezdőérték
    for (int i = 0; i < N_ELEMENTS, i++)    // , helyeett ;
    {
        atlag += b[i]   //hiányzó ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
