### Successioni

1) Stabilire se la successione $x_n=1+(-1)^n$ è di cauchy.
$|x_n-x_m|=|1+(-1)^n-1-(-1)^{m}|=\begin{cases}0&\text{se n,m entrambi pari o dispari}\\2&\text{se uno dei due e pari e l'altro dispari}\end{cases}$
=> $\nexists N(\epsilon) |\qquad n,m\geq N(\epsilon)\Rightarrow|x_n-x_m|<\epsilon$

La successione non è di cauchy.

2) Quale/i è/sono relazioni di equivalenza in $\mathbb{Z}$?

a. $n\triangle m$ <=> $n-m$ divisibile per 2
b. $n\square m$ <=> $n-m > 4$

a) $n\triangle m$ ?

$n-m=0$ divisibile per 2

La relazione è riflessiva

Sia $n\triangle m$; allora (per definizione) $n-m$ è divisibile per 2 => $m-n$ è divisibile per per 2 =>$m\triangle n$

La relazione è simmetrica

Sia $n\triangle m$ e $m\triangle p$ 

$m-n$ è divisibile per 2, $m-p$ è divisibile per due, allora $m-p=n-m+m-p$ è divisibile per 2 (è una somma di 2 numeri divisibili per 2) => $m\triangle p$ La relazione è transitiva.

$\triangle$ è una relazione di equivalenza.

b) $n\square m$ ? Non è vera perchè
$n-m=0$ e non $n-m>4$.

$\square$ non è riflessiva => non è una relazione di equivalenza

Per curiosita:
$n\square m$ => $n-m>4$ => $m-n=-(n-m)<-4$ e allora $m-n>4$ allora $\square$ non è simmetrica

$n\square m$ e $m\square n$ =>
$n-m>4$ e $m-p>4$
$n-p=n-m+m-p>4+4=8>4$ => $m\square n$

La rel. $\square$ è transitiva.

3) Verificare alla def: 
$$\lim_{m\to+\infty} \frac{m+1}{2m}= \frac{1}{2}$$
Dobbiamo verificare che:
$\forall\epsilon>0\qquad\exists m_{0:\quad}n\geq m_0$ =>$|\frac{n+1}{2m}- \frac{1}{2}|<\epsilon$

Equivalmentemente:
![[rM drawing 2023-09-26-14.49.55.png]]


Quindi studiamo queste disequazioni
Moltiplichiamo per $2m>0$
$$m-2m\epsilon<m+1<m+2m\epsilon$$$$-2m\epsilon<1<2m\epsilon$$

Soddisfatta $\forall m, \forall\epsilon>0$

$2m\epsilon>1$
$m> \frac{1}{2\epsilon}$

Quindi $\forall n > \frac{1}{2\epsilon}$ vale le precedenti disequazioni.

Esiste comunque sia un "più piccolo" intero $m_{0}> \frac{1}{2\epsilon}$; allora avremo
$n\geq m_0$ => $|\frac{n+1}{2m}- \frac{1}{2}|<\epsilon$

Limite verificato.

4) $$\lim_{m\to+\infty}(1-n^3)=-\infty$$Dobbiamo verificare che:
$\forall M\quad\exists m_{0}: n\geq m_0$ => $1-m^3<M$

$1-m^3<M$

$m^3>1-M$

$m>\sqrt[3]{1-M}$

Esisterà $m_0\in\mathbb{N}, m_0>\sqrt[3]{1-M}$

$n\geq m_0$ => $1-m^3<M$

5) Sia $x_m$ la successione in $\mathbb{Q}$ tale che $x_0=2$, $x_{n+1}= \frac{x_{n}}{2}+ \frac{1}{x_{n}}\quad\forall n\geq0$
(Esempio di successione definita per ricorrenza)

a) mostrare che $x_n>0\quad\forall n\geq0$

$x_0=2>0$
Sia $x_n>0$

$x_{n+1}= \frac{x_{n}}{2}+ \frac{1}{x_{n}}>0$

Segue per induzione: $x_n>0\quad\forall n\geq 0$

b) Mostrare che $x_n^2\geq2\quad\forall n\geq0$

![[rM drawing 2023-09-26-15.12.58.png]]
