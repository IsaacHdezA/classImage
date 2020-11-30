/*
 * Desarrollado por: Baca Barbosa Braulio José.
 * 	 	     Guevara Mosqueda Héctor.
 * 	 	     Hernández Antonio Aldo Isaac.
 * Fecha de creación: 25/11/2020.
 * Descripción: Definición de funciones estructura Pixel.
 */

// Dependencias
#include "../includes/pixel.hpp"

// Funciones miembro de clase Pixel
// Constructor
Pixel::Pixel( char red, char green, char blue, char alpha ) {
    this->r=red;
    this->b=blue;
    this->g=green;
    this->a=alpha;
}
