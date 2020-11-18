#pragma once

#include <vector>
#include <string>

class Receiver;

class Transmitter {
public:
	Transmitter();
	void sendMessage(std::string message);					// Envois un message à tous les receveur connecté
	void addReceiver(Receiver *receiver);					// Connecte un receveur
	void delReceiver(Receiver* reciever);					// Deconnecte un receveur
	void set_method(void (Receiver::*method)(std::string));	// Seter de l'attribut _method
	std::vector<std::string>* get_transmission();			// Geter des messages au complet
private:
	std::vector<std::string> _transmission;					// Ensemble des messages
	void (Receiver::*_method)(std::string);					// Methode du receveur
	std::vector<Receiver*> _receivers;						// Liste des receveurs
};
