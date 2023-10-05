## Estremi di sottoinsiemi di $\mathbb{R}$

già visto:
$$E=\{x\in\mathbb{R}:2^{\sqrt{2x+9}}\leq2^{9-x}\}=[- \frac{9}{2}, 10-\sqrt{28}]$$


1) $$E_{1}=\{q\in\mathbb{Q}:2^{\sqrt{2q+9}}\leq2^{9-q}\}$$
$$E_{1}=E\cap\mathbb{Q}=[- \frac{9}{2}, 10-\sqrt{28}]\cap\mathbb{Q}$$
$$inf(E_{1})=min(E_{1})=- \frac{9}{2}$$
(perché $- \frac{9}{2}\in E_{1}$ è un minorante)
$$sup(E_{1})=10-\sqrt{28}$$
infatti è chiaro che è un maggiorante, mentre $10-\sqrt{28}-\epsilon\quad (\epsilon>0)$ non è un maggiorante perché in $(10-\sqrt{28}-\epsilon,10-\sqrt{28})$ ci sono infiniti razionali.
$$10-\sqrt{28}\notin E_{1}\Rightarrow\nexists max(E_{1})$$
2)
$$E_{2}=E\cap\mathbb{N}$$
$E_{2}$ ha un numero finito di elementi. => c'è un massimo e un minimo $\exists max(E_{2}),min(E_{2})$
Ricordiamo $$E=[- \frac{9}{2}, 10-\sqrt{28}]$$
$$min(E_{2})=inf(E_{2})=0$$
Ricordando che $4<\sqrt{28}<5$
$$max(E_{2})=sup(E_{2})=4$$
3)
$$E=\{x\in\mathbb{R}:(\log_{x}2)(\log_{2x}2)(\log_{2}4x)>1 \}$$
N.B. $\log a:=\log_{e}a=\ln a$

Condizioni di esistenza:
$$\begin{cases}x>0\\x\neq 1. \frac{1}{2}\end{cases}$$
Proprietà di cambio base dei logaritmi:
$$\log_{a}b= \frac{\log_{c}b}{\log_{c}a}$$

=>

$$\log_{x}2= \frac{\log_{2}2}{\log_{2}x}= \frac{1}{\log_{2}x}$$
$$\log_{2x}2= \frac{1}{\log_{2}(x+1)}$$
$$\log_{2}4x=\log_{2}x+2$$
La disequazione che definisce $E$ si riscrive
$$(\frac{1}{\log_{2}x})( \frac{1}{\log_{2}(x+1)})(\log_{2}x+2)>0$$
$$\frac{\log_{2}x+2-\log_{2}x(\log_{2}(x+1))}{\log_{2}x(\log_{2}(x+1))}>1$$
$$\frac{2-(\log_{2}x)^{2}}{\log_{2}x(\log_{2}(x+1))}>0$$



$$2-(\log_{2}x)^{2}\geq0\Rightarrow-\sqrt{2}\leq\log_{2}x\leq\sqrt{2}\Rightarrow2^{-\sqrt{2}}\leq x\leq2^{-\sqrt{2}}$$
$$\log_{2}x\geq0\Rightarrow x\geq1$$
$$log_{2}x+1\geq0\Rightarrow x\geq \frac{1}{2}$$
![[rM drawing 2023-10-03-15.04.34.png]]

$$E=(2^{-\sqrt2}, \frac{1}{2})\cup(1,2^{\sqrt2})$$

$$2^{-\sqrt2}=inf(E),\quad\nexists min(E)$$
$$2^{\sqrt2}=sup(E),\quad\nexists max(E)$$
