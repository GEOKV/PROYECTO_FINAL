#pragma once
#include <iostream>
#include <mysql.h>
#include "ConexionBD.h"
#include <string>

class Marcas
{
	
private:
	int idMarca = 0;
	string marca;

public:
	Marcas() {
	};
	Marcas(int id, string mar) {
		idMarca = id;
		marca = mar;
	};
	Marcas(int id) {
		idMarca = id;
	};
	
	//set
	void setidMarca(int id) { idMarca = id; }
	void setMarcas(string mar) { marca = mar; }
	//get
	int getidMarca() { return idMarca; }
	string getMarcas() { return marca; }

	
	void crear() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {

			string t = to_string(idMarca);
			string insert = "INSERT INTO marcas(idMarca,marca) "
				"VALUES('" + t + "','" + marca + "')";
			const char* i = insert.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				system("cls");
				cout << "------- Ingreso exitoso --------" << endl;
			}
			else {
				system("cls");
				cout << "Query Insert got problems" << mysql_error(cn.getConectar()) << endl;
			}
		}
		else {
			cout << "Error al conectar" << endl;
		}
		cn.cerrar_conexion();
	};

	void leer() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "SELECT *FROM marcas";
			const char* x = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), x);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				while (fila = mysql_fetch_row(resultado)) {
					cout << "idMarca " << fila[0] << endl;
					cout << "Marcas: " << fila[1] << endl;
					cout << "\n";
				}
				cout << "\n";
				cout << "_________________________________" << endl;
			}
			else {
				system("cls");
				cout << "Query Select got problems" << mysql_error(cn.getConectar()) << endl;
			}

		}
		else {
			cout << "Error en la conexion" << endl;
		}
		cn.cerrar_conexion();
	};

	void actualizar() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string t = to_string(idMarca);
			string update = "UPDATE marcas SET marca='" + marca + "' WHERE idMarca = '" + t + "'";
			const char* u = update.c_str();
			q_estado = mysql_query(cn.getConectar(), u);
			if (!q_estado) {
				system("cls");
				cout << "--------- Modificacion exitosa ---------" << endl;
			}
			else {
				system("cls");
				cout << "Query Update Failed: " << mysql_error(cn.getConectar()) << endl;
			}
		}
		else {
			cout << "Error al conectar" << endl;
		}
		cn.cerrar_conexion();
	};

	void eliminar() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string deleteQuery = "DELETE FROM marcas WHERE idMarca = '" + to_string(idMarca) + "'";
			const char* d = deleteQuery.c_str();
			q_estado = mysql_query(cn.getConectar(), d);
			if (!q_estado) {
				system("cls");
				cout << "-------- Eliminacion exitosa ---------" << endl;
			}
			else {
				system("cls");
				cout << "Query Delete got problems";
			}
		}
		else {
			cout << "Error al conectar" << endl;
		}
		cn.cerrar_conexion();
	};

};








