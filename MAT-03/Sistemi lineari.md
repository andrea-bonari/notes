> Si consideri il sistema di $m$ equazioni e $n$ incognite è equivalente all'equazione $AX=b$, dove $A$ è la [[Matrici|matrice dei coefficienti]], $b$ è il [[Vettori|vettore]] dei termini noti e $X$ è il vettore delle incognite


Esempio di matrice dei coefficenti
$$A=\begin{cases}a_{11}x_1+a_{12}x_2+...+a_{1n}x_{n}& = & b_1 \\
a_{21}x_1+a_{22}x_2+...+a_{2n}x_n&=&b_2 \\
...  && ... \\
a_{m1}x_1+a_{m2}x_2+...+a_{mn}x_n&=&b_m\end{cases}$$
Vettore dei termini noti:
$$b=\begin{pmatrix}
b_1 \\
b_2 \\
... \\
b_n
\end{pmatrix}$$
Vettore delle incognite:
$$X=\begin{pmatrix}x_{1} \\ x_{2} \\ ... \\ x_{3}\end{pmatrix}$$
>[!example]
>$\begin{cases}2x_1+2x_2+3x_3=1 \\
>-x_1+x_2-6x_3=-2\end{cases}$
>
>$A=\begin{pmatrix}
2 & 2 & 3 \\
1 & 1 & -6
>\end{pmatrix}$
>
>$b=\begin{pmatrix}
1 \\
-2
>\end{pmatrix}$
>
>$X=\begin{pmatrix}
x_1 \\
x_2 \\
x_3
>\end{pmatrix}$
>
>$AX=b$ -> $\begin{pmatrix}
2 & 2 & 3 \\
1 & 1 & -6
>\end{pmatrix}\begin{pmatrix}
x_1 \\
x_2 \\
x_3
>\end{pmatrix}=\begin{pmatrix}
1 \\
-2
>\end{pmatrix}$
>
>La matrice completa del sistema $AX=b$ è la matrice $(A,b)$

La matrice completa del sistema $AX=b$ è la matrice $(A,b)$.

>[!example]
>La matrice completa di $\begin{cases}2x+y=1\\x-y=-1\end{cases}$ è:
>$$\begin{pmatrix}
2 & 1 & 1 \\
1 & -1 & -1
\end{pmatrix}$$

## Sistemi omogenei

>Un sistema $AX=b$ si dice omogeneo se $$b=\overrightarrow{0}$$

Caratteristiche:

Se $x_1$,$x_2$ sono soluzioni di un sistema omogeneo allora anche $x_1+x_2$ lo è.
Se $x$ è soluzione di un sistema omogeneo allora anche $tx$ lo è.

>[!note] Dimostrazione
>$X$ soluzione di $AX=\overrightarrow{0}$
>
>Se $t\in\mathbb{R}\qquad A(tX)=t(AX)=t\overrightarrow{0}=\overrightarrow{0}$ => $tX$ è una soluzione 

>[!note] Dimostrazione
>$x_{1}$,$x_2$ soluzioni di $AX=\overrightarrow{0}$
>
>$A(x_1+x_2)=Ax_1+Ax_2=\overrightarrow{0}+\overrightarrow{0}=\overrightarrow{0}$ => $x_1+x_2$ è una soluzione.

#### Particolare

> Dato un sistema $AX=b$ l'insieme dei vettori colonna $v$ che risolvono un sistema si indicano con il simbolo $sol(A,b)$.

Data una soluzione $X_\text{part}$ a scelta di $AX=b$, tutte le soluzioni del sistema del sistema sono date da $X_\text{part}+Y$ al variare di $Y$ in $sol(A,\overrightarrow{o})$ 
$$sol(A,b)=X_\text{part}+sol(A,\overrightarrow{0})$$

>[!note] Dimostrazione
>
>$X\in sol(A,b)\qquad X=(X-X_{\text{part}})+X_{\text{part}}=X_\text{part}+(X-X_\text{part})$
>
>$A(X-X_\text{part})=AX-AX_\text{part}=\overrightarrow{b}-\overrightarrow{b}=\overrightarrow{0}$

>[!note] Dimostrazione
>
>$X\in X_\text{part}+sol(A,\overrightarrow{0})$
>
>$X=X_\text{part}+Y$ con $Y\in sol(A,\overrightarrow{0})$
>
>$AX=A(X_\text{part}+Y)=AX_\text{part}+AY= b + \overrightarrow{0}=b$


