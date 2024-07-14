

template<typename T1, typename T2>

class Pair {
public:
	T1 first;
	T2 second;

	//Default Constructor
	Pair() {
	}

	//Parameterised Constructor
	Pair(T1 first, T2 s) {
		this->first = first;
		second = s;
	}
};