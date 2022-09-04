#include "classes.h"

int main(){
    Cargo* ptr = new  Container("Moj kontener", "Zwykly", "AS123", 10.3, 3.2, 2.2, 1095, 5);
    ptr->info();
    system("PAUSE");
    return 0;
}