int PoziomSolnika = 2; // Nowatorski system przewodności solnika
int Alarm = 13; // Dioda alarmowa

bool MarcinekUgotowany = false;  //Gdyby Małcinek chciał dolać wody do solnika

void setup() {
  pinMode(PoziomSolnika, INPUT_PULLUP); 
  pinMode(Alarm, OUTPUT);
}

void loop() {
  int stanSolnika = digitalRead(PoziomSolnika); // read poziomu solnika

  if (stanSolnika == 1) {
    MarcinekUgotowany = true; 
  }

  if (MarcinekUgotowany == true) {
    digitalWrite(Alarm, true); // Palimy diodę alarmową
  } else {
    digitalWrite(Alarm, false);  // Marcin niewinny, solnik kradnie ktoś inny albo domino ma demencję
  }
}