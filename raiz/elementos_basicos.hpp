#ifndef ELEMENTOS_BASICOS_H
#define ELEMENTOS_BASICOS_H
#include <vector>
#include <iostream>
using namespace std;

class integer_atomic{ /*contain a class that has the atomized building blocks */

    private : struct int_atomic { /*integer atomic type */
        string s_type = "int";/*structure type*/
        string nombre ;
        int value;
        };

        int_atomic Int_atomic;

    public : void set_integer_atomic(string s_name, int s_value){ /*set an integer_atomic  */
        Int_atomic.nombre = s_name;
        Int_atomic.value =  s_value;

        };

    public : string get_name(){
        return Int_atomic.nombre;
    };
    public : int get_value(){
        return Int_atomic.value;
    }; 
};

class double_atomic {

    private : struct d_atomic { /*double atomic type */
        string s_type = "double";/*structure type*/
        string nombre ;
        float value;
        };

        d_atomic D_atomic;

    public : void set_double_atomic(string s_name, double s_value){ /*set a double_atomic  */
        D_atomic.nombre = s_name;
        D_atomic.value =  s_value;

    };
    public : string get_name(){
        return D_atomic.nombre;
    };
    public : double get_value(){
        return D_atomic.value;
    };
};

class string_atomic {
private : struct str_atomic { /*string atomic type */
    string s_type = "string"; /*structure type*/
    string nombre ;
    string value;
    };

    str_atomic Str_atomic;

public : void set_string_atomic(string s_name, string s_value){ /*set a double_atomic  */
    Str_atomic.nombre = s_name;
    Str_atomic.value =  s_value;

    };
public : string get_name(){
        return Str_atomic.nombre;
    };
    public : string get_value(){
        return Str_atomic.value;
    }; 
};

class bool_atomic {

private : struct Bool_atomic { /*string atomic type */
    string s_type = "boolean"; /*structure type*/
    string nombre ;
    bool value;
    };
    Bool_atomic b_atomic;
public : void set_bool_atomic(string s_name, bool s_value){ /*set a double_atomic  */
    b_atomic.nombre = s_name;
    b_atomic.value =  s_value;

    };
    public : string get_name(){
        return b_atomic.nombre;
    };
    public : bool get_value(){
        return b_atomic.value;
    };  
};

#endif
