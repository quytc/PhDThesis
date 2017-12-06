//Many Consumers
acquire L;
while(true){ /*branch*/ 
  wait cvFull, L;
  read buffer;
  signal cvEmpty;
 }
release L;
