### Sommatorie, produttorie, induzioni

1) somma dei primi n interi dispari
$$D_{m}:=\sum\limits_{k=1}^n(2k-1)=n^2$$
$$D_m=1+3+..+(2n-1)$$

dim. per induzione

$$D_1=\sum\limits_{k=1}^{1}(2k-1)=1=1^2$$
Uguaglianza vera

Sia $D_n=n^2$ per $n\geq1$

$$D_{n+1}=\sum\limits_{k=1}^{n+1}(2k-1)=\sum\limits_{k=1}^{n}(2k-1)+2(n+1)-1=$$
$$D_n+2n+2-1=n^2+2n+1=(n+1^2)$$

Da $d_n=n^2$ segue $d_{n+1}= (n+1)^2$
Per induzione: $D_{n}=n^{2}\qquad\forall n\geq1$

Da dove viene l'idea $D_{n}=n^2$?
Pensiamo che ogni numero intero è ottenuto quadrati di L=1

![[rM drawing 2023-09-21-08.39.45.png]]
L'area del quadrato di lato 3 =>$3^2=9$

2) Somma dei primi n interi pari

$$D_{n}:=\sum\limits_{k=1}^{n}2k=n(n+1)$$
dim.
a) per induzione (compito)
b) $\sum\limits_{k=1}^{n}2k=\sum\limits_{k=1}^n(2k-1+1)=\sum\limits_{k+1}^{n}(2k-1)+\sum\limits_{k+1}^{n}1=n^2+n=n(n+1)$
c) somma dei primi n interi positivi
$$I_n=\sum\limits_{k=1}^{n}k=\frac{n(n+1)}{2}$$
dim. senza induzione

$$$\sum\limits_{k=1}^{n}k=\sum\limits_{k=1}^{n} \frac{2k}{2}= \frac{1}{2}\sum\limits_{k=1}^{n}2k= \frac{n(n+1)}{2}$$
3) Fattoriale di un $n\geq 0\qquad 0!:=1$

per $n\geq 1$$$n!:=\prod\limits_{k=1}^{n}k=n(n-1)\cdot ..\cdot2\cdot1$$
4) Dimostrare che $2^{n-1}\leq n!\qquad\forall n\geq0$
Se n equivale q: $q_{n}=\frac{2^{n-1}}{n!}\leq1\qquad\forall n\geq0$

$$q_0=\frac{2^{-1}}{1}=\frac{1}{2}<1$$
per $n\geq1$:
$$q_n=\frac{2^{-1}\cdot2^{n}}n!=\frac{1}{2}\frac{2^{n}}{n!}=\frac{1}{2}$$

![[rM drawing 2023-09-21-09.02.03.png]]

6) Verificare le seguenti proprietà

a) $\begin{pmatrix}n\\0\end{pmatrix}=\begin{pmatrix}n\\n\end{pmatrix}=1\qquad \frac{n!}{n1\cdot1}=1$
b)$\begin{pmatrix}n\\k\end{pmatrix}$
c)$\begin{pmatrix}n\\ k\end{pmatrix}=\begin{pmatrix}n\\n-k\end{pmatrix}$
d)$\begin{pmatrix}n\\k\end{pmatrix}=\begin{pmatrix}n-11\\n-1\end{pmatrix}+\begin{pmatrix}n+1\\k\end{pmatrix}$
![[rM drawing 2023-09-21-09.06.29.png]]
$$=\frac{(n-1)!}{(n-k)(n-k-1)!(k-1)!}+\frac{(n-1)!}{(n-k-1)!k(k-1)!}$$
$$=\frac{(n-1)!k+(n-1)!(n-k)}{(n-k)!k!}=(n-1)!\frac{n}{(n-k)!k!}=\frac{n}{(n-k)!k!}$$


###### Triangolo di Tartaglia (tabella dei coefficienti binomiali)


![[rM drawing 2023-09-21-09.15.54.png]]
7) Dimostrare il seguente teorema (formula del binomio di newton)

$$\forall a,b\in\mathbb{Q}\quad\forall n\geq1$$ $$(a+b)^2=\sum\limits_{k=0}^{n}\begin{pmatrix}n\\k\end{pmatrix}a^kb^{n-k}=\begin{pmatrix}n\\k\end{pmatrix}a^{n-k}b^{n}$$

dim: sia $p(n): (a+b)^n=\begin{pmatrix}n\\k\end{pmatrix}a^kb^{n-k}$

$(a+b)^1=a+b=\begin{pmatrix}1\\0\end{pmatrix}a^0b^{1}$

P(1) è vera

Dobbiamo verificare che da p(n) segue:
$$P(n+1)=(a+b)^{n+1}=\sum\limits_{k=0}^{n+1}\begin{pmatrix}n+1\\k\end{pmatrix}a^kb^{n+1-k}$$
Sia vero p(n)

