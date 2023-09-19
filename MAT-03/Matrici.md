> Le matrici sono tabelle di numeri reali $n$ x $m$, dove $n$ sono il numero di righe è $m$ il numero di colonne. Sono viste come una generalizzazione degli [[Vettori|n-vettori]], dove un n-vettore è visto come una matrice $1$ x $n$.

>[!example]
>$\begin{pmatrix} 2 & -1 & 0 \\ -1 & 2 & 9 \end{pmatrix}$ -> matrice $2$ x $3$
>
>$\begin{pmatrix} 2 & -1 & -1 \\ -1 & 1 & 3 \\ 1 & 1 & 1 \end{pmatrix}$ -> matrice $3$ x $3$
>
>$(1)$ -> matrice $1$ x $1$

# Notazioni

> Se $A$ è una matrice si indica con $A_{ij}$ il valore all'n-esima riga e alla j-esima colonna

Si può scrivere come:

$$A=\begin{pmatrix} a_{11} & a_{12} & ... & a_{1n} \\
a_{21} & a_{22} & ... & a_{2n} \\
... & ... & ... & ... \\
a_{m1} & a_{m2} & ... & a_{mn}
\end{pmatrix}$$

oppure come:
$$A=(a_{ij})$$

# Matrici particolari

- Matrice nulla: $0_{n,m}=\begin{pmatrix} 0 & 0 & ... & 0 \\ 0 & 0 & ... & 0 \\ ... & ... & ... & ... \\ 0 & 0 & ... & 0\end{pmatrix}$

- Matrice Identità: $I_n=\begin{pmatrix} 1 & 0 & ... & 0 \\ 0 & 1 & ... & 0 \\ ... & ... & ... & ... \\ 0 & 0 & ... & 1\end{pmatrix}$
# Operazioni

> La somma e il prodotto di uno scalare si svolge in modo del tutto analogo ai [[Vettori|vettori]].

#### Somma

>[!example]
>$\begin{pmatrix} 1 & 1 \\ 2 & 2\end{pmatrix} + \begin{pmatrix} 1 & -2 \\ 1 & -1\end{pmatrix}=\begin{pmatrix} 2 & -1 \\ 3 & 1\end{pmatrix}$

#### Prodotto di uno scalare

>[!example]
>$\frac{1}{2}\begin{pmatrix} 0 & 1 & 4 \\ -2 & 1 & 3\end{pmatrix} = \begin{pmatrix} 0 & \frac{1}{2} & 2 \\ -1 & \frac{1}{2} & \frac{3}{2}\end{pmatrix}$

Alle due operazioni precedenti si applicano le seguenti proprietà:

| Nome proprietà              | Formula                     |
| --------------------------- | --------------------------- |
| Proprietà associativa       | $(A + B) + C = A + (B + C)$ |
| Proprietà commutativa       | $A + B = B + A$             |
| Esistenza elemento neutro   | $A_{n,m}+0_{n,m}=A_{n,m}$   |
| Esistenza opposto           | $A - A = 0_{n,m}$           |
| Proprietà distributiva      | $t(A+B)=tA+tB$              |
| Proprietà associativa mista | $(ts)A=t(sA)$               |
| Legge di unità              | $1A = A$                    |
#### Prodotto di una [[#matrice conformabile]]

>Una matrice $A$, se confortabile a $B$, può definire un prodotto $C$ utilizzando la seguente formula

$$c_{ij}= \sum_{k=1}^m a_{ik}b_{kj}$$

>[!example]
>$\begin{pmatrix} 0 & 2 & -2 \\ 1 & 0 & 1\end{pmatrix}\cdot\begin{pmatrix} 1 & 1 & 1 & 1 \\ 0 & 1 & 1 & 0 \\ 3 & 3 & -1 & -3\end{pmatrix}=\begin{pmatrix}-6 & -4 & 4 & 6 \\ 4 & 4 & 0 & -2\end{pmatrix}$

