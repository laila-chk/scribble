#include "Dummy.hpp"

Dummy::Dummy(){
	type = "Target Practice Dummy";
}

Dummy::~Dummy() {}

Dummy* Dummy::clone() const {
	return new Dummy() ;
}
