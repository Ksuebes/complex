#include "Complex.h"
int main() {
	int k;
	complex a, b, c;
	cin >> a.Re >> a.Im;
	cin >> b.Re >> b.Im;
	cout << "1) +; 2) -; 3) *; 4) /" << endl;
	cin >> k;
	switch (k) {
	case (1):
		c.sum(a,b);
		break;
	case (2):
		c.min(a,b);
		break;
	case (3):
		c.mult(a,b);
		break;
	case (4):
		c.div(a,b);
		break;
	}

}