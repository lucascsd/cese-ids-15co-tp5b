/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/**
 * @brief Estructura del tipo datos alumno_s con la información del alumno.
 *
 * Estructura del tipo de datos struct alumno_s que contiene los datos que 
 * parametrizan a los alumnos.
 *
 * @param   alumno_t    puntero a estructura alumno_s que contiene la informacón del alumno.
 * @param   apellidos   cadena de caracteres que contiene el apellido del alumno.
 * @param   nombres     cadena de caracteres que contiene el nombre del alumno.
 * @param   documento   cadena de caracteres que contiene el numero de documento del alumno.
 */
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Función para serializar los datos de cada alumno.
 *
 * La función SerializarAlumno imprime por consola cada alumnos que 
 * forma parte de la estructura del tipo alumno_s en un formato definido.
 *
 * @param   cadena      Cadena de caracteres a imprimir.
 * @param   espacio     Tamaño de la cadena de caracteres a imprimir
 * @param   alumno      Estructura que contiene el alumno a serializar.
 * 
 * @return  true        Se impirimeron correctamente los datos del alumno.
 * @return  false       No se imprimen mas datos de alumnos.
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Función para serializar todos los alumnos de la estructura ALUMNOS.
 *
 * La función SerializarAlumnos recorre los alumnos que contiene la estructura ALUMNOS.
 * La funcíón verifica la disponibilidad de tamaño de la cadena de caracteres 
 * que contiene los alumnos a imprimir.
 * Los alumnos son impresos mediante el llamado de la función SerializarAlumno.
 *
 * @param   cadena      Cadena de caracteres a imprimir.
 * @param   espacio     Tamaño de la cadena de caracteres a imprimir
 * 
 * @return  true        Se impirimeron correctamente todos los alumnos de la estructura.
 * @return  false       No es posible imprimir la información de los alumnos.
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