>[!tip]- Esercizio svolto
>Risolvere il sistema lineare $$\begin{cases}x+y+z=1 \\ 2x+3z=2\\x-y+2z=1\end{cases}$$
>
>>[!todo]- Soluzione
>>
>>Col metodo della sottrazione rimuovo dalla seconda riga la prima due volte, e dalla terza la prima una volta
>>
>>$\begin{cases}x+y+z=1\\-2y+z=0\\-2y+z=0\end{cases}\stackrel{II-2I}{\sim}$
>>
>>Sottraggo dalla terza riga la seconda riga
>>
>>$\begin{cases}x+y+z=1\\-2y+z=\\0=0\end{cases}\stackrel{III-I}{\sim}$
>>
>>$\begin{cases}x+y+z=1\\y=\frac{1}{2}z\end{cases}=$
>>
>>$\begin{cases}x=1-\frac{1}{2}z-z\\y=\frac{1}{2}z\end{cases}=$
>>
>>Quindi le soluzioni sono
>>
>>$\begin{pmatrix}x\\y\\z\end{pmatrix}=\begin{pmatrix}1-\frac{3}{2}z\\-\frac{1}{2}z\\z\end{pmatrix}$
>>
>>$\underbracket{\begin{pmatrix}1\\0\\0\end{pmatrix}}_{X_\text{part}}+\underbracket{\begin{pmatrix}-\frac{3}{2}z\\ \frac{1}{2}z\\ z\end{pmatrix}}_{sol(A,\overrightarrow{0})}$

## Eliminazione e matrice completa

>Per risolvere la matrice più velocemente il sistema si possono utilizzare delle operazioni tra righe della matrice completa, queste sono dette operazioni elementari di riga.

Le operazioni elementari sulle righe sono:
- Scambiare 2 righe di posto.
- Moltiplicare una riga per un numero diverso da 0.
- Sommare ad una riga un multiplo di un altra.

La notazione per esprimere una operazione elementare si esprime in tale modo:
$$A\stackrel{operazione}{\sim} B$$
Questo è detto metodo di eliminazione di Gauss-Jordan, e riduce la matrice del sistema a una forma particolare detta a gradini.

### Matrice a gradini

> È una matrice particolare dove il primo elemento non nullo di una riga, detto pivot, in una colonna successiva rispetto a quello delle righe precedenti tutte le righe. Quindi se una riga è nulla tutte le righe devono essere nulle.

>[!example]
>Un esempio di matrici a gradini:
>$\begin{pmatrix}
1 & 0 & 2 & -1 \\
0 & 0 & 1 & 1 \\
0 & 0 & 0 & -1
>\end{pmatrix}\qquad\begin{pmatrix}
0 & -2 & 0 \\
0 & 0 & 1 \\
0 & 0 & 0 \\
0 & 0 & 0
>\end{pmatrix}\qquad\begin{pmatrix}
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0
>\end{pmatrix}$
>
>Un esempio di matrici non a gradini:
>$\begin{pmatrix}
1 & 0 & 2 & 1 \\
1 & 0 & 0 & 0 \\
0 & 0 & 0 & -1
>\end{pmatrix}\qquad\begin{pmatrix}
0 & 2 & 1 \\
0 & 0 & 1 \\
0 & 0 & -1 \\
0 & 0 & 0
>\end{pmatrix}\qquad\begin{pmatrix}
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 1
\end{pmatrix}$

