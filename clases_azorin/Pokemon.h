class Pokemon
{
private:
    char tipo;
    short daño;
    short vida; 

public:
    Pokemon(char especie, short dmg, short ps)
    {
        tipo = especie;
        daño = dmg;
        vida = ps;
    }
};

class Fuego : public Pokemon{
    private: 

    public: 
    Fuego(short dmgF = 10, short psF = 10)
    {
        
    }
    ascuas(Fuego rojo = NULL, agua azul = NULL, planta verde = NULL)
    {
        
    }
}
class Agua : public Pokemon{
    private:
    public: 
}
class Planta : public Pokemon{
    private:
    public: 
}
