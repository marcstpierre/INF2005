#ifndef AUTOBUS_H
#define AUTOBUS_H

namespace msp {
class Autobus
{
    public:
        Autobus();
        Autobus(char t, int n){m_type=t; m_nbre_sieges=n;}
        virtual ~Autobus();
        char Gettype() { return m_type; }
        void Settype(char val) { m_type = val; }
        int GetNbreSieges() { return m_nbre_sieges; }
        void SetNbreSieges(int val) { m_nbre_sieges = val; }
    protected:
    private:
        char m_type;
        int m_nbre_sieges;
};

}

#endif // AUTOBUS_H
