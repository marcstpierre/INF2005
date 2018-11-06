#ifndef AUTOBUS_H
#define AUTOBUS_H

namespace msp {
class Autobus
{
    public:
        Autobus();
        Autobus(char t, int n){m_type=t; nbre_sieges=n;}
        virtual ~Autobus();
        char Gettype() { return m_type; }
        void Settype(char val) { m_type = val; }
        int GetNbreSieges() { return nbre_sieges; }
        void SetNbreSieges(int val) { nbre_sieges = val; }
        int nbre_sieges;
    protected:
    private:
        char m_type;

};

}

#endif // AUTOBUS_H