>[!tip]
>Per risolvere più velocemente un prodotto di una matrice conformabile si può utilizzare il seguente schema.
>![[prodotto-tra-matrici.png]]

Per il prodotto di una matrice conformabile valgono le seguenti proprietà:

| Nome proprietà         | Formula             |
| ---------------------- | ------------------- |
| Proprietà associativa  | $A(BC)=(AB)C$       |
| Proprietà distributiva | $A(B + C)=AB+AC$    |
| Proprietà distributiva | $(A+B)C=AC+BC$      |
| -                      | $tAB=(tA)B=A(tB)$   |
| -                      | $I_nA=A$ e $AI_m=A$ | 

>[!attention]
>Non vale la proprietà commutativa.

>[!tip]- Esercizio svolto
> Calcolare $AB$ e $BA$ con:
> $$A=\begin{pmatrix}1 & 2 \\ 2 & 1\end{pmatrix}$$
> $$B=\begin{pmatrix}1 & 0 \\ 0 & -1\end{pmatrix}$$
> 
> > [!todo]- Soluzione
> > In questo caso la matrice $B$ equivale all'[[#Matrici particolari|identità]] e quindi i risultati sono entrambi uguali ad $A$
> > $$AB=\begin{pmatrix}1 & 2 \\ 2 & 1\end{pmatrix}$$
> > $$BA=\begin{pmatrix}1 & 2 \\ 2 & 1\end{pmatrix}$$

#### Potenze di [[#Matrici quadrate|matrici quadrate]]

>Una potenza di una matrice quadrata $A^n$ equivale a $\underbrace{AA...A}_n$. La potenza $A^0$ è posta all'identità, quindi $A^0=I$.

Valgono le seguenti proprietà delle potenze:
- $A^n+A^m=A^{n+m}$
- $(A^n)^m=A^{nm}$

>[!tip]- Esercizio svolto
> Data $A=\begin{pmatrix}0 & 1 \\ 1 & 0\end{pmatrix}$ calcolare $A^2,\quad A^3,\quad A^{123},\quad A^{-1},\quad A^{-72}$:
> 
> > [!todo]- Soluzione
> > $A^2=\begin{pmatrix}1 & 0 \\ 0 & 1\end{pmatrix}=I$
> > 
> > Sapendo che $A^2=I$ e $AI=A$ possiamo dire senza calcolare che le matrici con esponente pari avranno come risultato $I$, e in caso alternativo $A$.
> > 
> > $A^3=AI=A$
> > $A^123=AI^{61}=AI=A$
> > 
> > Stessa cosa vale per **tutti** gli esponenti interi.
> > 
> > $A^{-1}=A$
> > $A^{-72}=I^{36}=I$

>[!tip]- Esercizio svolto
> Data $A=\begin{pmatrix}0 & 1 & 0 \\ 0 & 0 & 1 \\ 0 & 0 & 0\end{pmatrix}$ calcolare $A^2,\quad A^3,\quad A^{123}$. Esiste $A^{-1}?$
> 
> > [!todo]- Soluzione
> > $A^2=\begin{pmatrix}0 & 0 & 1 \\ 0 & 0 & 0 \\ 0 & 0 & 0\end{pmatrix}$
> > 
> > $A^3=\begin{pmatrix}0 & 0 & 0 \\ 0 & 0 & 0 \\ 0 & 0 & 0\end{pmatrix}$
> >
> >$A^{123}=\begin{pmatrix}0 & 0 & 0 \\ 0 & 0 & 0 \\ 0 & 0 & 0\end{pmatrix}$
> >
> >In questo caso non esiste $A^{-1}$ perchè $det(A)=0$

#### Determinante di una [[#Matrici quadrate|matrice quadrata]]

Il determinante può essere rappresentato con le seguenti notazioni:

