
class Quadrado: public Forma{
    private:
        int m_lado;
    public:
        
        Quadrado(int lado = 0)
            : m_lado(lado)
    {
    }

        const int& getLado() const { return m_lado; }

    void desenhar(){
        for (int i = 0; i < m_lado; ++i) {
            for (int j = 0; j < m_lado; ++j) {
                std::cout << '*';
            }
            std::cout << '\n';
        }
    }
    
    // Implementação do método getCentro()
    Vetor2D getCentro(){
        return centro;
    }

    // Implementação do método area()
    double area(){
        return m_lado * m_lado;
    }

    // Implementação do método perimetro()
    double perimetro(){
        return 4 * m_lado;
    }
};