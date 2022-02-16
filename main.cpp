#include <iostream>

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

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(mas[j] == desiredNumber){
                std::cout << desiredNumber << " " << mas[j] << " " << j << std::endl;
                break;
            }
        }
    }

    delete[] mas;
    return 0;
}
