Sopra la parte di hardware è costruita una serie di strati software che viene identificata come sistema operativo, che ha il compito di utilizzare il componente fisico rendendolo disponibile agli strati software sovrastanti.

- Software di sistema
- Software applicativo

L'obiettivo principale del SO è usare le risorse rendendole disponibili e facilmente utilizzabili a uno strato superiore. Le risorse sono rese disponibili in un formato semplificato ed esteso, diminuendo quindi la complessità, e virtualizzando le risorse quando non disponibili.

Il sistema operativo quindi astrae le primitive.

Per fare questo ogni elemento del SO ha in gestione una delle risorse necessarie per i programmi, e gestirà delle politiche per raggiungere una prestazione nella risorsa.

## Gli strati del SO

#### Gestore dei processi/Kernel

Strato più vicino alla macchina fisica, la risorsa che gestisce è il processore. Astrae l'interazione con il processore e rende a disposizione ad ogni processo un processore virtuale.

Un processo è un programma attivo, quindi in esecuzione. Ossia l'evoluzione dell'esecuzione. Un programma può dar vita a più processi.

Per rendere disponibile un processore virtuale per ogni programma anche quando il processore fisico non ha tale numero di processori si suddivide/condivide il tempo di elaborazione sul processore fisico, quindi un processo ha a disposizione a turno un po di tempo di elaborazione sul processore fisico.

Un processo appena creato entra subito in uno stato `ready`, quando ad un processo viene assegnata la CPU entra nello stato `running`. Il processo quando finisce entra in stato di `end`. In caso un processo sia in attesa di eventi esterni/risorse entra nello stato di `wait`, una volta il processo riceve questi dati rientra nella coda di esecuzione. Ogni quanto di tempo un processo viene sospeso e riportato nello stato di `ready`, consentendo quindi a tutti un quanto di tempo per cui a rotazione tutti i processi possono evolvere. Questo algoritmo è detto round-robin. Le politiche di assegnamento dell'esecuzione dei processi sono dette scheduling. Un esempio di queste politiche può essere che i processi del SO hanno priorità più alta rispetto ai processi dei software applicativi.

Il cambio di processo fisico ha un costo di tempo non piccolo, perché va salvato lo stato del processo corrente e va caricato lo stato del nuovo processo.

Per gestire il tutto il kernel dispone di una tabella che lista tutti i processi e i loro dettagli. Inoltre il kernel si dovrà preoccupare di gestire la comunicazione tra più processi.
#### Gestore della memoria di lavoro

Il gestore fornisce un meccanismo tramite il quale il processo accede alla memoria tramite un indirizzo. Ogni processo ha un area di memoria logicamente accessibile e protetta da altri processi. Per quanto riguarda l'estensione mette a disposizione una memoria virtuale.

-- To continue