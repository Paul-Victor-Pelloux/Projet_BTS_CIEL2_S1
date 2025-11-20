#ifndef LIBDETECTEVEHICULE_H_INCLUDED
#define LIBDETECTEVEHICULE_H_INCLUDED

/*!
* Name of the projetc: System detection with Boucle
* @file libDetecteVehicule.h
* @brief declaration of the Detecte_Vehicule classe
* @version : 1.0
* @author SUDRE, PELLOUX, LOZACH Creation of the code
* @date  creation 25/09/2024 - editing 09/10/2025
*
*/

class CDetecte_vehicule
{
public :
/*!
* @fn Detecte_Vehicule(void)
* @brief constructor of the class. Instantiate automatically the system
* @param parameter PIN Arduino of type digit.
*
*/
	CDetecte_vehicule(int PIN);
	

/*!
* @fn ~Detecte_Vehicule(void)
* @brief destructor of the class.
* @param No parameters.
*
*/
	~CDetecte_vehicule(void);

/*!
* @fn est_present_vehicule(void)
* @brief Detecte a vehicule
* @param No parameters.
* @return true if detecte a vehicule is ok, false otherwise
*
*/
	bool est_present_vehicule(bool detection);

};


#endif // LIBDETECTEVEHICULE_H_INCLUDED
