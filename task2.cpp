#include <iostream>
class Utils{
    public:
    static double findAverage(int number1, int number2){
        return (number1+number2)/2.;
    }
};
int main() {
	std::cout<<Utils::findAverage(5,2);
	return 0;
}