$$det\begin{pmatrix}a & b \\ c & d\end{pmatrix}=n,\quad\begin{vmatrix}a & b \\ c & d\end{vmatrix}$$
Il determinante di una matrice quadrata di ordine 1 è:
$$det(a)=a$$
Il determinante di una matrice quadrata di ordine 2 è:
$$det\begin{pmatrix}a & b \\ c & d\end{pmatrix}=ad-cb$$
Per trovare il determinante di matrici quadrate esistono due tecniche:
##### Regola di Sarrus
![[Immagine.png]]

Utilizzando lo schema di riferimento, si esegue la somma dei prodotti sulle diagonali discendenti meno la somma dei prodotti sulle diagonali ascendenti.

>[!tip]- Esercizio svolto
> Calcolare $det\begin{pmatrix}1 & 2 & -1 \\ 0 & 2 & -1 \\ 1 & 1 & 0\end{pmatrix}$:
> 
> > [!todo]- Soluzione
> > $det\begin{pmatrix}1 & 2 & -1 \\ 0 & 2 & -1 \\ 1 & 1 & 0\end{pmatrix}=\underbrace{0 + (-2) + 0}_\text{Diagonali discendenti}\underbrace{-(-2)-(-1)-0}_\text{Diagonali ascendenti}=-2+2+1=1$

>[!warning]
>
Il problema di questa tecnica è la sua difficile scalabilità computazionale, dato che per le matrici di ordine $n$ la formula del determinante è la somma di $n!$ termini.

##### Sviluppo di Laplace

>Lo sviluppo di Laplace è una formula ricorsiva che permette di calcolare il determinante di una matrice di ordine $n$ se si sa calcolare il determinante di $n-1$

Per computare la determinante si fissa una riga o colonna $i$ e utilizza la seguente formula:
$$det(A)=\sum_{j=1}^na_{ij}\cdot A_{ij}$$
>[!tip]
>Questa formula sostanzialmente ci dice di scegliere una riga/o una colonna, sommare gli elementi di quella riga/colonna tenendo conto del segno tramite metodo della scacchiera, scegliendo $a_{ij}$ come elemento eliminato e moltiplicandolo al determinante della minore ottenuta rimuovendo la colonna e riga dell'elemento scelto.

