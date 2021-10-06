#include<iostream>
#include<vector>
#include<set>
std::vector<std::string> getUniqueBrands(const std::vector<std::string> brand1,
const std::vector<std::string> brand2){
    std::set<std::string> s(brand1.begin(), brand1.end());
    s.insert(brand2.begin(),brand2.end());
    std::vector<std::string> result(s.begin(),s.end());
    return result;
}

int main() {
	std::vector<std::string> brand1 = {"LOUIS_VITTON", "HERMIS","PRADA"};
	std::vector<std::string> brand2 = {"GUCCI","PRADA","HERMIS"};
	std::vector<std::string> result = getUniqueBrands(brand1,brand2);
	for(auto element:result){
	    std::cout<<element<<' ';
	}
	return 0;
}