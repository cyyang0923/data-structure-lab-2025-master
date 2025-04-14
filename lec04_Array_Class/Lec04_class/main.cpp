#include "Complex.h"
#include "Car.h"
#include "SportCar.h"

int main(){
	Complex a, b, c;
	a.read("A = ");
	a.print("A = ");

	Car myCar;
	Car momscar(10, "K5", 2);
	SportCar mySecondCar(100, "Tytan", 3)

	myCar.whereAmI();
	momscar.whereAmI();
	myCar .changeGear(3);
	momscar.speedUp();
	momscar.display();

	mySecondCar.setTurbo(true);
	mySecondCar.bTurbo(true);
}