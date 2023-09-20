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