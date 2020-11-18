#pragma once

#include "Transmitter.h"
#include <iostream>
#include <string>

class Receiver {
public:
	Receiver();
	void connectTo(Transmitter* Transmitter);		// Transmet sont instance et sa methode a un transmetteur
	void disconnectOf(Transmitter* Transmission);	// Delete sont instance du transmetteur
	void set_message(std::string message);			// seter de l'attribut _message
private:
	std::vector<std::string> _message;				// Messages transmis
	friend std::ostream& operator<< (std::ostream& flux, Receiver const& receiver);
};


