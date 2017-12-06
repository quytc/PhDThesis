//Many Consumers
pthread_mutex_lock(L);
while(true){ /*branch*/ 
  pthread_cond_wait(cvFull,L);
  val = buffer;
  pthread_cond_signal(cvEmpty);
 }
pthread_mutex_unlock(L);
