#ifndef TERMO_H
#define TERMO_H

#include <string>
#include <iostream>

class Termo {
    private:
        std::string m_termo;
        long long m_peso;

    public:
        Termo() : m_termo(), m_peso(0) {}
        Termo(std::string termo, long long peso) : m_termo(termo), m_peso(peso) {}

        std::string getTermo() {
            return m_termo;
        }

        long long getPeso() {
            return m_peso;
        }
        
        bool operator<(Termo T2) {
            return m_termo < T2.m_termo;
        }

        friend std::ostream& operator<<(std::ostream& out, const Termo& t) {
            out << t.m_peso << "\t" << t.m_termo;
            return out;
        }
};

#endif // TERMO_H