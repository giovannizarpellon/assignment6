#include "keywords.h"

/**
 * Aprire in lettura il file di cui si riceve il path in input
 * Analizzare il file per estrarre le parole chiave dal testo
 * Restituire le parole usando un array di stringhe allocato dinamicamente
 * Usare num_keywords_ptr per fornire in output il numero di parole chiave trovate
 * @param [in] filepath path del file formattato contenente le parole chiave
 * @param [out] num_keywords_ptr numero di parole chiave trovate (una per riga)
 * @return array allocato dinamicamente di parole chiave
 * Nel caso la lettura del file o l'allocazione di memoria non vadano a buon fine,
 * azzerare il valore di num_rows_ptr, liberare la memoria allocata e restituire NULL
 **/
string *get_keyworks(char filepath[], int *num_keywords_ptr)
{
    string *vect_keyword;
    vect_keyword = (string*)malloc( *num_keywords_ptr * (sizeof(string));
    if (vect_keyword == NULL) 
        return NULL;
    
    char keyword[MAX_CHARS_PER_ROW];
    FILE *f = fopen(filepath, "r");
    if (f == NULL)
        return NULL;
    fscanf(f, "%d", num_keywords_ptr);
    for (int j = 0; j < *num_keywords_ptr; j++)
    {
        int pos_keyword;
        fscanf(f, "%d", &pos_keyword);
        for (int i = 0; i < pos_keyword; i++)
        {
            fscanf(f, "%s", keyword);
        }
        int lunghezza_stringa = strlen(keyword);
        fscanf(f, "%*[^\n]\n");
    }
    

    
    free(vect_keyword);
    vect_keyword = NULL;
    fclose(f);
    return NULL;
}
