$\mathbb{B}\subset\mathbb{Z}\subset\mathbb{Q}\subset\mathbb{R}\subset\mathbb{C}$

I numeri complessi esistono per risolvere casi come: l'equazione $z^{2}=-1$ che non ha soluzioni in $\mathbb{R}$, ma in $\mathbb{C}$.

>Insiemisticamente l'insieme dei numeri complessi è definito come $$\mathbb{C}:=\mathbb{R}\cdot\mathbb{R}\ni(a,b)\quad a,b\in\mathbb{R}$$
>![[Pasted image 20230927105620.png]]

Questo è detto piano di Gauss.
## Operazioni:

$\mathbb{C}\ni z = (a,b)$
$\mathbb{C}\ni w = (c,d)$
#### Somma

$$z+w:=(a+c,b+d)\in\mathbb{C}$$

Interpretazione geometrica: [regola del parallelogramma](obsidian://vault/MAT-03/Vettori%20fisici#somma)
#### Prodotto

$$\mathbb{C}\ni z\cdot w:=(a,b)\cdot(c,d)=(ac-bd, ad+bc)$$

## Proprietà algebriche
- Commutatività: $z+w=w+z\quad z\cdot w=w\cdot z$
- Associatività: $z+(w+v)=(z+w)+v\quad z\cdot(wv)=(zw)\cdot v$
- Distributività: $z\cdot(w+v)=zw+zv$

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

>$z=(a,b)=a+ib$
>$a: Re(Z)=$ parte reale di $z$
>$b: im(Z) =$ unità immaginaria di $z$


Proprietà fondamentale di $i=(0,1)\in\mathbb{C}$

$i^{2}=(0-1,0)=(-1,0)\sim-1$
$i$ risolve in $\mathbb{C}$ l'equazione $z^{2}=-1$ che in $\mathbb{R}$ non aveva soluzioni