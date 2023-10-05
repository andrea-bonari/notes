$\mathbb{N}\subset\mathbb{Z}\subset\mathbb{Q}\subset\mathbb{R}\subset\mathbb{C}$

I numeri complessi esistono per risolvere casi come: l'equazione $z^{2}=-1$ che non ha soluzioni in $\mathbb{R}$, ma in $\mathbb{C}$.

>Insiemisticamente l'insieme dei numeri complessi è definito come $$\mathbb{C}:=\mathbb{R}\cdot\mathbb{R}\ni(a,b)\quad a,b\in\mathbb{R}$$
>![[Pasted image 20230927105620.png]]

Questo è detto piano di Gauss.
## Operazioni:

$\mathbb{C}\ni z = (a,b)$
$\mathbb{C}\ni w = (c,d)$
#### Somma

$$z+w:=(a+c,b+d)\in\mathbb{C}$$
Rappresentazione algebrica:
$$z+w:=(a+ib)+(c+id)=(a+c)+i(b+d)$$
Interpretazione geometrica: [regola del parallelogramma](obsidian://vault/MAT-03/Vettori%20fisici#somma)
#### Prodotto

$$\mathbb{C}\ni z\cdot w:=(a,b)\cdot(c,d)=(ac-bd, ad+bc)$$
Rappresentazione algebrica:
$$z\cdot w:=(a+ib)(c+id)=ac+aid+ibc+ibid=$$
$$=(ac+i^{2}bd)+i(ab+bc)=(ac-bd)+i(ad+bc)$$
## Proprietà algebriche
- Commutatività: $z+w=w+z\quad z\cdot w=w\cdot z$
- Associatività: $z+(w+v)=(z+w)+v\quad z\cdot(wv)=(zw)\cdot v$
- Distributività: $z\cdot(w+v)=zw+zv$

## Proprietà

#### Opposto: 
$$w=-z$$ e quindi:
$$z=a+ib=(a,b)\Rightarrow w=-a-ib=(-a,-b)$$
$$z+w=0=(0,0)$$

#### Reciproco: 
$$w=z^{-1}= \frac{1}{z}=(\frac{a}{a^{2}+b^{2}},\frac{b}{a^{2}+b^{2}})= \frac{1}{a^{2}+b^{2}}(a-ib)$$
e quindi:
$$z=a+ib\neq0$$
$$z^{-1}z=1$$
#### Proprietà fondamentale di $i=(0,1)\in\mathbb{C}$:

$$i^{2}=(0-1,0)=(-1,0)=-1$$
$$i^{3}=-i$$
$$i^{4}=1$$

#### Coniugato:

$$\overline{z}:=\overline{a+ib}:=a-ib$$
$$Re(\overline{z})=Re(z)=a$$
$$Im(\overline{z})=-Im(z)=-b$$
###### Proprietà del coniugato
- $\overline{z+w}=\overline{z}+\overline{w}$
- $\overline{zw}=\overline{z}\cdot\overline{w}$
#### Modulo:
$$|z|:=\sqrt{a^{2}+b^{2}}=\sqrt{Re(z)^{2}+Im(z)^{2}}$$
Interpretazione geometrica:
![[rM drawing 2023-10-03-16.09.05.png]]
Quindi possiamo dire che $|z|$ è la [[Distanza euclidea|distanza euclidea]] tra $z$ e 0, e quindi di conseguenza $|z-w|$ è la distanza euclidea tra $z$ e $w$.
###### Proprietà del modulo

- $|-z|=|z|$
- $|\overline{z}|=|z|$
- $|z|=\sqrt{z\cdot\overline{z}}\Rightarrow z\cdot\overline{z}=|z|^{2}$
- Disuguaglianza triangolare: $|z+w|\leq|z|+|w|\qquad|z_{1}-z_{3}|\leq|z_{1}-z_{2}|+|z_{2}-z_{3}|$
![[rM drawing 2023-10-03-16.42.04.png]]

>[!example]
>Calcolare $Re( \frac{1}{z})$ e $Im( \frac{1}{z})$
>
>$$\frac{1}{z}= \frac{1}{z}\cdot \frac{\overline{z}}{z}=\frac{\overline{z}}{|z|^{2}}=\frac{a-ib}{a^{2}+b^{2}}= \frac{a}{a^{2}+b^{2}}-i \frac{b}{a^{2}+b^{2}}$$
### Elementi neutri:

Somma: $(0,0)\in\mathbb{C}:\quad(0,0)+(a,b)=(a,b)$
Prodotto: $(1,0)\in\mathbb{C}:\quad(1,0)+(a,b)=(a,b)$

![[Pasted image 20230927110824.png]]

### Immersione di $\mathbb{R}$ in $\mathbb{C}$:

$$i: \mathbb{R}\rightarrow\mathbb{C}\quad i(x):=(x,0)\quad x\in\mathbb{R}$$
![[Pasted image 20230927111008.png]]

questa funzione è iniettiva.


Notazione: si identificherà $x\in\mathbb{R}$ con $i(x)=(x,0)\in\mathbb{C}$, al posto di scrivere $(x,0)$=>$x$.

La funzione iniettiva $i: \mathbb{R}\rightarrow\mathbb{C}$ rispetta le operazioni somma e prodotto in $\mathbb{R}$ e in $\mathbb{C}:$

$$i(x)+i(y)=i(x+y)\quad x,y\in\mathbb{R}$$
$$i(x)i(y)=i(xy)\quad x,y\in\mathbb{R}$$

## Rappresentazione algebrica

$$\mathbb{C}\ni z=(a,b)=(a,0)+(0,b)=i(a)+(0,b)=$$
$$=a+(0,b)=a+(0,1)(b,0)=a+(0,1)b$$

Definiamo con $i:=(0,1)\in\mathbb{C}$ e lo definiamo unità immaginaria.

>$z=(a,b)=a+ib\qquad a,b\in\mathbb{R}\subset\mathbb{C}$
>$a= Re(Z)=$ parte reale di $z$
>$b= Im(Z) =$ parte immaginaria di $z$

>[!example]
>$$z=-1+5i$$
>
>$Re(Z)=-1$
>$Im(Z)=+5$

## Rappresentazione trigonometrica
$$\mathbb{C}\ni z\neq0\Rightarrow|z|\neq0$$
$$z=|z|\cdot \frac{z}{|z|}=\rho\cdot w\quad\text{dove}\quad\begin{cases}\rho:=|z|\\w:= \frac{z}{|z|}\end{cases}$$
Notare che:
$$|\frac{z}{|z|}|= \frac{|z|}{||z||}= \frac{|z|}{|z|}=1\Rightarrow |w|=1$$
![[rM drawing 2023-10-03-16.52.06.png]]
$$w=(\cos\theta+i\sin\theta)$$
e quindi $\mathbb{C}\ni z$ è individuato dal modulo $\rho=|z|$ e dall'argomento $d\cdot z$
$$z=\rho(\cos\theta+i\sin\theta)$$
dove $\theta=:Arg(z)$

>[!example]
>$z=1+i$
>
>$|z|=\sqrt{1^{2}+1^{2}}=\sqrt{2}$
>Geometricamente l'angolo $\theta$ è di $\frac{\pi}{4}$
>
>$z=1+i=\sqrt2(\cos\frac{\pi}{4}+i\sin\frac{\pi}{4})$

>[!example]
>Trovare la forma trigonometrica di $z=\cos\frac{\pi}{3}-i\sin\frac{\pi}{3}$
>
>>[!warning]
>>la forma non è $w=(\cos\theta-i\sin\theta)$, ma $w=(\cos\theta+i\sin\theta)$
>
>$|z|=1$, sia per logica che per proprietà fondamentale della goniometria
>$z=\cos-\frac{\pi}{3}+i\sin-\frac{\pi}{3}$

>[!example]
> Proposizione prima formula di de Moivre
> 
> $\mathbb{C}\ni z_{1}=\rho_{1}(\cos\theta_{1}+i\sin\theta_{1})$
> $\mathbb{C}\ni z_{2}=\rho_{2}(\cos\theta_{2}+i\sin\theta_{2})$
> 
> $z_{1}z_{2}=\rho_{1}(\cos\theta_{1}+i\sin\theta_{1})\rho_{2}(\cos\theta_{2}+i\sin\theta_{2})=$
> $=\rho_{1}\rho_{2}(\cos\theta_{1}+i\sin\theta_{1})(\cos\theta_{2}+i\sin\theta_{2})$
> $=\rho_{1}\rho_{2}[(\cos\theta_{1}\cos\theta_{2}-\sin\theta_{1}\sin\theta_{2})+i(\sin\theta_{1}\cos\theta_{2}+\cos\theta_{1}\sin\theta_{2})]=$
> $=\rho_{1}\rho_{2}(\cos(\theta_{1}+\theta_{2})+i\sin(\theta_{1}+\theta_{2}))$
> 
> Quindi:
> $$|z_{1}z_{2}|=\rho_{1}\rho_{2}=|z_{1}|\cdot|z_{2}|$$
> $$Arg(z_{1}z_{2})=\theta_{1}+\theta_{2}=Arg(z_{1})+Arg(z_{2})$$

In generale:
$$z=\rho(\cos\theta+i\sin\theta)$$
$$k\geq1:\qquad z^{k}=\rho^{k}(\cos k\theta+i\sin k\theta)$$

>[!example]
>calcolare $Re(z)$ e $Im(z)$ di $z=(1+i)^{8}$
>
>$z=\sqrt2^{8}(\cos8 \frac{\pi}{4}+i\sin8 \frac{\pi}{4})$
>$z=16(\cos2\pi+i\sin2\pi)=16+0i=(16,0)$

>[!tip]
>$Arg(z)$ è determinato a meno di multipli interi di $2\pi$. Di norma si confina $Arg(z)$ in $[0,2\pi]$ o $[-\pi,\pi]$, e questi si dicono intervalli di veridicità delle funzioni di coseno e seno.

### Seconda formula di Moivre

Dati $w\in\mathbb{C}\quad w\neq0$ e $n\in\mathbb{N}\quad n\neq0$, l'equazione:
$$z^{n}=w$$
ha esattamente $n$ soluzioni (o radici di $w$).

$z_{0}, z_{1}, ..., z_{n-1}\in\mathbb{C}\backslash\{0\}$, cioè
$$z_{k}^{n}=w\qquad\forall k=0,1,...,n-1$$
Date in forma trigonometrica da:
$$z_{k}=\rho_{k}(\cos\theta_{k}+i\sin\theta_{k})$$
$$\rho_{k}=\rho^{\frac{1}{n}}\quad\quad\theta_{k}= \frac{\theta+2k\pi}{n}\quad k=0,1,...,n-1$$

$\theta_{0}= \frac{0}{n}$
$\theta_{1}= \frac{\theta+2\pi}{n}$

>[!example] Dimostrazione
>$z_{k}=\rho^{\frac{1}{k}}(\cos\theta_{k}+i\sin\theta_{k})$, per la prima formula di Moivre:
>$$z_{k}^{n}=(\rho^{\frac{1}{k}}(\cos\theta_{k}+i\sin\theta_{k}))^{n}=$$
>$$(\rho^{\frac{1}{k})})^{n}(\cos k\theta+i\sin k\theta)=$$
>$$\rho(\cos(\theta+2k\pi)+i\sin(\theta+2k\pi))=$$
>$$\rho(\cos\theta+i\sin\theta)=w\quad\forall k=0,...,n-1$$
>
>Ogni $2k$ è soluzione dell'equazione (cioè una radice di $w$)
>
>Dall'altra parte se $z=r(\cos\alpha+i\sin\alpha)$ è soluzione dell'equazione: $$z^{n}=w$$
>di modulo $r$ e $Arg(z)=\alpha$, Allora
>$$w=\rho(\cos\theta+i\sin\theta)=z^{n}=r^{n}(\cos n\theta+i\sin n\theta)$$
>$$\rho=r^{n}\Rightarrow r=\rho^{\frac{1}{n}}$$
>$$n_\alpha=\theta+2k\pi\quad k\in\mathbb{Z}\Rightarrow$$
>$$\alpha= \frac{\theta+2k\pi}{n}\quad k=0,1,...,n-1$$

