#include<iostream>
#include<cstdint>

uint64_t ranged_mul(const uint64_t& upper, const uint64_t& lower){
	uint64_t result = 1;
	for(uint64_t i = upper; i > lower; --i){
		result *= i;
		//std::cout << "[ranged mul] i: " << i << " result: " << result << "\n";
	}
	return result;
}

inline uint64_t factorial(const uint64_t& n){
	return ranged_mul(n, 1);
}


uint64_t nCr(const uint64_t& n, const uint64_t& r){
	// The formula for nCr is (n!)/(r!*(n-r!)), but 
	// the n!/(n-r!) part is equivalent to 
	// n*(n-1)*(n-2)*...*(n-r+1), which is what ranged_mul
	// does, and thus removing the need to calculate the
	// full factorial for n. The formula is now:
	// (n*(n-1)*...(n-r+1))/r!
	
	if(n == 0 || r == 0 || n < r) return 0;
	if(n == r) return 1;
	if(r == 1) return n;

	return (ranged_mul(n, n-r))/(factorial(r));	 
}
int main(){
	std::cout << "== Simple nCr calculator ==\n\n";
	uint64_t n, r;
	std::cout << "Enter total number of elements (n): ";
	std::cin >> n;
	std::cout << "Enter number of elements to take (r): ";
	std::cin >> r;
	std::cout << nCr(n, r) << "\n";
	return 0;
}
