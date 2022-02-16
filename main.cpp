#include <iostream>
#include "timer.hpp"

int binarySearch(int* mas, int s, int n, int k){
    if(k<mas[s]) return -1;
    if(k==mas[s]) return 0;
    if(k>mas[s]) return -1;

    int a = s;
    int b = n;

    while(a+s<b){
        int c = (a+b) / 2;

        if(k>mas[c]) a = c;
        else b = c;
    }
    if(mas[b] == k) return b;
    else return -1;

}

int main() {
    srand(time(0));

    int N;
    std::cin >> N;
    int M = N;

    int* mas = new int[N];
    int desiredNumber = rand() % N + 1;

    for(int i = 0; i<N; i++){
        mas[i] = rand() % N + 1;
    }


    Timer simpleCycle;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(mas[j] == desiredNumber){
                break;
            }
        }
    }
    std::cout << "Время, затраченное на перебор обычным циклом: " << simpleCycle.elapsed() << std::endl;



    delete[] mas;
    return 0;
}
