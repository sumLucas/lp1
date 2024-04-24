class Paralelepipedo {
    private:
    double m_aresta1;
    double m_aresta2;
    double m_aresta3;
    static int contadorTotal;


    public:
    Paralelepipedo();
    Paralelepipedo(double aresta1, double aresta2, double aresta3);

    double getAresta1();
    void setAresta1(double aresta1);

    double getAresta2();
    void setAresta2(double aresta2);

    double getAresta3();
    void setAresta3(double aresta3);

    static int getTotal();


    double area();
    double volume();
};