$$(a+b)^{n+1}=(a+b)(a+b)^{n}=(a+b)\sum\limits_{k=0}^{n}\begin{pmatrix}n\\k\end{pmatrix}a^kb^{n-k}=$
$$$$(a\sum\limits_{k=0}^{n}\begin{pmatrix}n\\k\end{pmatrix}a^kb^{n-k})+(b\sum\limits_{k=0}^{n}\begin{pmatrix}n\\k\end{pmatrix}a^kb^{n-k})=$$
$$=(\sum\limits_{k=0}^{n}\begin{pmatrix}n\\k\end{pmatrix}a^{k+1}b^{n-k})+(\sum\limits_{k=0}^{n}\begin{pmatrix}n\\k\end{pmatrix}a^kb^{n+1-k})$$
$$=(\sum\limits_{i=1}^{n}\begin{pmatrix}n\\i-1\end{pmatrix}a^ib^{n+1-i})+(\sum\limits_{i=0}^{n}\begin{pmatrix}n\\i\end{pmatrix}a^ib^{n+1-i})$$
$$=(\sum\limits_{i=1}^{n}\begin{pmatrix}n\\i-1\end{pmatrix}a^ib^{n+1-i})+\begin{pmatrix}n\\n\end{pmatrix}a^{n+1}+\begin{pmatrix}n\\0\end{pmatrix}b^{n+1}+(\sum\limits_{i=1}^{n}\begin{pmatrix}n\\i\end{pmatrix}a^ib^{n+1-i}=$$
$$\begin{pmatrix}n\\0\end{pmatrix}b^{n+1}+\begin{pmatrix}n\\n\end{pmatrix}a^{n+1}+\sum\limits_{i=1}^{n}[\begin{pmatrix}n\\i-1\end{pmatrix}+\begin{pmatrix}n\\i\end{pmatrix}]a^ib^{n+1-i}=$$
$$b^{n+1}+a^{n+1}+\sum\limits_{i=1}^{n}\begin{pmatrix}n+1\\i\end{pmatrix}a^ib^{n+1-i}=$$
$$\begin{pmatrix}n+1\\0\end{pmatrix}a^0b^{n+1}+\sum\limits_{i=1}^{n}\begin{pmatrix}n+1\\i\end{pmatrix}a^ib^{n+1-i}+\begin{pmatrix}n+1\\n-1\end{pmatrix}a^{n+1}b^0=$$
![[rM drawing 2023-09-21-09.47.28.png]]
Abbiamo dimostrato che p(n) => p(n+1), per induzione si ha tesi $\forall n\geq 1$

Nota, vale anche per n=0 ($a\neq b$)
$$(a+b)^0=1=\sum\limits_{k=0}^{0}\begin{pmatrix}0\\k\end{pmatrix}a^kb^{0-k}$$

---

8) nello sviluppo di $(2\sqrt{x}- \frac{3}{x})^7$, esistono i termini $x^3$ e $\sqrt{x}$, se si calcolarne i coefficienti. 

$$\sum\limits_{k=0}^{7}\begin{pmatrix}7\\k\end{pmatrix}(2\sqrt x)^{7-k}(-\frac{3}{x})^k=\sum\limits_{k=0}^7\begin{pmatrix}7\\k\end{pmatrix}2^{7-k}(-3)^kx^{\frac{7-k}{2}}x^{-k}=$$
$$\sum\limits_{k=0}^{7}\begin{pmatrix}7\\k\end{pmatrix}x^{7-k}(-3)^kx^{\frac{7-3k}{2}}$$

$\exists x^{3}$ equivale a dire che $\exists k, 0\leq k\leq7:$
$\frac{7-3k}{2}= 3$ => $k=\frac{1}{3}$ non è intero

$\nexists x^{3}$ nello sviluppo

Esiste una potenza $x^{\frac{1}{2}}$ nello sviluppo per k=2, con coefficiente

$$\begin{pmatrix}7\\2\end{pmatrix}2^5(-3)^2=21\cdot2^5\cdot9=6048$$

Quindi a un certo punto nello sviluppo compare il termine: $6048\sqrt x$

9) stabilire che sono di Cauchie le 2 successioni in Q:

a) $x_{n}=1+ \frac{1}{n^{2}}$
b) $y_{n}=1+(-1)^2$

a) $|x_n-x_{m}|=\frac{|1+1}{n^{2}}-1- \frac{1}{n^{2}}$=

![[rM drawing 2023-09-21-10.09.09.png]]

Riassumendo:

- scegliamo $N(\epsilon)=\sqrt {\frac{2}{\epsilon}}$, Allora
![[rM drawing 2023-09-21-10.11.36.png]]