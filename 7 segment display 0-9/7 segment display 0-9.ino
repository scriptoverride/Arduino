int E = 13;
int D = 12;
int C = 11;
int DP = 10;
int B = 9;
int A = 8;
int F = 7;
int G = 6;

void zero(){
  digitalWrite(E,LOW);  
  digitalWrite(D,LOW);  
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);  
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);  
  digitalWrite(F,LOW);  
  digitalWrite(G,HIGH);  
}


void one(){
  digitalWrite(E,HIGH);  
  digitalWrite(D,HIGH);  
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);  
  digitalWrite(B,LOW);
  digitalWrite(A,HIGH);  
  digitalWrite(F,HIGH);  
  digitalWrite(G,HIGH);  
}

void two(){
  digitalWrite(E,LOW);  
  digitalWrite(D,LOW);  
  digitalWrite(C,HIGH);
  digitalWrite(DP,HIGH);  
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);  
  digitalWrite(F,HIGH);  
  digitalWrite(G,LOW);  
}

void three(){
  digitalWrite(E,HIGH);  
  digitalWrite(D,LOW);  
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);  
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);  
  digitalWrite(F,HIGH);  
  digitalWrite(G,LOW);  
}

void four(){
  digitalWrite(E,HIGH);  
  digitalWrite(D,HIGH);  
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);  
  digitalWrite(B,LOW);
  digitalWrite(A,HIGH);  
  digitalWrite(F,LOW);  
  digitalWrite(G,LOW);  
}

void five(){
  digitalWrite(E,HIGH);  
  digitalWrite(D,LOW);  
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);  
  digitalWrite(B,HIGH);
  digitalWrite(A,LOW);  
  digitalWrite(F,LOW);  
  digitalWrite(G,LOW);  
}

void six(){
  digitalWrite(E,LOW);  
  digitalWrite(D,LOW);  
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);  
  digitalWrite(B,HIGH);
  digitalWrite(A,LOW);  
  digitalWrite(F,LOW);  
  digitalWrite(G,LOW);  
}

void seven(){
  digitalWrite(E,HIGH);  
  digitalWrite(D,HIGH);  
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);  
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);  
  digitalWrite(F,HIGH);  
  digitalWrite(G,HIGH);  
}

void eight(){
  digitalWrite(E,LOW);  
  digitalWrite(D,LOW);  
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);  
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);  
  digitalWrite(F,LOW);  
  digitalWrite(G,LOW);  
}

void nine(){
  digitalWrite(E,HIGH);  
  digitalWrite(D,HIGH);  
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);  
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);  
  digitalWrite(F,LOW);  
  digitalWrite(G,LOW);  
}


void setup(){
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT); 
}

void loop()
{
  	zero();
  	delay(1000);
	one();
  	delay(1000);
  	two();
  	delay(1000);
   	three();
  	delay(1000);
    	four();
  	delay(1000);
	five();
  	delay(1000);
  	six();
  	delay(1000);
  	seven();
  	delay(1000);
  	eight();
  	delay(1000);
  	nine();
  	delay(1000);  
}