Corollando le n-radici ennesime di $w\in\mathbb{C}\quad w\neq0$ sono i vertici di un poligono regolare di $n$ lati, inscritto sulla circonferenza centrata $0\mathbb{C}$, di raggio $\rho^{\frac{1}{n}}$ ($\rho=|w|$):
![[rM drawing 2023-10-04-09.02.07.png]]
L'angolo formato da due radici è uguale a $\frac{2\pi}{n}$.

>[!example]
>$z^{n}=-1\quad w=-1\quad|w|=\rho$
>
>$\rho^{\frac{1}{n}}=1\quad Arg(w)=\pi$
>
>$z_{0}=1(\cos \frac{\pi}{2}+i\sin \frac{\pi}{2})=i$
>$z_{1}=1(\cos \frac{3\pi}{2}+i\sin \frac{3\pi}{2})=-i$
>
>$w=-1$ ha due radici quadrate $\pm i$

>[!example]
>$z^{4}=1\quad w=1(\cos0+i\sin0)$
>
>$\rho^{\frac{1}{4}}=1\quad\forall n=0,1,...,3$
>$\theta_{k}=k \frac{\pi}{2}\quad\forall k=0,...,3$
>
>$\theta_{0}=0\quad\theta_{1}= \frac{\pi}{2}\quad\theta_{3}=\pi\quad\theta_{4} \frac{3\pi}{2}$
>$z_{0}=1\quad z_{1}=i\quad z_{2}=1\quad z_{3}=-i$

