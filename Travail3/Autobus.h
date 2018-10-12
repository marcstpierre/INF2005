#ifndef AUTOBUS_H
#define AUTOBUS_H

namespace msp {
class Autobus
{
    public:
        Autobus();
        virtual ~Autobus();
        char Gettype() { return m_type; }
        void Settype(char val) { m_type = val; }
        unsigned int GetNbreSieges() { return m_nbre_sieges; }
        void SetNbreSieges(unsigned int val) { m_nbre_sieges = val; }
    protected:
    private:
        char m_type;
        unsigned int m_nbre_sieges;
};

}

#endif // AUTOBUS_H
