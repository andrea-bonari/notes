## La rappresentazione dell'informazione

Gli elementi della rappresentazione dell'informazione sono 2:
- L'alfabeto: cioè l'insieme di simboli utilizzabili
- Il codice: che ci da le sequenze di simboli ammissibili, ciò che è ammissibile è detto parola di codice

Il codice definisce l'associazione tra gli elementi da rappresentare e una sequenza ammissibile, detta associazione biunivoca.

La dimensione dipende dal numero di simboli e dalla quantità di configurazioni ammissibili.

>[!info]
>Utilizziamo i seguenti simboli per rappresentare i nostri dati
>alfabeto dei simboli: $S=\{...\}$
>cardinalità dell'alfabeto: $|S|$
>numero di elementi da rappresentare: $n$
>dimensione delle configurazioni: k

Valgono le seguenti formule:
$$k=[\log_{|s|}n]$$
$$n=|s|^k$$
## Il sistema binario

Un sistema di calcolo è una realtà costituita da due stati, per esempio
- condensatore carico/scarico
- linea con tensione alta/bassa
- ...

È quindi intuitivo utilizzare un **sistema in base binaria**, utilizzabile per rappresentare qualsiasi tipo di informazione (valori numerici, simboli, immagini, audio, ...)

Esso si avvale di due simboli: $\{0,1\}$, e la cifra della codifica è detta bit (binary digit)

I suoi multipli sono:
- byte (8 bit)
- kilobyte ($2^{10}$ byte) = 1024 bit
- megabyte ($2^{20}$ byte)
- gigabyte ($2^{30}$ byte)
- terabyte ($2^{40}$ byte)

>[!example]
>rappresentiamo i 4 semi delle carte da gioco in binario.
>$S=\{0,1\}$
>$|S|=2$
>
>dimensione delle configurazioni: $[\log_{|S|}n]=[\log_24]=2$
>
>finiamo con 4 combinazioni ammissibili, biunivoche alla rappresentazione dei simboli: $00\quad01\quad10\quad11$

>[!example]
>Rappresentiamo i 7 giorni della settimana in binario.
>
>dimensione della configurazione: $[log_27]\approx3$
>
>combinazioni: $000\quad001\quad010\quad011\quad100\quad101\quad110$, una combinazione è sprecata, ma non è un problema, perchè non si può fare diversamente.

>[!warning]
>non esistono combinazioni di dimensione diversa.

>[!info] Aspetti da considerare
> - è bene considerare di mantenere un legame logico dove possibile (es: elementi adiacenti)
> - Il significato di un informazione non definisce la sua rappresentazione, ciò dipende dalla codifica adottata

## Codifiche

#### Codifica dei caratteri

###### ASCII

nello standard ASCII base si intende rappresentare i seguenti caratteri:
- alfabeto base: $\{a .. z,A .. Z\}$
- caratteri numerici: $\{0 .. 9\}$
- simboli di interpunzione
- caratteri speciali (new-line, space, ...)

La lunghezza della codifica è: $[\log_2{128}]=7$ bit

lo standard ASCII è stato poi esteso a 8 bit, con la aggiunta di:
- caratteri nazionali: $\{à .. ù\}$
- simboli
- cornici

quindi il numero di combinazioni diventa 256.

>[!info]
>Ogni carattere corrisponde a un byte, e quindi anche a un valore numerico

##### UNICODE

>UNICODE è uno standard compatibile con il codice ASCII che utilizza 16 bit per rappresentare i caratteri, rappresentando però $65536$, tuttavia proprio per questo motivo le dimensioni dei file risultano raddoppiate.

#### Codifica dei numeri

##### Numeri naturali

Un numero naturale è un valore che può essere rappresentato come una sequenza di simboli. Il quantitativo di simboli indica la base.

>[!example]
>base 2: $\{0, 1\}$
>base 8: $\{0..7\}$
>base 10: $\{0..9\}$
>base 16: $\{0 .. F\}$

