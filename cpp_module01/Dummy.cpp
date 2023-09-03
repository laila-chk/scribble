#include "Dummy.hpp"

Dummy::Dummy(): type("Target Practice Dummy"){
}

virtual ATarget* Dummy::clone() const {
	return new Dummy() ;
}
