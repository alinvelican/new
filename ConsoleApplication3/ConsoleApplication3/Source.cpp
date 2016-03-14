#include <iostream>

using namespace std;
template<typename T, int N>
class Queue {
private:
	int Head;
	int Tail;
	int Size;
	T QueuArray[N];
public:

	Queue() {
		Size = 0;
		Head = 0;
		Tail = 0;
	}

	void Enqueue(T x) {
		QueuArray[Tail] = x;
		Tail++;

	}

	T Dequeue() {
		T x = QueuArray[Head];
		for (int i = Head; i<Tail; i++) {


			T var = QueuArray[i + 1];

			QueuArray[i] = var;
		}
		Tail--;
		return x;
	}
	T Front() {
		return QueuArray[Head];
	}
	int IsEmpty() {
		if (Tail == 0)
			return 1;
		return 0;
	}

	void Show() {

		for (int i = Head; i< Tail; i++)
			cout << QueuArray[i];
	}

};
int main()
{
	Queue<int, 3> q;
	int a = q.IsEmpty();
	// cout<<a;
	q.Enqueue(6);
	q.Enqueue(8);
	q.Enqueue(9);
	q.Dequeue();
	int g = q.Front();
	//cout<<g;
	q.Show();
	return 0;
}
