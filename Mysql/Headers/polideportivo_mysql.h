#ifndef POLIDEPORTIVO_MYSQL_H
#define POLIDEPORTIVO_MYSQL_H
#include "Objetos/Headers/polideportivo.h"
#include "Conexion_DB.h"

class Polideportivo_mysql
{
public:
    Polideportivo_mysql();
    void insertar_polideportivo(Polideportivo *polideportivo);
    Polideportivo *obtener_polideportivo(std::string nombre);
    void actualizar_polideportivo(Polideportivo *polideportivo);
    void eliminar_polideportivo(std::string nombre);
private:
    Conexion_DB *conexion_db=Conexion_DB::instance();
};

#endif // POLIDEPORTIVO_MYSQL_H
