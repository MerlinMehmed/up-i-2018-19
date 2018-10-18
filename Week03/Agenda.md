# Седмица 3
## Побитови операции
### Shift left
**оператор <<**

Умножение на число с 2^n

### Shift right
**оператор >>**

Делене на число на 2^n

## Условни оператори
### if
> **if**(<условие>) <оператор>

```c++
int a = 2;
if(a > 0) 
{
	cout << "Number is positive";
}
```
### if ... else
> **if**(<условие>) <оператор1> <br>
> **еlse** <оператор2>

```c++
int a = 2;
if(a >= 0) 
{
	cout << a;
}
else 
{
	cout << -a;
}
```
### if ... else if ... else

> **if**(<условие1>) <оператор1> <br>
> **else if**(<условие2>) <оператор1> <br>
> ... <br>
> **еlse** <операторN>

```c++
int a = 2;
if(a > 0) 
{
	cout << "Number is positive";
}
else if(a == 0)
{
	cout << "Number is zero";
}
else
{
	cout << "Number is negative";
}
```
### Тернарен оператор
> <условие> ? <операторИстина> : <операторЛъжа>

```c++
a >= 0 ? a : -a;
```
### switch
> **switch**(<израз>)<br>
> {<br>
>  **case** <израз1> : <оператор1,1>; <оператор1,2>; ... [break;]<br>
>  **case** <израз2> : <оператор2,1>; <оператор2,2>; ... [break;]<br>
>  ...<br>
>  **case** <изразN> : <операторN,1>; <операторN,2>; ... [break;]<br>
>  [**default**: <оператор1>; <оператор2>; ...]<br>
> }<br>

> **<израз>** - bool, int, char, enum
> **<израз1> ... <изразN>** - израз с константна стойност

```c++
int dayOfWeek = 3;
switch(dayOfWeek)
{
    case 1: cout << "Monday" << endl; break;
    case 2: cout << "Tuesday" << endl; break;
    case 3: cout << "Wednesday" << endl; break;
    case 4: cout << "Thursday" << endl; break;
    case 5: cout << "Friday" << endl; break;
    case 6: cout << "Saturday" << endl; break;
    case 7: cout << "Sunday" << endl; break;
    default: cout << "Week has only 7 days" << endl;
}
```

## Цикли
### for
> **for**(<инициализация>;<условие>;<корекция>) <br>
> <оператор>

```c++
for(int i = 0; i < 10; i += 2)
{
    cout << i << endl;
}
```

```
> 0 2 4 5 6 8
```
### while
> **while**(<условие>) <br>
> <оператор>
```c++
int i = 0;
while(i < 10)
{
    cout << i << endl;
    i += 2;
}
```

### do ... while
> **do** <br>
> <оператор>; <br>
> **while**(<условие>);

```c++
int number = 0;
do {
    cout<<"Enter a number: ";
    cin>>number;
} while(number < 0);
```

