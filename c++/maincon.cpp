#include"contacsel.cpp" 
int contact::compteur=0;  
main(){ 
	contactsal C1("nttfb",2343); 
	C1.setAge(34);
	C1.setMessage("hello everybody");  
	C1.calculSalaire(77.987); 
	C1.setmatricule(234);
	C1.afficher();
}
