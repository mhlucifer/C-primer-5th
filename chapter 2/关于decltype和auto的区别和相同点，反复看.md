`decltype` 和 `auto` 都用于类型推导，但它们的工作方式略有不同，并且有着不同的用途。

### `decltype`：
- `decltype` 用于推导表达式的类型。
- 它会保留变量的`const`属性和左值/右值性质。

```cpp
const int a = 3;
decltype(a) b = 1; // b的类型是 const int
```

### `auto`：
- `auto` 用于自动推导变量的初始化类型。
- 它会忽略顶层`const`和引用，保留底层`const`。

```cpp
const int a = 3;
auto b = a; // b的类型是 int，忽略了const
```

### 相同点举例：

```cpp
int x = 10;
auto a = x; // a的类型是 int
decltype(x) b = x; // b的类型也是 int
```

在这个例子中，`auto` 和 `decltype` 得到的类型都是 `int`。

### 不同点举例：

```cpp
int x = 10;
auto a = (x); // a的类型是 int
decltype((x)) b = x; // b的类型是 int&，因为(x)是左值表达式
```

在这个例子中，`auto` 和 `decltype` 得到的类型不同。`auto` 得到的是 `int`，而 `decltype((x))` 得到的是 `int&`，因为 `(x)` 是一个左值表达式。

这个例子突显了 `decltype` 和 `auto` 在处理表达式时的主要区别：`decltype` 考虑表达式的类型和值类别（左值或右值），而 `auto` 主要关注初始化的类型，并且会忽略掉顶层的 `const` 和引用。