>[!tip]- Esercizio svolto
>Riduciamo a gradini
>$$\begin{pmatrix}
1 & 1 & 2 & 2 \\
2 & 0 & 4 & 2 \\
1 & -1 & 2 & 0 \\
0 & 2 & 0 & 2
\end{pmatrix}\quad\text{e}\quad\begin{pmatrix}
0 & 2 & 1 & 0 & 1 \\
0 & 3 & -1 & 1 & 1 \\
1 & 1 & -2 & 1 & 0 \\
1 & -1 & -3 & 1 & -1
>\end{pmatrix}$$
>>[!todo]- Soluzione
>>1: 
>>$\begin{pmatrix}
1 & 1 & 2 & 2 \\
2 & 0 & 4 & 2 \\
1 & -1 & 2 & 0 \\
0 & 2 & 0 & 2
\end{pmatrix} \sim\begin{pmatrix}
1 & 1 & 2 & 2 \\
0 & -2 & 0 & -2 \\
0 & -2 & 0 & -2 \\
0 & 2 & 0 & 2
\end{pmatrix}\sim\begin{pmatrix}
1 & 1 & 2 & 2 \\
0 & -2 & 0 & -2 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0
>>\end{pmatrix}$
>>
>>$\begin{cases}x+y+2w=2\\-2y=-2\end{cases}=\begin{cases}x=1-2w\\y=1\end{cases}$
>>
>>$x$, $y$ vincolate, $z$ libera
>>
>>$\begin{pmatrix}x\\y\end{pmatrix}=\begin{pmatrix}1\\1\end{pmatrix}+w\begin{pmatrix}-2\\0\end{pmatrix}$
>>
>>2: $\begin{pmatrix}
0 & 2 & 1 & 0 & 1 \\
0 & 3 & -1 & 1 & 1 \\
1 & 1 & -2 & 1 & 0 \\
1 & -1 & -3 & 1 & -1
\end{pmatrix}\sim\begin{pmatrix}
1 & 1 & -2 & 1 & 0 \\
0 & 3 & -1 & 1 & 1 \\
0 & 2 & 1 & 0 & 1 \\
1 & -1 & -3 & 1 & -1
\end{pmatrix}\sim\begin{pmatrix}
1 & 1 & -2 & 1 & 0 \\
0 & 3 & -1 & 1 & 1 \\
0 & 2 & 1 & 0 & 1 \\
0 & -2 & -1 & 0 & -1
>>\end{pmatrix}$
>>$\begin{pmatrix}
1 & 1 & -2 & 1 & 0 \\
0 & 3 & -1 & 1 & 1 \\
0 & 0 & 5 & -2 & 1 \\
0 & 0 & -5 & 2 & -1
>>\end{pmatrix}\sim\begin{pmatrix}
1 & 1 & -2 & 1 & 0 \\
0 & 3 & -1 & 1 & 1 \\
0 & 0 & 5 & -2 & 1 \\
0 & 0 & 0 & 0 & 0
>>\end{pmatrix}$
>>
>>$$\begin{cases}
>>2y+z=1 \\
>>3y-z+w=1\\
>>x+y-2z+w=0\\
>>x-y-3z+w=1\end{cases}=\begin{cases}x+y-2z+w=0\\3y-z+w=1\\5z-2w=0\end{cases}=\begin{cases}x=0\\y= \frac{1}{3}(1+z-w)= \frac{2}{5} - \frac{1}{5}w \\ z= \frac{1+2w}{5}=\frac{1}{5}-\frac{2}{5}w\end{cases}$$
>>
>>Soluzioni:
>>
>>$$\begin{pmatrix}x\\y\\z\\w\end{pmatrix}=\begin{pmatrix}0\\ \frac{2}{5}- \frac{1}{5}w\\ \frac{1}{5}+ \frac{2}{5}w\\w\end{pmatrix}=\begin{pmatrix}0\\ \frac{2}{5}\\ \frac{1}{5}\\ 0\end{pmatrix}+\begin{pmatrix}0\\ - \frac{1}{5}\\ \frac{2}{5}\\1\end{pmatrix}w$$

Un sistema è detto a gradini se la sua matrice completa lo è, e ogni sistema è equivalente a un sistema a gradini.
Le variabili che corrispondono ai pivot sono dette vincolate, mentre le altre sono dette libere.

Se l'ultimo pivot è posizionato nell'ultima colonna il sistema non ha soluzione.

