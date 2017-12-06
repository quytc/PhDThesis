// declarations
synchronized getValue(){ return val; }
synchronized setValue(int v){ val=v; }

// Main call
setValue( getValue() + 1 );
