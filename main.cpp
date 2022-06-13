#include <iostream>
 //forward declaration
 //UML Diagramme lesen können

class Points {
public:
    Points(){
        number = 10;
    };

    Points operator + (Points const &obj){
        Points result;
        result.number = this->number + obj.number;
        return result;
    }
    Points operator + (int number){
        Points result;
        result.number = this->number + number;
        return result;
    }
    bool operator > (int number){
        if (this->number > number) return true;
        return false;
    }

    int number = 10;
};

int main() {
    Points test;
    std::cout << test.number << std::endl;
    if (test > 10) std::cout << "true";
    return 0;
}
