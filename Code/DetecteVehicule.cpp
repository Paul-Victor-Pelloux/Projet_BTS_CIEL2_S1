/*!
* Name of the projetc: System detection with Boucle
* @file DetecteVehicule.cpp
* @brief function developpment of the Detecte_Vehicule classe
* @version : 1.0
* @author SUDRE, PELLOUX, LOZACH Creation of the code
* @date  creation 25/09/2024 - editing 16/10/2025
*
*/

#include <iostream>
using namespace std;
#include "libDetecteVehicule.h"

/*!
* @fn est_present_vehicule(void)
* @brief Detecte a vehicule
* @param No parameters.
* @return true if detecte a vehicule is ok, false otherwise
*
*/



// manque broche digital READ pour la broche
CDetecte_vehicule::CDetecte_vehicule(int PIN)
{

}

CDetecte_vehicule::~CDetecte_vehicule(void)
{

}

bool CDetecte_vehicule::est_present_vehicule(bool detection)
{
    if (detection == true){
        return true;
    } else{
        return false;
    }
}
