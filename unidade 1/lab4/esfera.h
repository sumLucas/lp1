class Esfera {
    private:
    double m_raio;
    static int contadorTotal;

    public:
    Esfera();
    Esfera(double raio);

    double getRaio();
    void setRaio(double raio);

    static int getTotal();

    double area();
    double volume();
};
