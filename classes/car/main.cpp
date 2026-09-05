#include <iostream>
#include"car.h"
using namespace std;
int main()
{
	car seif;
	seif.setmkaer("kia");
	seif.setmodel(2016);
	seif.setcolor("balck");

	car noor("suzuki", 2025, "black");
	


	cout << "seif car attributes\n" << seif.getmaker() << "\t" << seif.getmodel() << "\t" << seif.getcolor() << "\n";

	cout << "noor car attributes\n" << noor.getmaker() << "\t" << noor.getmodel() << "\t" << noor.getcolor() << endl;
	return 0;
}