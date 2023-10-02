1) Calcolare i limiti delle seguenti successioni ($n\to+\infty$)

a. $a_{n}=1-n^{3}+ \frac{1}{n}$

$$\lim_{n\to+\infty}a_{n}=\lim_{n\to+\infty}1+\lim_{n\to+\infty}-n^{3}+\lim_{n\to+\infty} \frac{1}{n}=1+(-\infty)+0=-\infty$$

b. $a_{n}=n-n^{3}+ \frac{1}{n}$

Se "facciamo come prima"

$$+\infty-\infty+0\qquad FI\text{ (forma indeterminata)}$$
$$a_{n}=n(1-n^{2}+ \frac{1}{n^{2}})\rightarrow$$
$$+\infty(1-\infty+0)=+\infty(-\infty)=-\infty$$
c. $a_{n}= \frac{n^{3}-1}{1-n^{2}}$
$$\frac{+\infty}{-\infty}\qquad FI$$
$$a_{n}=\frac{n^{2} (n- \frac{1}{n})}{n^{2}( \frac{1}{n^{2}}-1)}\rightarrow$$
$$\frac{+\infty}{-1}=-\infty$$
d. $a_{n}=7n-2\cos(2n)$

- $7n\to+\infty$
- ![[rM drawing 2023-09-28-08.45.22.png]] Probabilmente $cos(2n)$ non ha limite (si può dimostrare che è così).

$-2\leq-2cos(2n)\leq+2\rightarrow$
$$a_{n}\geq7n-2\to+\infty-2=+\infty$$
Per confronto: $$a_{n}\Rightarrow+\infty$$
e) $a_{n}= \frac{1}{n}+(-1)^{n}\cdot \frac{1}{n}$
- $\frac{1}{n}\to0$
- $(-1)^{n}\quad\text{non ha limite (ma è limitato)}$
	- $(-1)^{n}\cdot \frac{1}{n}\to0$
	- è un applicazione del confronto: $$-1\leq(-1)^{n}\leq1\Rightarrow- \frac{1}{n}\leq(-1)^{n} \frac{1}{n}\leq \frac{1}{n}\Rightarrow 0\leq...\leq0$$

$$a_{n}\to0+0=0$$

f) $a_{n}=n^{2}+(-1)^{n}n$

- $(-1)^{n}n\quad\text{non ha limite}$
	- $-n\leq(-1)^{n}n\leq+n$
	- $a_{n}\geq n^{2}-n\to+\infty$

Per confronto:
$$a_{n}\to+\infty$$

g) $a_{n}=\frac{(n+2)!+(n+1)!}{(n+2)!-(n+1)!}$
$$+\infty-\infty\qquad FI$$

$(n+2)!=(n+2)\cdot(n+1)!$

$$\frac{(n+1)!(n+2+1)}{(n+1)!(n+2-1)}=\frac{n+3}{n+1}=\frac{\infty}{\infty}\qquad FI$$
$$=\frac{1+ \frac{3}{n}}{1+ \frac{1}{n}}\to \frac{1}{1}=1$$

h. $a_{n}= \frac{n!}{(n+1)!-n!}$
$$\frac{1}{n}\to0$$

i. $a_{n}= \frac{n}{2^{n}}$
$$\frac{+\infty}{+\infty}\qquad FI$$
$2^{n}\geq n^{2}\Rightarrow \frac{1}{2^{n}}\leq \frac{1}{n^{2}}$
$$a_{n}\leq \frac{n}{n^{2}}= \frac{1}{n}\to0$$
Quindi: $0\leq a_{n}\leq \frac{1}{n}$
Per confronto:
$$a_{n}\to0$$

>[!tip]
>In generale $\frac{n}{c^{n}}\to0\quad\forall c>1$
>
>Anche $\frac{n^{b}}{c^{n}}\to0\quad\forall c>1$


2) Sia $x_{0}=2$, $x_{n+1}= \frac{x_{n}}{2}+ \frac{1}{x_{n}}\quad\forall n\geq0$
già visto: $x_{0}>0$ e $x_{n}^{2}\geq 2\quad\forall n\geq 0$

Mostrare che $x_{n}$ è decrescente e non può avere limite in $\mathbb{Q}$
(Per esempio $x_{n}\in\mathbb{Q}\quad\forall n\geq 0$)

$$\forall n\geq 0:\quad x_{n+1}-x_{n}=\frac{x_{n}}{2}+ \frac{1}{x_{n}}-x_{n}=$$
$$\frac{x_{n}^{2}+2-2x_{n}^{2}}{2x_{n}}=\frac{2-x_{n}^{2}}{2x_{n}}\leq 0$$
poiché $x_{n}^{2}\geq 2$ segue: $$x_{n+1}\geq x_{n}$$cioè $x_{n}$ è decrescente.

Se esiste $\lim_{n\to+\infty} x_{n}=l$, allora $\lim_{n\to+\infty}x_{n+1}=l$

(Si può verificare con la definizione)
![[rM drawing 2023-09-28-09.18.33.png]]