>[!tip]- Esercizio svolto
>Risolvere i sistemi
>
>$$\begin{cases}x+y-z=1\\x-y+z=1\\-x+y+z=1\end{cases}\qquad\begin{cases}x+y+z=1\\x-y+z=1\\x+y=1\end{cases}\qquad\begin{cases}x+y+z=1\\x-y+z=1\\x+z=0\end{cases}$$
>
>>[!todo]- Soluzione
>>
>>1:
>>
>>$\begin{pmatrix}
1 & 1 & -1 & 1 \\
1 & -1 & 1 & 1 \\
-1 & 1 & 1 & 1
\end{pmatrix}\sim\begin{pmatrix}
1 & 1 & -1 & 1 \\
0 & -2 & 2 & 0 \\
0 & 2 & 0 & 2
\end{pmatrix}\sim\begin{pmatrix}
1 & 1 & -1 & 1 \\
0 & -2 & 2 & 0 \\
0 & 0 & 2 & 2
>>\end{pmatrix}$
>>
>>$\begin{cases}x+y-z=1\\-2y+2z=0\\2z=2\end{cases}=\begin{cases}x=1-y+z=1\\y=z=1\\z=1\end{cases}$
>>
>>$x$, $y$, $z$ vincolate
>>
>>Soluzioni:
>>
>>$$\begin{pmatrix}x\\y\\z\end{pmatrix}=\begin{pmatrix}1\\1\\1\end{pmatrix}$$
>>
>>2:
>>
>>$\begin{pmatrix}
1 & 1 & 1 & 1 \\
1 & -1 & 1 & 1 \\
1 & 0 & 1 & 1
\end{pmatrix}\sim\begin{pmatrix}
1 & 1 & 1 & 1 \\
0 & -2 & 0 & 0 \\
0 & 1 & 0 & 0
\end{pmatrix}\sim\begin{pmatrix}
1 & 1 & 1 & 1 \\
0 & -2 & 0 & 0 \\
0 & 0 & 0 & 0
>>\end{pmatrix}$
>>
>>$x$, $y$ vincolate mentre $z$ libera
>>
>>$\begin{cases}x+y+z=1\\-2y=0\end{cases}=\begin{cases}x=1-z\\y=0\end{cases}$
>>
>>Soluzioni:
>>
>>$$\begin{pmatrix}x\\y\\z\end{pmatrix}=\begin{pmatrix}1-z\\0\\z\end{pmatrix}=\begin{pmatrix}1\\0\\0\end{pmatrix}+z\begin{pmatrix}-1\\0\\1\end{pmatrix}$$
>>
>>3:
>>
>>$\begin{pmatrix}
1 & 1 & 1 & 1 \\
1 & -1 & 1 & 1 \\
1 & 0 & 1 & 0
\end{pmatrix}\sim\begin{pmatrix}
1 & 1 & 1 & 1 \\
0 & -2 & 0 & 0 \\
0 & -1 & 0 & -1
\end{pmatrix}\sim\begin{pmatrix}
1 & 1 & 1 & 1 \\
0 & -2 & 0 & 0 \\
0 & 0 & 0 & -2
>>\end{pmatrix}$
>>
>>$\begin{cases}x+y+z=1\\-2y=0\\0=-2\end{cases}\qquad \text{nessuna soluzione}$

Se scambiamo due righe il determinante cambia di segno, mentre se applichiamo la terza operazione elementare di una riga ad una matrice allora il suo determinante non cambia. Sapendo questo possiamo usare la riduzione a gradini per calcolare il determinante.

>[!tip]- Esercizio svolto
>Calcolare $$det\begin{pmatrix}
1 & 2 & -1 & 1 \\
2 & 0 & 1 & 0 \\
1 & 1 & 1 & 1 \\
0 & 2 & 1 & 0
>\end{pmatrix}$$
>
>>[!todo]- Soluzione
>>
>>$\begin{pmatrix}
1 & 2 & -1 & 1 \\
0 & -4 & 3 & -2 \\
0 & -1 & 2 & 0 \\
0 & 2 & 1 & 0
>>\end{pmatrix}\sim\begin{pmatrix}
1 & 2 & -1 & 1 \\
0 & -4 & 3 & -2 \\
0 & 0 & \frac{5}{4} & \frac{1}{2} \\
0 & 2 & 1 & 0
\end{pmatrix}\sim\begin{pmatrix}
1 & 2 & -1 & 1 \\
0 & -4 & 3 & -2 \\
0 & 0 & \frac{5}{4} & \frac{1}{2} \\
0 & 0 & 0 & -2
\end{pmatrix}$
>>
>>$det\begin{pmatrix}
1 & 2 & -1 & 1 \\
0 & -4 & 3 & -2 \\
0 & 0 & \frac{5}{4} & \frac{1}{2} \\
0 & 0 & 0 & -2
\end{pmatrix}=1\cdot(-4)\cdot\frac{5}{4}\cdot(-2)=10$

