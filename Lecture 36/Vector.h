

template <typename T>

class Vector {

private:

	//Data Members
	T* a;
	int cs;
	int ts;

public:

	Vector() {
		cs = 0;
		ts = 1;
		a = new T[ts];
	}

	Vector(T n) {
		cs = 0;
		ts = n;
		a = new T[n];
	}

	//Member Functions

	void push_back(T data) {

		//Check if your Dynamic Array is full or not.
		if (cs == ts) {

			//Double the size of Dynamic Array.
			//and Retain the Original Contents.

			T* b = a;
			a = new T[2 * ts];
			ts = ts * 2;

			//Copy the Contents of the block pointed by
			//b into the block pointed by a.

			for (int i = 0; i < cs; i = i + 1) {
				a[i] = b[i];
			}

			delete[]b;
		}

		a[cs] = data;
		cs = cs + 1;
	}

	int	size() {
		return cs;
	}

	int capacity() {
		return ts;
	}

	void pop_back() {
		cs = cs - 1;
	}

	T front() {
		return a[0];
	}

	T back() {
		return a[cs - 1];
	}

	T operator[](int index) {
		return a[index];
	}

};












