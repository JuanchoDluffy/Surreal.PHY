#include "stdlib.h"
#include <iostream>
#include <type_traits>
int main(){
    std:: cout <<"hello \n";
    int nums = 100;
    int losNumers[100];
    for (int i = 0; i<nums; i++){
        losNumers[i]= nums - i;
    }
    for(int f =0;f<100; f++){
        std::cout << losNumers[f];
        std::cout<<"\n";
    }
    return 0;
}
