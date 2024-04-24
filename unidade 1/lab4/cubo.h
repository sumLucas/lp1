class Cubo {
    private:
    double m_aresta;
    static int contadorTotal;

    public:
    Cubo();
    Cubo(double aresta);

    double getAresta();
    void setAresta(double aresta);

    static int getTotal();

    double area();
    double volume();
};
