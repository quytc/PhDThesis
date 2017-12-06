//Many Producers
pthread_mutex_lock(L);
while(true){ /*branch*/ 
  pthread_cond_wait(cvEmpty,L);
  buffer = data;
  pthread_cond_signal(cvFull);
 }
pthread_mutex_unlock(L);
