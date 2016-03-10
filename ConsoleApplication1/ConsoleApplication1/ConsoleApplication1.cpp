#include <iostream>

using namespace std;

template<typename T>
class Lista {




public:
	struct Nod {

		T value;
		Nod * Next;



	};
	Lista() {
		PFirst = PLast = NULL;
	}




	bool IsEmpty() {
		if (PLast == NULL)
			return true;
		return false;
	}
	Nod *  SearchFirstOcurance(T val)
	{
		Nod * nod = PFirst;
		while (nod->value != val)
		{
			nod = nod->Next;
		}

		return nod;
	}
	void PushFront(T val) {

		if (IsEmpty() == true) {

			PFirst = new Nod;
			PFirst->value = val;
			PFirst->Next = NULL;
			PLast = PFirst;
		}

		else

		{
			Nod * n = new Nod;
			n->value = val;
			n->Next = PFirst;
			PFirst = n;
		}

	}
	Nod  * GetFirst() {
		return PFirst;
	}

	Nod * GetLast() {
		return PLast;
	}

	void ShowList() {

		Nod * nod = PFirst;
		while (nod != NULL) {
			cout << nod->value;
			nod = nod->Next;
		}
	}
private:

	Nod * PFirst;
	Nod * PLast;




};

int main()
{
	Lista<int> *l = new Lista<int>;

	l->PushFront(8);
	l->PushFront(9);
	l->ShowList();
	Lista<int>::Nod * nod = l->SearchFirstOcurance(8);
	cout << nod->value;
	system("pause");
	return 0;
}
