#include <iostream>
#include <vector>
#include <map>

template<class T>
class XYZ {
public:

	typedef	std::vector<std::vector<std::map<double, T>>> DataType;

	bool Resize(std::size_t X_,std::size_t Y_) {
	
		DataType D(Y_);

		for (auto o : D) {
			o.resize(X_);
		}

		W = X_;
		H = Y_;

		return true;


	}

	typename typename DataType::value_type::value_type& Index(std::size_t X, std::size_t Y) {
		return XYZ[Y][X];
	}

	std::size_t Width() { return W; }
	std::size_t Height() { return H; }
	

protected:
	DataType XYZ;
	std::size_t W = 0;
	std::size_t H = 0;
};

int main() {

	XYZ<int> D;

	D.Resize(16, 16);
	D.Index(2, 4)[0] = 8;
}