>[!example]
>$z^{3}=+1$

## Teoria fondamentale dell'algebra

Una funzione $P: \mathbb{C}\rightarrow\mathbb{C}$ è polinomio di grado $n\geq0$ se è del tipo $P(z)=c_{0}+c_{1}z^{1}+c_{2}z^{2}+...+c_{n}z^{n},\quad z\in\mathbb{C}$
Dove $c_{0},c_{1},...,c_{n}\in\mathbb{C}\quad c_{n}\neq0$ sono coefficienti di $P$ fissati.

>[!example]
>$$P(z)=1+z+z^{2}\quad z\in\mathbb{C}$$

L'equazione $P(z)=0$ è detta algebrica di grado $n$. Le sue soluzioni sono gli 0 del polinomio.

>[!example]
>Dato $w:\quad P(z)=z^{n}-w$, le soluzioni di $P(z)=0$ sono le $n$-radici n-esime di $w$:
>
>$$P(z)=0\Rightarrow z^{n}=w$$

> Sia $P: \mathbb{C}\rightarrow\mathbb{C}$ è polinomio di grado $n\geq1$ allora l'equazione algebrica $$P(z)=0$$ ha esattamente $n$ soluzioni se ogni una è contata con la propria molteplicità.

$$p(z)=c_{n}(z-W_{1})^{w_{1}}(z-W_{2})^{w_{2}}(...)((z-W_{n})^{w_{n}})$$
dove $w_{1}, ..., w_{n}\in\mathbb{C}$:
dove $w_{1},...,w_{n}\in\mathbb{N}\backslash\{0\}$ e quindi
$$w_{1}+w_{2}+...+w_{n}=N$$
 $$P(z)=0\Rightarrow z=w_{1}, z=w_{2}, ..., z=w_{n}$$

