//Many Producers
acquire L;
while(true){ /*branch*/ 
  wait cvEmpty, L;
  write buffer;
  signal cvFull;
 }
release L;
