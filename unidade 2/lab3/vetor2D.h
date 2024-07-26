class Vetor2D{
    private:
        int m_x;
        int m_y;
    
    public:
        Vetor2D() : m_x(0), m_y(0) {} // construtor padrao
        Vetor2D(int x, int y) : m_x(x), m_y(y) {} // contrutor parametrizado

        int getX() const{
            return m_x;
        }

        void setX(int x){
            m_x = x;
        }


        int getY() const{
            return m_y;
        }

        void setY(int y){
            m_y = y;
        }

};