$$P(x)=x^{2}+1\neq0\quad\forall x\in\mathbb{R}$$
$$P(z)=z^{2}+1=0\quad z=\pm i$$

>[!example]
>$$P(z)=az^{2}+bz+c\quad\begin{matrix}g(P)=0\\a\neq0\end{matrix}$$
>$$P(z)=0\quad z=\frac{-b\pm\sqrt{b^{2}-4ac}}{2a}$$

# Luoghi geometrici e trasformazioni del piano di Gauss

1.  Dato $r>0$ e $c\in\mathbb{C}$ l'insieme $$C:=\{z\in\mathbb{C}:\quad|z-z_{0}|=r
   \}$$ è una circonferenza di raggio $r$ con centro $z_{0}$.
2. $$D:=\{z\in\mathbb{C}:\quad|z-z_{0}|<r\}$$ è disco da raggio $r>0$, centro $z_{0}$ senza circonferenza.
3.  $$\{z\in\mathbb{C}:\quad|z-z_{0}|\leq r
   \}= D\cup C$$
4. $$\{z\in\mathbb{C}:\quad Re(z)\leq 0
   \}$$ semipiano positivo.
5. $$\{z\in\mathbb{C}:\quad Im(z)\leq 0
   \}$$ semipiano superiore.
6. $$C:=\{z\in\mathbb{C}:\quad|z-z_{1}|=|z-z_{2}|
   \}$$ con $z_{1}, z_{2}\in\mathbb{C}$ dati $z_{1}\neq z_{2}$
   ![[rM drawing 2023-10-04-10.02.46.png]]

## Trasformazioni

1. Translazioni: $$T_{w}:=\mathbb{C}\rightarrow\mathbb{C}\quad w\in\mathbb{C}$$ dato $$T_{w}(Z):=z+w$$
2. Rotazioni in $\mathbb{C}$
	Dato $w\in\mathbb{C},\quad|w|=i$
	$$R_{w}: \mathbb{C}\rightarrow\mathbb{C}\quad R_{w}(z):=wz$$
	$z=\rho(\cos\theta+i\sin\theta)\Rightarrow$
	$R_{w}(z)=zw=\rho(\cos(\theta+\alpha)+i\sin(\theta+\alpha))$

3. Dilotrazioni
	$$D_{r}: \mathbb{C}\rightarrow\mathbb{C}\quad D_{r}(z):=rz\quad\forall z\in\mathbb{C}$$
	$$|D_{r}(z)|=|zr|=|r||z|=r|z|$$
	$$Arg(D_{r}(z))=Arg(z)$$


Funzione di zukawski

$$f(z)= \frac{1}{2}(z+ \frac{1}{z})\quad z\neq0$$
$$f: \mathbb{C}\backslash\{0\}\rightarrow\mathbb{C}$$
