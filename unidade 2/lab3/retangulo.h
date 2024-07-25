
class Retangulo: public Forma{
    private:
        int m_largura;
        int m_altura;
        Vetor2D centro;
    public:
        Vetor2D centro;
        Retangulo(int largura = 0, int altura = 0)
            : m_largura( largura ), m_altura( altura)
    {
    }

        const int& getLargura() const { return m_largura; }
        int getAltura() const {return m_altura;}

        void desenhar(){
                for (int i = 0; i < m_altura; ++i) {
                    for (int j = 0; j < m_largura; ++j) {
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
            return m_largura * m_altura;
        }

        // Implementação do método perimetro()
        double perimetro(){
            return 2 * (m_largura + m_altura);
        }

};