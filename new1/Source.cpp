#include <iostream>

class Vehicle {
public:

	//конструктор
	Vehicle(int newMaxSpeed, const std::string& newColor, const std::string& newType) {
	maxSpeed = newMaxSpeed;
	color = newColor;
	type = newType;
	s = new char[50];
	}

	Vehicle() = default;
	
	
	// онструктор копировани€, копирует данные из другого класса
	Vehicle(Vehicle& obj) {
		maxSpeed = obj.getMaxSpeed();
		color = obj.getColor();
		type = obj.getType();
		
	}





	//деструктор
	~Vehicle() {
	std::cout << "Destructor Vehicle()" << std::endl;
	delete [] s;
}

	std::string getColor() {
		return color;
	}
	void setColor(const std::string& newColor) {
		color = newColor;
	}
	std::string getType() {
		return type;
	}
	//геттер
	int getMaxSpeed() {
		int getMaxSpeed;
		return maxSpeed;
	}
	void setMaxSpeed(int newSpeed) {
		maxSpeed = newSpeed;
	}

	// перегрузка оператора == (эквивалентности)

	bool operator == (Vehicle& other) {
		if (maxSpeed == other.maxSpeed && color == other.color && type == other.type) {
			return true;
		}
		return false;

	}


private: 
	int maxSpeed;
	std::string color;
	std::string type;
	char* s;
};


int main() {
	std::cout << "Start of main ()" << std::endl;
	Vehicle car(20, " black", "van");


	Vehicle originalCar(15, "white", "bus");
	Vehicle newCar(originalCar);
	car.setMaxSpeed(50);

	std::cout << originalCar.getMaxSpeed() << " " << originalCar.getColor() << originalCar.getType() << std::endl;
	std::cout << "============================\n";
	std::cout << newCar.getMaxSpeed() << " " << newCar.getColor() << newCar.getType() << std::endl;

	std::cout << "Max speed:" << car.getMaxSpeed() << std::endl;

	std::string carColor = car.getColor();
	std::cout << "car color" << carColor << "car.getColor" << car.getColor() << std::endl;
	carColor = "green";
	std::cout << "car color" << carColor << "car.getColor" << car.getColor() << std::endl;

	const std::string& carType = car.getType();
	std:: cout << carType << " "<< car.getType() << std::endl;

	std::cout << "End of main ()" << std::endl;

	return 0;
}


	









