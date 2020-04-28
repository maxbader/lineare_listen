/**
 * funktion um speicher für einen string anzulegen und zu kopieren
 * @param src pointer zum kopierenden String
 * @return pointer zum allokierten speicher. Wenn NULL dann Fehler!
 * @pre 
 * @post speicher muss nach der verwendung wieder freigegen werden
 **/
char *myStrDup(const char *src);