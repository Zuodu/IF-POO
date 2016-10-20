/*************************************************************************
Ensemble  -  description
-------------------
d�but                : $DATE$
copyright            : (C) $YEAR$ par $AUTHOR$
e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Ensemble> (fichier Ensemble.h) ----------------
#if ! defined ( ENSEMBLE_H )
#define ENSEMBLE_H
//------------------------------------------------------------- Constantes
const int CARD_MAX = 5;
enum crduEstInclus {NON_INCLUSION,INCLUSION_LARGE,INCLUSION_STRICTE};
enum crduAjouter { DEJA_PRESENT,PLEIN,AJOUTE };

class Ensemble
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- M�thodes publiques
	void Afficher();

	bool EstEgal (const Ensemble & unEnsemble) const;

	crduEstInclus EstInclus(const Ensemble & unEnsemble) const;

	crduAjouter Ajouter(int aAjouter);

	unsigned int Ajuster(int delta);

	bool Retirer(int element);

	//------------------------------------------------- Surcharge d'op�rateurs
	Ensemble & operator = ( const Ensemble & unEnsemble );


	//-------------------------------------------- Constructeurs - destructeur
	Ensemble(const Ensemble & unEnsemble);
	//Constructeur de copie


	Ensemble(unsigned int cardMax = CARD_MAX);
	//Constructeur d�faut

	Ensemble(int t[], unsigned int nbElements);
	//Constructeur � partir d'un tableau et d'une CardMax


	virtual ~Ensemble();

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- M�thodes prot�g�es
	int* EnleveDoublons(int tab[], int taille);
	void TriBulle(int* t, int current);

	//----------------------------------------------------- Attributs prot�g�s
	unsigned int cardMaxi;
	unsigned int cardCurrent;
	int* table;
};

//-------------------------------- Autres d�finitions d�pendantes de <Ensemble>

#endif // Ensemble

#pragma once