$$l= \frac{l}{2}+ \frac{1}{l}$$
$$2l^{2}=l^{2}+2$$
$$l^{2}=2$$
$$\nexists l\in\mathbb{Q}:\quad l^{2}=2$$
$x_{n}$ non può avere limite in $\mathbb{Q}$

$$\lim_{n\to+\infty}x_n=\sqrt{2}\in\mathbb{R}\backslash \mathbb{Q}$$
3) Sia $a_{n}(1+ \frac{1}{n})^{n}$ 
a. verificare che è crescente
b. verificare che $2\leq a_{n}<3\quad\forall n\geq1$

a. $$a_{n}=\sum\limits_{k=0}^{n}\begin{pmatrix}n\\k\end{pmatrix}1^{n-k}( \frac{1}{n})^{k}=\sum\limits_{k=0}^{n}\frac{n!}{(n-k)!k!}\frac{1}{n^{k}}=$$
$$\frac{n!}{n!0!} \frac{1}{n^{0}}+ \frac{n(n-1)!}{(n-1)!1!} \frac{1}{n}+\sum\limits_{k=2}^{n}\frac{n!}{(n-k)!k!n^{k}}=$$
$$1+1+\sum\limits_{k=2}^{n}\frac{n(n-1)(...)(n-k+1)(n-k)!}{(n-k)!k!n^{k}}=$$
$$=2+\sum\limits_{k=2}^{n}\frac{n}{n}\cdot\frac{n-1}{n}\cdot...\cdot\frac{n-k+1}{n}\cdot\frac{1}{k!}=$$
$$= 2+\sum\limits_{k=2}^{n}(1- \frac{1}{n})(1- \frac{2}{n})(...)(1- \frac{k-1}{n})\frac{1}{k!}$$
Se sostituiamo $n+1$ al posto di $n$:

$$1-\frac{1}{n+1}>1- \frac{1}{n}$$
$$...$$
$$1- \frac{k-1}{n}>1- \frac{k-1}{n+1}$$
Allora
$$a_{n+1}= 2+\sum\limits_{k=2}^{n}(1- \frac{1}{n+1})(1- \frac{2}{n+1})(...)(1- \frac{k-1}{n+1})\frac{1}{k!}>$$
$$> 2+\sum\limits_{k=2}^{n}(1- \frac{1}{n})(1- \frac{2}{n})(...)(1- \frac{k-1}{n})\frac{1}{k!}=a_{n}$$
Quindi abbiamo dimostrato che
$$a_{n+1}>a_{n}$$

b.

Segue subito che $a_{n}\geq2$, perché il primo termine è due ($a_{n}\geq a_{1}=2$)

$$a_{n}=(1+ \frac{1}{n})^{n}<2+\sum\limits_{k=2}^{n} \frac{1}{k!}\leq2+\sum\limits_{k=2}^{n} \frac{1}{2^{k-1}}$$
(Poiché abbiamo dimostrato $n!\geq 2^{n-1}\quad\forall n\geq0$)
$$=2+\sum\limits_{k=0}^{n} \frac{1}{2^{k-1}}- \frac{1}{2^{-1}}- \frac{1}{2^{0}}=$$
$$=2+\sum\limits_{k=0}^{n} \frac{1}{2^{-1}2^{k}}-2-1=$$
$$=2\sum\limits_{k=0}^{n}( \frac{1}{2})^{k}-1=2\frac{1}{1-\frac{1}{2}}-1=$$
$$4-1=3$$
Dunque $$a_{n}<3$$

>[!tip]
>Segue che la successione $a_{n}=(1+ \frac{1}{n})^{n}$ è convergenge
>Si pone $e:=\lim_{n\to+\infty}(1+ \frac{1}{n})^{n}$, ed è detto numero di Neplero (o Eulero)
>
>Si è potrebbe dimostrare che $e$ è irrazionale;$$2<e<3\quad e=2.71...$$

---

Estremi di sottoinsiemi di $\mathbb{R}$

4) determinare se esistono: inf, min, sup, max di:

$$E=\{x\in\mathbb{R}: 2^{\sqrt{2x+9}}\leq2^{9-x}\}$$
Occorre risolvere: $2^{\sqrt{2x+9}}\leq2^{9-x}$:
$$\sqrt{2x+9}\leq9-x$$
Deve esistere la radice quadrata $2x+9\geq0$, $9-x\geq0$

$$\begin{cases}2x+9\geq0\\9-x\geq0\\\sqrt{2x+9}\leq9-x\end{cases}$$
$$\begin{cases}x\geq- \frac{9}{2}\\ x\leq9\\ x^{2}-18x+81-2x-9\geq0\end{cases}$$
$$\begin{cases}- \frac{9}{2}\leq x\leq9\\ x\leq 10-\sqrt{28} \lor x\geq10+\sqrt{28}\end{cases}$$
$4<10-\sqrt{28}<5$

![[rM drawing 2023-09-28-10.12.45.png]]

$$E=[- \frac{9}{2}, 10-\sqrt{28}]$$
$$min(E)=inf(E)=- \frac{9}{2};\quad max(E)=sup(E)=10-\sqrt{28}$$

