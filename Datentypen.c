#include <stdio.h>
#include <stdbool.h>

int main()
	{
	int Zähler = 10;
	float pi = 3.14;
	char Buchstabe = 'A';
	bool isFinished = true;

	printf("Zählerstand: %d\n", Zähler);
	printf("Pi = %.f\n", pi);
	printf("Der erste Buchstabe im Alphabet: %c\n", Buchstabe);
	printf("Fertig: %s\n", isFinished ? "JA" : "Nein");

return 0;
}
