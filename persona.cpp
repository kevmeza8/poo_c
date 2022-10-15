#include <iostream>
using namespace std;

class persona{
	//atributos
	protected : string nombres, apellidos, direccion;
			int telefono;
		//metodo
	// constructo	
	protected : 
		persona(){
			
		}
		persona(string nom,string ape,string dir,int tel){
			nombres=nom;
			apellidos=ape;
			direccion=dir;
			telefono=tel;
			
		}
	void mostrar();
		
};




class Cliente : persona{
	//atributos
	private:string nit;
	
	//contructor
	public :
	Cliente (){		
	} 
	
	Cliente(string nom,string ape,string dir, int tel,string n):persona(nom,ape,dir,tel){
		nit=n;
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit=n;
	}
	void setNombres(string nom){nombres=nom;
	}
	void setApellidos(string ape){apellidos=ape;
	}
	void setDireccion(string dir){direccion=dir;
	}
	void setTelefono(int tel){telefono = tel;
	}
	//get (mostrar)
	string getNit(){return nit;
	}
	string getNombres(){return nombres;
	}
	string getApellidos(){return apellidos;
	}
	string getDireccion(){return direccion;
	}
	int getTelefono(){return telefono;
	}
	//metodos
	
	void mostrar(){
		cout<<"_______________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
	
};




main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar Nit:   ";
	cin>>nit;
	cout<<"Ingresar Nombres:   ";
	cin>>nombres;
	cout<<"Ingresar Apellidos:   ";
	cin>>apellidos;
	cout<<"Ingresar Direccion:   ";
	cin>>direccion;
	cout<<"Ingresar Telefono:   ";
	cin>>telefono;
	//obj.mostrar();	

	
	//instancia de un objeto
	Cliente obj=Cliente(nombres,apellidos,direccion,telefono,nit);	
	obj.mostrar();
/*
	cout<<"Ingresar Nit:   ";
	cin>>nit;
	
	
	Cliente obj2=Cliente(nombres,apellidos,direccion,telefono,nit);	
	obj2.mostrar();
*/
	cout<<"Ingresar Nit:   ";
	cin>>nit;
	obj.setNit(nit);
	cout<<obj.getNit();
/*	
	obj.mostrar();

	Cliente obj=Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();
*/

}





