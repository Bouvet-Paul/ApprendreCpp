#ifndef _IPV4_H
#define _IPV4_H
class IPv4
{
private:
    unsigned char * adresse;
    unsigned char * masque ;
    void CalculerMasque(unsigned char _cidr);
public:
    IPv4(const unsigned char * _adresse, const unsigned char _cidr);
    IPv4(const unsigned char * _adresse, const unsigned char * _masque);
    ~IPv4();
    void ObtenirMasque(unsigned char * _masque);
    void ObtenirAdresseReseau(unsigned char * _reseau);
    void ObtenirAdresseDiffusion(unsigned char * _diffusion);
    void ObtenirPremiereAdresse(unsigned char * _Premierreseau);
    void ObtenirDerniereAdresse(unsigned char * _Dernierediffusion);
    unsigned int ObtenirNombreMachine();
    unsigned int NbBitA1(unsigned char val);
};
#endif

