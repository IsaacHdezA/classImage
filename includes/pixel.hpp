/*
 * Desarrollado por: Baca Barbosa Braulio José.
 * 	 	     Guevara Mosqueda Héctor.
 * 	 	     Hernández Antonio Aldo Isaac.
 * Fecha de creación: 25/11/2020.
 * Descripción: Declaración estructura Pixel.
 */

// Declaraciones globales
// Estructuras

#ifndef PIXEL_HPP
	#define PIXEL_HPP
		struct Pixel {
			// Constructor.
			Pixel( char = 0, char = 0, char = 0, char = 0 );
			// Datos de miembro: Red, Green, Blue, Alpha, respectivamente.
			unsigned char r, g, b, a;
		};
#endif
