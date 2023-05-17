#include <iostream>
#include <vector>

typedef std::vector<int> int_vector;
typedef std::vector<float> float_vector;

int main() {

    std::vector<int> myVector1;

    int_vector myVector2;

    float_vector myVector3;

    int length = 3;
    for (size_t i = 0; i < length; i++) { // size_t -> alias
        std::cout << i << std::endl;
    }

    return 0;
}