>[!tip]- Esercizio svolto
> Calcolare $det\begin{pmatrix}1 & 2 & -1 & 1 \\ 2 & 0 & 1 & 0  \\ 1 & 1 & 1 & 1 \\ 0 & 2 & 1 & 0\end{pmatrix}$:
> 
> > [!todo]- Soluzione
> > In questo caso scelgo la riga 2, è sempre bene scegliere la riga/colonna con più zeri per semplificare il calcolo.
> > 
> > $det\begin{pmatrix}1 & 2 & -1 & 1 \\ 2 & 0 & 1 & 0  \\ 1 & 1 & 1 & 1 \\ 0 & 2 & 1 & 0\end{pmatrix}=-(2)\begin{vmatrix}2 & -1 & 1 \\ 1 & 1 & 1 \\ 2 & 1 & 0\end{vmatrix}+0(...)-(1)\begin{vmatrix}1 & 2 & 1 \\ 1 & 1 & 1 \\ 0 & 2 & 0\end{vmatrix}+0(...)=$
> > 
> > Per risolvere i determinanti delle minori utilizzo la [[#Regola di Sarrus|regola di Sarrus]].
> > 
> > $=-2(-2+1-2-2)-(2-2)=10$

---

Di seguito alcune proprietà del determinante:

| Nome proprietà   | Formula                |
| ---------------- | ---------------------- |
| Normalizzazione  | $det(I)=1$             |
| Simmetria        | $det(A)=det(A^T)$      |
| Formula di Binet | $det(AB)=det(A)det(B)$ |

Da queste proprietà posso derivare certe conseguenze, tra cui:

- Se $A$ è invertibile, e quindi $det(A)\neq 0$, allora: $det(A^{-1})=\frac{1}{det(A)}$
#### Aggiunto classico di una matrice

> Data una matrice quadrata $A$, sia $C$ la matrice tale che $c_{ij}=A_{ij}$. Possiamo dire che $agg(A)=C^T$.

Si ha la seguente proprietà:
$$A\cdot agg(A)=add(A)A=(det(A))I$$
# Sottomatrici e minori

> Si chiama sottomatrice di $A$ una matrice ottenuta togliendo alcune righe e/o colonne ad $A$. Se la sottomatrice è quadrata di ordine $m$ allora la si chiama minore di ordine $m$.

La minore complementare, o cofattore, $M_{ij}$ si ottiene togliendo ad $A$ al i-esima riga e la j-esima colonna. Il complemento algebrico di $a_{ij}$ è: $A_{ij}=(-1)^{i+j}\cdot det(M_{ij})$.

>[!tip]
>Per quanto riguarda alla parte $(-1)^{i+j}$ della precedente formula, basti pensare che serve a stabilire il segno come se la matrice fosse una scacchiera, partendo dalla posizione $A_{1,1}$ con il segno $+$.
>
>>[!example]
>>$\begin{pmatrix}+ & - & + \\ - & + & - \\ + & - & +\end{pmatrix}$

>[!example]
>$A=\begin{pmatrix}2 & 1 \\ 0 & -1\end{pmatrix}$
>
>$cof(A)=\begin{pmatrix}-1 & 0\\-1 & 2\end{pmatrix}$
# Tipologie di matrici

#### [[Vettori|N-vettore]]

>[!example]
>$(1, 2, ..., n)$

#### N-vettore colonnato

>[!example]
>$\begin{pmatrix}1 \\ 2 \\ ... \\ n\end{pmatrix}$

#### Matrice conformabile

> Una matrice $B$  è conformabile a una matrice $A$ se il numero di colonne di $A$ è uguale al numero di righe di $B$.

>[!example]
>$A=\begin{pmatrix} 0 & 2 & -2 \\ 1 & 0 & 1\end{pmatrix}$
>
>$B=\begin{pmatrix} 1 & 1 & 1 & 1 \\ 0 & 1 & 1 & 0 \\ 3 & 3 & -1 & -3\end{pmatrix}$
>
>In questo caso $B$ è conformabile ad $A$, ma $A$ non è conformabile a $B$

#### Matrice trasposta

>La trasposta $B$ di una matrice $A$ è la matrice che si ottiene scambiando le righe con le colonne.

Una trasposta si può indicare con le seguenti notazioni:

$$A^T,\quad ^tA,\quad A'$$

>[!example]
>$A=\begin{pmatrix}1 & 2 & 3 \\ 4 & 5 & 6\end{pmatrix}$
>
>$A^T=\begin{pmatrix}1 & 4 \\ 2 & 5 \\ 3 & 6\end{pmatrix}$

#### Matrice simmetrica

> Una matrice è detta simmetrica se $A=A^T$.

#### Matrice antisimmetrica/emisimmetrica

> Una matrice è detta antisimmetrica, o emisimmetrica, se $A=-A^T$.

#### Matrici quadrate

> Una matrice $n$ x $n$ è detta anche matrice quadrata di ordine $n$

#### Matrici invertibili

>Una matrice quadrata $A$ si dice invertibile **se e solo se** esiste una matrice quadrata $B$ tale che $AB=BA=I$, e quindi $det(A)\neq 0$. Se una matrice $A$ è invertibile è unica e si indica con $A^{-1}$.

Se $A$ è invertibile allora si pone:
$$A^{-n}=\underbrace{A^{-1}A^{-1}...A^{-1}}_n$$

Vedi [[#Aggiunto classico di una matrice|aggiunto classico]]:
Se $det(A)\neq 0$ allora:
$$A^{-1}=\frac{1}{det(A)}\cdot agg(A)$$
>[!tip]
>Per calcolare più semplicemente l'inversa possiamo utilizzare i seguenti step:
> - Calcolo la matrice dei cofattori, cioè una matrice dove i valori di ogni elemento sono il determinante della minore complementare.
> - Calcolo la trasposta della matrice dei cofattori
> - Divido la trasposta della matrice dei cofattori per il determinante della matrice

>[!tip]- Esercizio svolto
>Sia $A=\begin{pmatrix}a & b \\ c & d\end{pmatrix}$ tale che $ad-bc\neq0$.
>Calcolare l'inversa di A.
>
> >[!todo]- Soluzione
> >Per prima cosa ci ricordiamo che $det(A)=ad-bc$ nelle matrici quadrate di secondo ordine, quindi sappiamo che l'inverso è calcolabile
> >
> >$cof(A)=\begin{pmatrix}d & -c \\ -b & a\end{pmatrix}$
> >
> >$A^{-1}=\frac{1}{ad-bc}\cdot\begin{pmatrix}d & -c \\ -b & a\end{pmatrix}$

>[!tip]- Esercizio svolto
>Data una matrice $A$ di ordine $n$, dimostrare che se esiste una matrice quadrata $B$ di ordine $n$ tale che $BA=I$, allora $A$ è invertibile e $B=A^{-1}$.
>
> >[!todo]- Soluzione
> > Sappiamo che $A^{-1}=\frac{1}{det(A)}\cdot agg(A)$, moltiplichiamo per $A$:
> > 
> > $AA^{-1}=A\frac{1}{det(A)}\cdot agg(A)$ -> $AA^{-1}=\frac{1}{det(A)}\cdot Aagg(A)$
> > 
> > Sappiamo che $A\cdot agg(A)=det(A)I$, e quindi:
> > 
> > $AA^{-1}=\frac{1}{det(A)}det(A)I$ ->$AA^{-1}=1I$, e per il principio di identità $1I=I$, quindi $AA^{-1}=I$.
 
>[!tip]- Esercizio svolto
>Verificare se la matrice $A=\begin{pmatrix}1 & 0 & 1 \\ 1 & 1 & 1 \\ 1 & 1 & 0\end{pmatrix}$ è invertibile, e in tal caso calcolare l'inversa.
>
> >[!todo]- Soluzione
> >Per prima cosa dobbiamo verificare che $det(A)\neq 0$, usiamo la [[#Regola di Sarrus|regola di Sarrus]].
> >
> >$det(A)=1-1-1=-1$, quindi $A$ è invertibile.
> >
> >Calcoliamo la matrice dei cofattori:
> >
> >$C=\begin{pmatrix}-1 &1 & 0 \\ 1 & -1 & -1 \\ -1 & 0 & 1\end{pmatrix}$
> >
> >$C^T=\begin{pmatrix} -1 & 1 & -1 \\ 1 & -1 & 0 \\ 0 & -1 & 1\end{pmatrix}$
> >
> >$A^{-1}=-1\cdot\begin{pmatrix} -1 & 1 & -1 \\ 1 & -1 & 0 \\ 0 & -1 & 1\end{pmatrix}=\begin{pmatrix}1 & -1 & 1 \\ -1 & 1 & 0 \\ 0 & 1 & -1\end{pmatrix}$

#### Matrice a blocchi

> Una matrice a blocchi $A=\begin{pmatrix}A_1 & 0 \\ 0 & A_2\end{pmatrix}$ è detta tale perché $A_1$ e $A_2$ sono talvolta delle matrici quadrati.

In queste matrici il determinante di $A$ è uguale al prodotto di suoi blocchi

$$det(A)=det(A_1)det(A_2)$$
mentre la sua inversa è uguale alla matrice uguale avente come blocchi l'inverso dei blocchi di $A$.

>[!tip]- Esercizio svolto
>Verificare se la matrice $A=\begin{pmatrix}1 & 1 & 0 & 0 \\ 1 & 0 & 0 & 0 \\ 0 & 0 & 0 & 1 \\ 0 & 0 & 2 & 1\end{pmatrix}$ è invertibile, e in tal caso calcolare l'inversa.
>
> >[!todo]- Soluzione
> >Per prima cosa definiamo i blocchi:
> >
> >$A=\begin{pmatrix}A_1 & 0 \\ 0 & A_2\end{pmatrix}$
> >
> >$A_1=\begin{pmatrix}1 & 1 \\ 1 & 0\end{pmatrix}$
> >
> >$A_2=\begin{pmatrix}0 & 1 \\ 2 & 1\end{pmatrix}$
> >
> >Calcoliamo i determinanti:
> >
> >$det(A_1)=-1$
> >
> >$det(A_2)=-2$
> >
> >Calcoliamo le matrici dei cofattori:
> >
> >$C_1=\begin{pmatrix}0 & -1  \\ -1 & 1\end{pmatrix}$
> >
> >$C_2=\begin{pmatrix}1 & -2 \\ -1 & 0\end{pmatrix}$
> >
> >Calcoliamo le trasposte:
> >$C_1^T=\begin{pmatrix}0 & -1\\ -1 & 1\end{pmatrix}$
> >
> >$C_2^T=\begin{pmatrix}1 & -1 \\ -2 & 0\end{pmatrix}$
> >Calcoliamo le inverse:
> >
> >$A_1^{-1}=\begin{pmatrix}0 & 1\\1 & -1\end{pmatrix}$
> >
> >$A_2^{-1}=\begin{pmatrix}-\frac{1}{2} & \frac{1}{2}\\1 & 0\end{pmatrix}$
> >
> >Infine componiamo la nuova matrice:
> >
> >$A^{-1}=\begin{pmatrix}0 & 1 & 0 & 0\\1 & -1 & 0 & 0\\0 & 0 &-\frac{1}{2} & \frac{1}{2}\\ 0 & 0 & 1 & 0\end{pmatrix}$

>[!tip]- Esercizio svolto
>Verificare se la matrice $A=\begin{pmatrix}
1 & 1 & 0 & 0 & 0 \\
1 & 0 & 0 & 0 & 0 \\
0 & 0 & 4 & 0 & 0 \\
0 & 0 & 0 & 0 & 1 \\
0 & 0 & 0 & 2 & 1
>\end{pmatrix}$ è invertibile e in tal caso calcolare l'inversa.
>>[!todo]- Soluzione
>>Dividiamo la matrice in 2 blocchi $A_1$ e $A_2$:
>>$A=\begin{pmatrix}
A_1 & 0 \\
0 & A_2
>>\end{pmatrix}$
>>
>>$A_1=\begin{pmatrix}
1 & 1 & 0 \\
1 & 0 & 0 \\
0 & 0 & 4
>>\end{pmatrix}$
>>
>>$A_2=\begin{pmatrix}
0 & 1 \\
2 & 1
>>\end{pmatrix}$
>>
>>Calcoliamo le matrici inverse:
>>
>>$det(A_1)=-4$
>>
>>$det(A_2)=-2$
>>
>>$C_1=\begin{pmatrix}
0 & -4 & 0 \\
-4 & 4 & 0 \\
0 & 0 & -1
>>\end{pmatrix}$
>>
>>$C_2=\begin{pmatrix}
1 & -2 \\
-1 & 0
>>\end{pmatrix}$
>>
>>$C_1^T=\begin{pmatrix}0 & -4 & 0 \\-4 & 4 & 0 \\0 & 0 & -1 \end{pmatrix}$
>>
>>$C_2^T=\begin{pmatrix}1 & -1 \\-2 & 0\end{pmatrix}$
>>
>>$A_1^{-1}=\begin{pmatrix}0 & 1 & 0 \\1 & -1 & 0 \\0 & 0 & \frac{1}{4}\end{pmatrix}$
>>
>>$A_2^{-1}=\begin{pmatrix}-\frac{1}{2} & \frac{1}{2} \\1 & 0\end{pmatrix}$
>>
>>$A^{-1}=\begin{pmatrix}0 & 1 & 0 & 0 & 0 \\1 & -1 & 0 & 0 & 0 \\0 & 0 & \frac{1}{4} & 0 & 0 \\0 & 0 & 0 & -\frac{1}{2} & \frac{1}{2} \\0 & 0 & 0 & 1 & 0\end{pmatrix}$