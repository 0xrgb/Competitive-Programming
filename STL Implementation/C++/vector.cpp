template <class T> class vector {
public:
	int sz, max_size;
	T* arr;
	vector<T>(){
		sz = 0;
		max_size = 4;
		arr = new T[max_size];
	}
	~vector<T>() { delete[] arr; }
	void push_back(T a){
		if (sz == max_size) {
			T* tarr = new T[max_size * 2];
			max_size *= 2;
			for (int i = 0; i < sz; i++) tarr[i] = arr[i];
			delete[] arr;
			arr = tarr;
		}
		arr[sz++] = a;
	}
	T pop_back() { return arr[sz--]; }
	int size() { return sz; }
	bool empty() { return sz == 0; }
	void clear() { sz = 0; }
	T &operator[](int idx) { return arr[idx]; }
};