Il modulo è una funzione il cui scopo è rendere l'argomento uguale al suo valore assoluto

$$f: q \rightarrow q\qquad f(q)=\begin{cases}q & q\geq0 \\-q & q<0\end{cases}$$
>[!example]
>$$f(1)=1\quad f(-1)=1\quad f(0) = 0$$


```functionplot
---
bounds: [-3,3,-3,3]
disableZoom: false
grid: true
---
f(x)=abs(x)
```

 La notazione utilizzata per esprimere il modulo è: $$|q|$$
Il modulo è utilizzato per calcolare la [[Distanza euclidea|distanza euclidea]].

## Proprietà del modulo
- $|q|=0 \Leftrightarrow q=0$ -> $|a-b|=0 \Leftrightarrow a=b$
- $|q_1\cdot q_2|=|q_1|\cdot|q_2|$
- $|q_1+q_2|\leq|q_1|+|q_2|$ -> $|q_1-q_2|\leq|q_1-q_3|+|q_3-q_2|$ (Disuguaglianza triangolare)
- $|-q|=|q|$
- $-q < x < q \Leftrightarrow |x| < q$

