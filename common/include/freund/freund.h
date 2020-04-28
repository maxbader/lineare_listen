/**
 * Struktur um einen Freund abzubilden
 **/
struct Freund{
    char *name;               /// Name des Freundes
    int alter;                /// Alter des Freundes
    struct Freund *next;      /// Pointer zum naechsten Knoten oder NULL beim letzten Knoten
};

/**
 * Fuegt ein element vorne an einer Liste an
 * @param head Pointer zum aktuellen Listenanfang bevor ein Element eingefuehgt wird
 * @param name Name des neuen Feundes
 * @param alter Alter des neuen Freundes
 * @return neuer head der List oder NULL bei Problemen
 **/
struct Freund* add(struct Freund* head, const char *name, int alter);

/**
 * Gibt alle Eintraege der Liste aus
 * @param head Pointer zum aktuellen Listenanfang
 **/
void print(const struct Freund* list);

/**
 * Loeschte alle Eintraege der Liste und gibt den Speicher frei
 * @param head Pointer zum aktuellen Listenanfang
 **/
void clear(struct Freund* list);

/**
 * Loeschte letzten Eintrag
 * @param head Pointer zum aktuellen Listenanfang
 * @return neuer head der List oder NULL bei Problemen
 **/
struct Freund* delete_back(struct Freund* head);

/**
 * List eine Namensliste
 * @param filename
 * @return neuer head der List oder NULL bei Problemen
 **/
struct Freund* read(const char *filename);