Una rappresentazione numerica può essere:
- additiva, dove il peso di un valore è dato dalla combinazione di simboli: numeri romani ($I\quad  IV\quad IX\quad ...$)
- posizionale, dove il peso di un valore è dato dalla sua posizione: numeri arabi ($1 .. 9$)

Per rappresentare un valore numerico naturale in basi diverse dobbiamo saperli convertire

>[!info]
>Formula per la conversione da base $n$ a base $10$.
>
>$n$: numero di cifre
>$c_n$: cifra in posizione $n$
>$b$: valore della base
>
>$$\sum_{i=0}^{n-1}a_i\cdot b^i$$
>
> >[!example]-
> >
> >Convertire $101011_2$ in base $10$
> >
> >$n=1\cdot 2^5+0\cdot2^4+1\cdot2^3+0\cdot2^2+1\cdot2^1+1\cdot2^0=43$

>[!info]
>Formula per la conversione da base $10$ a base $n$.
>
>Dividiamo il numero per la base e segniamo il resto, col quoziente invece ripeteremo lo stesso processo fino a raggiungere quoziente 0. A questo punto invertiamo l'ordine dei resti e quello sarà il valore in base $n$.
>
> >[!example]-
> >
> >Convertire $28_{10}$ in base $10$
> >
> > | dividendo | resto |
> > | --------- | ----- |
> > | 28        | 0     |
> > | 14        | 0     |
> > | 7         | 1     |
> > | 3         | 1     |
> > | 1         | 1     |
> >| 0         | /     |
> >
> >Quindi il nostro valore binario sarà $n=11100$

>[!info] 
>Formula per la conversione da base $2$ a base $16$ e viceversa.
>
>Semplicemente dato che la base 16 utilizza 4 bit per cifra sostituiamo il valore della cifra in esadecimale con il suo valore il binario. Possiamo fare lo stesso per convertire da base binaria a base esadecimale (in caso le cifre binarie non siano un multiplo di 4 si aggiungono degli 0 di padding a sinistra)
>
> >[!example]-
> >
> >Convertire $10A_{16}$ in base $2$.
> >
> >$n=\underbracket{0001}_{1}\quad\underbracket{0000}_0\quad\underbracket{1010}_A$

La base esadecimale è generalmente più utilizzata per la sua compattezza nella rappresentazione dei dati. Si può utilizzare nelle seguenti notazioni:
$$57AB_{16}\quad57AB_H\quad0\text{x}57AB$$
##### Numeri interi

Per rappresentare i numeri interi in qualsiasi base utilizziamo la notazione segno modulo.

$$n=\underbracket{-}_\text{segno}\quad\underbracket{10}_\text{modulo}$$
Purtroppo questo ci fa sprecare due spazi per il numero 0:
$$-0_{2MS}=+0_{2MS}$$

Per rappresentare in binario questa notazione aggiungiamo a sinistra un bit che stabilisce il segno, in caso assuma valore $0$ è positivo, altrimenti è negativo.
$$-5_{10}=\underbracket{1}_\text{segno}101_{2MS}$$
>[!warning]
>L'aggiunta del bit del segno ci permette di rappresentare lo stesso numero di configurazioni, ma diminuisce il numero massimo e aumenta il numero minimo
>$$\begin{matrix}-7_{10} & 1111_{2MS} \\ -6_{10} & 1110_{2MS} \\ ... & ... \\ 6_{10} & 0110_{2MS} \\ 7_{10} & 0111_{2MS}\end{matrix}$$

Per quanto riguarda l'aritmetica con queste rappresentazioni in caso di segni discordi il calcolatore controlla prima un controllo sul modulo maggiore, e poi utilizza il segno dell'operando maggiore.

>[!bug]
>In caso il risultato dell'operazione è fuori dall'intervallo dei valori rappresentabili il segno viene cambiato, dato che l'operazione viene eseguita come una somma binaria normale. Questo fenomeno è detto overflow/underflow.

![[Recording 20230919130324.webm]]
