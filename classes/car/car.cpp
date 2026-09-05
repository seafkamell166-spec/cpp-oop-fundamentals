#include "car.h"
void car::setmkaer(string m) {
maker = m;
}
string car::getmaker() {
	return maker;
}
void car::setmodel(int m) {
	model = m;
}
int car::getmodel() {
	return model;
}
void car::setcolor(string c) {
	color = c;
}
string car::getcolor() {
	return color;
}

car::car(string m, int mo, string c):maker(m),model(mo),color(c)
{

}
