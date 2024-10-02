#ifndef FUNCTIONS_C
#define FUNCTIONS_C

// defind_max : 
#define max_etud 200
#define max_char 50
#define max_depa 50


typedef struct
{
    int jour;
    int mois;
    int annee;
} date_naissace;

// struct :
typedef struct
{
    long unsigned int id_etud;
    char nom_etud[max_char];
    char prenom_etud[max_char];
    date_naissace date_n;
    char departement[max_char];
    float note_generale;

} etudiants;


etudiants etude[max_etud];


// variable : 
extern int count_etud;
extern int count_departement_math;
extern int count_departement_svt;
extern int count_departement_phisique;

// deff function :
void  show_meni_principale();
void loop_fn();
void add_etudiants();




#endif