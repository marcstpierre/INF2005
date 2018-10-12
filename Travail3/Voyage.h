#ifndef VOYAGE_H
#define VOYAGE_H

namespace msp {
class Voyage
{
    public:
        Voyage();
        virtual ~Voyage();
        date Getdate_depart() { return m_date_depart; }
        void Setdate_depart(date val) { m_date_depart = val; }
        Autobus Getautobus() { return autobus; }
        void Setautobus(Autobus val) { autobus = val; }
	int GetNbreSiegeDisponibles(return autobus.GetNbreSieges() - nbre_sieges_occupes;);
	char GetTypeVoyage();


	const char FUMEUR = 'f';
	const char NON_FUMEUR = 'n';
    protected:
    private:
        date m_date_depart;
        Autobus autobus;
	int nbre_sieges_occupes;
	std::List<Reservation> reservations;
};

};

#endif // VOYAGE_H
