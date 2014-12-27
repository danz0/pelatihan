#include <iostream> 

class coba{
	
private:
	int A;
	int B;
	
public:
	void setA(int AA);
	int getA();
	void showA();
};

void coba::setA(int AA){
	A = AA;
}

int coba::getA(){
	std::cin >> A;
	this->B = A;
	return A;
}

void coba::showA(){
	std::cout << "nilai A= " << A << std::endl;
}

int main(void){
	coba tes1;
	
	coba* tes2;
	tes2= new coba;
	
	tes1.setA(100);
	tes1.showA();
	
	tes2->setA(200);
	tes2->showA();
	
	return 0;
	delete tes2;
}