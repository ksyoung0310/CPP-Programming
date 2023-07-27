#include "Base.h"
void Star(void) {
	for (int i = 1; i <= 4; i++) {
		'*' * i;
	}
}
int main(void) {
	cout << Star() << endl;
	return 0;
}